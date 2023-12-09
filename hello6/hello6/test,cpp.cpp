#define _CRT_SECURE_NO_WARNINGS 1

// hello 算法 第六章 哈希表

#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include<vector>
#include<stack>
#include<unordered_map>

using namespace std;

/*
   哈希表：散列表
   建立 键key 和 值value 之间的映射 时间复杂度都是 O(1)
   查找元素
   添加元素
   删除元素
*/

// 常用操作
void testMap()
{
	unordered_map<int, string>map;

	// 添加操作
	// 在哈希表中添加键值对 (key, value)
	map[12345] = "谢玉辉";
	map[23456] = "大帅哥";
	map[34567] = "DK";
	map[45678] = "伪娘";
	map[56789] = "鹿鞭膏";
	map[67890] = "yyds";

	// 查询操作
	// 向哈希表输入键key，得到值value
	string name = map[12345];
	cout << "查询结果: " << name << endl;

	// 删除操作
	// 在哈希表中删除键值对 (key, value)
	map.erase(67890);

	// 哈希表三种遍历方式：遍历键值对，遍历键，遍历值
	// 遍历键值对 key -> value
	for (auto kv : map)
		cout << kv.first << "->" << kv.second << endl;
	// 使用迭代器遍历 key -> value
	for(auto iter = map.begin(); iter != map.end(); iter++)
		cout << iter->first << "->" << iter->second << endl;
}

// 哈希表的简单实现
// 最简单的情况：仅用一个数组来实现哈希表。数组中的每个空位可以称为 [桶bucket] 
// 每一个桶可以存储 一个键值对
// 实现公式：index = hash(key) % capacity
// 键值对
struct Pair {
	public:
		int key;
		string val;
		Pair(int key, string val) {
			this->key = key;
			this->val = val;
		}
};

// 基于数组实现的哈希表
class ArrayHashMap {
	private:
		vector<Pair*> buckets;

	public:
		ArrayHashMap() {
			// 初始化数组 100 个桶
			buckets = vector<Pair*>(100);
		}

		~ArrayHashMap() {
			// 释放内存
			for (const auto& bucket : buckets) {
				delete bucket;
			}
			buckets.clear();
		}

		// 哈希函数
		int hashFunc(int key) {
			int index = key % 100;
			return index;
		}

		// 查询操作
		string get(int key) {
			int index = hashFunc(key);
			Pair* pair = buckets[index];
			if (pair == nullptr)
				return "";
			return pair->val;
		}

		// 添加操作
		void put(int key, string val) {
			Pair* pair = new Pair(key, val);
			int index = hashFunc(key);
			buckets[index] = pair;
		}

		// 删除操作
		void remove(int key) {
			int index = hashFunc(key);
			// 释放内存并且置为 nullptr
			delete buckets[index];
			buckets[index] = nullptr;
		}

		// 获取所有的键值对
		vector<Pair *> pairSet() {
			vector<Pair*>pairSet;
			for (Pair* pair : buckets)
			{
				if (pair != nullptr)
					pairSet.push_back(pair);
			}
			return pairSet;
		}

		// 获取所有的键
		vector<int> keySet() {
			vector<int> keySet;
			for (Pair* pair : buckets) {
				if (pair != nullptr)
					keySet.push_back(pair->key);
			}
			return keySet;
		}

		// 获取所有的值
		vector<string> valueSet() {
			vector<string> valueSet;
			for (Pair* pair : buckets) {
				if (pair != nullptr)
					valueSet.push_back(pair->val);
			}
			return valueSet;
		}

		// 打印哈希表
		void print() {
			for (Pair* kv : pairSet()) {
				cout << kv->key << "->" << kv->val << endl;
			}
		}
};

// 哈希冲突与扩容
/*
   理论上讲存在：多个输入对应相同输出
   哈希表容量 n 越大，多个 key 被分配到同一个桶中的概率就会越低，冲突就会越少
   所以我们可以通过扩容哈希表来减少冲突
   类似于数组扩容，哈希表扩容需将所有键值对从原哈希表迁移至新哈希表，非常耗时；
   并且由于哈希表容量 capacity 改变，我们需要通过哈希函数来重新计算所有键值对的存储位置，这进一步提高了扩容过程的计算开销。
   为此，编程语言通常会预留足够大的哈希表容量，防止频繁扩容。
「负载因子 load factor」是哈希表的一个重要概念，其定义为哈希表的元素数量除以桶数量，用于衡量哈希冲突的严重程度，也常作为哈希表扩容的触发条件。
*/

// 哈希冲突
/*
解决办法：
1. 改良哈希表数据结构，使得哈希表可以在出现哈希冲突时正常工作。
2. 仅在必要时，即当哈希冲突比较严重时，才执行扩容操作。

而哈希表结构的改良方法就是：
链式地址   
开放寻址
*/


// 链式地址
// 链式地址哈希表
class HashMapChaining {
	private:
		int size; // 键值对数量
		int capacity; // 哈希表容量
		double loadTres; // 负载因子阈值
		int extendRatio; // 扩容倍数
		vector<vector<Pair*>> buckets; // 桶数组

	public:
		// 构造方法
		HashMapChaining() :size(0), capacity(4), loadTres(2.0 / 3.0), extendRatio(2) {
			buckets.resize(capacity); // 调整哈希表容量大小
		}

		// 析构方法
		~HashMapChaining() {
			for (auto& bucket : buckets)
				for (Pair* pair : bucket)
					// 释放内存
					delete pair;
		}

		// 哈希函数
		int hashFunc(int key)
		{
			return key % capacity;
		}

		// 负载因子
		double loadFactor()
		{
			return (double)size / (double)capacity;
		}

		// 查询操作
		string get(int key)
		{
			int index = hashFunc(key);
			// 遍历桶 找到 key 返回 val
			for (Pair* pair : buckets[index])
				if (pair->key == key)
					return pair->val;
			// 若未找到 val ，就返回空字符串
			return "";
		}

		// 扩容
		void extend()
		{
			// 暂存哈希表
			vector<vector<Pair*>> bucketsTmp = buckets;
			// 初始化扩容后的新哈希表
			capacity *= extendRatio;
			buckets.clear();
			buckets.resize(capacity);
			size = 0;
			// 将键值对从原来哈希表中搬运至新哈希表
			for (auto& bucket : bucketsTmp)
			{
				for (Pair* pair : bucket)
				{
					put(pair->key, pair->val);
					// 释放内存
					delete pair;
				}
			}
		}

		// 添加操作
		void put(int key, string val)
		{
			// 当负载因子超过阈值的时候，扩容
			if (loadFactor() > loadTres)
				extend();

			int index = hashFunc(key);
			// 遍历桶，若遇到指定 key ，更新对应的 val 返回
			for (Pair* pair : buckets[index])
			{
				if (pair->key == key)
				{
					pair->val = val;
					return;
				}
			}
			// 若没有 key 就将键值对添加至尾部
			buckets[index].push_back(new Pair(key, val));
			size++;
		}

		// 删除操作
		void remove(int key)
		{
			int index = hashFunc(key);
			auto& bucket = buckets[index];
			// 遍历桶 从中删除键值对
			for (int i = 0; i < bucket.size(); i++)
			{
				if (bucket[i]->key == key)
				{
					Pair* tmp = bucket[i];
					bucket.erase(bucket.begin() + i); // 从中删除键值对
					// 释放内存
					delete tmp;
					size--;
					return;
				}
			}
		}

		// 打印哈希表
		void print()
		{
			for (auto& bucket : buckets)
			{
				cout << "[";
				for (Pair* pair : bucket)
					cout << pair->key << "->" << pair->val << ",";
				cout << "]\n";
			}
		}
};

// 开放寻址 open addressing
/*
不引入额外的数据结构，而是通过多次探测来处理哈希冲突
探测的方法包括：线性探测、平方探测、多次哈希
*/

/*
   线性探测
   线性探测采用固定步长的线性搜索来进行探测
*/
// 开放寻址哈希表
// 下面将 哈希表 看成一个环形数组，当越过数组尾部的时候，回到头部继续完成遍历
class HashMapOpenAddressing {
	private:
		int size; // 键值对数量
		int capacity = 4; // 哈希表容量
		const double loadTres = 2.0 / 3.0; // 触发扩容的负载因子阈值
		const int extendRatio = 2; // 扩容倍数
		vector<Pair*>buckets; // 桶数组
		Pair* TOMBSTONE = new Pair(-1, "-1"); // 删除标记

	public:
		// 构造方法
		HashMapOpenAddressing():size(0),buckets(capacity,nullptr){}

		// 析构方法
		~HashMapOpenAddressing()
		{
			for (Pair* pair : buckets)
			{
				if (pair != nullptr && pair != TOMBSTONE)
					delete pair;
			}
			delete TOMBSTONE;
		}

		// 哈希函数
		int hashFunc(int key)
		{
			return key % capacity;
		}

		// 负载因子
		double loadFactor()
		{
			return (double)size / capacity;
		}

		// 搜索 key 对应的桶的索引
		int findBucket(int key)
		{
			int index = hashFunc(key);
			int firstTombstone = -1;
			// 线性探测 当遇到空桶就跳出来
			while (buckets[index] != nullptr)
			{
				// 若遇到 key 就返回 对应桶的索引
				if (buckets[index]->key == key)
				{
					// 若之前遇到了删除标记，则将键值对移动至该索引
					if (firstTombstone != -1)
					{
						buckets[firstTombstone] = buckets[index];
						buckets[index] = TOMBSTONE;
						return firstTombstone; // 返回移动后的桶的索引
					}
					return index; // 返回桶索引
				}
				// 记录遇到的首个删除标记
				if (firstTombstone == -1 && buckets[index] == TOMBSTONE)
					firstTombstone = index;
				// 计算桶索引，越过尾部返回头部
				index = (index + 1) % capacity;
			}
			// 若 key 不存在，则返回添加点索引
			return firstTombstone == -1 ? index : firstTombstone;
		}

		// 查询操作
		string get(int key)
		{
			// 搜索 key 对应的桶索引
			int index = findBucket(key);
			// 若找到键值对， 则返回对应 val
			if (buckets[index] != nullptr && buckets[index] != TOMBSTONE)
				return buckets[index]->val;
			// 若没有找到键值对, 返回空字符串
			return "";
		}

		// 扩容
		void extend()
		{
			// 暂存哈希表
			vector<Pair*>bucketsTmp = buckets;
			// 初始化扩容后的新哈希表
			capacity *= extendRatio;
			buckets = vector<Pair*>(capacity, nullptr);
			size = 0;
			// 将键值对从原哈希表中搬运至新哈希表
			for (Pair* pair : bucketsTmp)
			{
				if (pair != nullptr && pair != TOMBSTONE)
				{
					put(pair->key, pair->val);
					delete pair;
				}
			}
		}

		// 添加操作
		void put(int key, string val)
		{
			// 当负载因子超过阈值的时候，进行扩容
			if (loadFactor() > loadTres)
				extend();
			// 搜索 key 对应的桶索引
			int index = findBucket(key);
			// 若找到键值对， 则覆盖 val 返回
			if (buckets[index] != nullptr && buckets[index] != TOMBSTONE)
			{
				buckets[index]->val = val;
				return;
			}
			// 若键值对不存在，则添加该键值对
			buckets[index] = new Pair(key, val);
			size++;
		}

		// 删除
		void remove(int key)
		{
			// 搜索 key 对应的桶索引
			int index = findBucket(key);
			// 若找到键值对 则用删除标记覆盖他
			if (buckets[index] != nullptr && buckets[index] != TOMBSTONE)
			{
				delete buckets[index];
				buckets[index] = TOMBSTONE;
				size--;
			}
		}

		// 打印哈希表
		void print()
		{
			for (Pair* pair : buckets)
			{
				if (pair == nullptr)
					cout << "nullptr" << endl;
				else if (pair == TOMBSTONE)
					cout << "TOMBSTONE" << endl;
				else
					cout << pair->key << "->" << pair->val << endl;

			}
		}
};


int main()
{
	testMap();
	cout << "===========" << endl;
	cout << endl;
	HashMapChaining hashMap;
	// 添加键值对
	hashMap.put(1, "one");
	hashMap.put(2, "Two");
	hashMap.put(3, "Three");
	hashMap.put(4, "Four");

	// 打印
	cout << "打印哈希表 :" << endl;
	hashMap.print();
	// 查询键值对
	int n;
	cout << "输入你要查询的数字" << endl;
	cin >> n;
	cout << "value for key" << n << " :" << hashMap.get(n) << endl;
	// 删除键值对
	hashMap.remove(1);
	// 打印
	hashMap.print();

	cout << "=================================" << endl;
	HashMapOpenAddressing hashOpenMap;

	// 添加键值对
	hashOpenMap.put(1, "One");
	hashOpenMap.put(2, "Two");
	hashOpenMap.put(3, "Three");

	// 打印当前哈希表
	cout << "Current HashMap:" << endl;
	hashMap.print();

	// 查询键值对
	cout << "\nValue for key 2: " << hashOpenMap.get(2) << endl;

	// 删除键值对
	hashMap.remove(2);

	// 打印修改后的哈希表
	cout << "\nHashMap after removing key 2:" << endl;
	hashOpenMap.print();

	return 0;
}