#define _CRT_SECURE_NO_WARNINGS 1

// hello �㷨 ������ ��ϣ��

#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include<vector>
#include<stack>
#include<unordered_map>

using namespace std;

/*
   ��ϣ��ɢ�б�
   ���� ��key �� ֵvalue ֮���ӳ�� ʱ�临�Ӷȶ��� O(1)
   ����Ԫ��
   ���Ԫ��
   ɾ��Ԫ��
*/

// ���ò���
void testMap()
{
	unordered_map<int, string>map;

	// ��Ӳ���
	// �ڹ�ϣ������Ӽ�ֵ�� (key, value)
	map[12345] = "л���";
	map[23456] = "��˧��";
	map[34567] = "DK";
	map[45678] = "α��";
	map[56789] = "¹�޸�";
	map[67890] = "yyds";

	// ��ѯ����
	// ���ϣ�������key���õ�ֵvalue
	string name = map[12345];
	cout << "��ѯ���: " << name << endl;

	// ɾ������
	// �ڹ�ϣ����ɾ����ֵ�� (key, value)
	map.erase(67890);

	// ��ϣ�����ֱ�����ʽ��������ֵ�ԣ�������������ֵ
	// ������ֵ�� key -> value
	for (auto kv : map)
		cout << kv.first << "->" << kv.second << endl;
	// ʹ�õ��������� key -> value
	for(auto iter = map.begin(); iter != map.end(); iter++)
		cout << iter->first << "->" << iter->second << endl;
}

// ��ϣ��ļ�ʵ��
// ��򵥵����������һ��������ʵ�ֹ�ϣ�������е�ÿ����λ���Գ�Ϊ [Ͱbucket] 
// ÿһ��Ͱ���Դ洢 һ����ֵ��
// ʵ�ֹ�ʽ��index = hash(key) % capacity
// ��ֵ��
struct Pair {
	public:
		int key;
		string val;
		Pair(int key, string val) {
			this->key = key;
			this->val = val;
		}
};

// ��������ʵ�ֵĹ�ϣ��
class ArrayHashMap {
	private:
		vector<Pair*> buckets;

	public:
		ArrayHashMap() {
			// ��ʼ������ 100 ��Ͱ
			buckets = vector<Pair*>(100);
		}

		~ArrayHashMap() {
			// �ͷ��ڴ�
			for (const auto& bucket : buckets) {
				delete bucket;
			}
			buckets.clear();
		}

		// ��ϣ����
		int hashFunc(int key) {
			int index = key % 100;
			return index;
		}

		// ��ѯ����
		string get(int key) {
			int index = hashFunc(key);
			Pair* pair = buckets[index];
			if (pair == nullptr)
				return "";
			return pair->val;
		}

		// ��Ӳ���
		void put(int key, string val) {
			Pair* pair = new Pair(key, val);
			int index = hashFunc(key);
			buckets[index] = pair;
		}

		// ɾ������
		void remove(int key) {
			int index = hashFunc(key);
			// �ͷ��ڴ沢����Ϊ nullptr
			delete buckets[index];
			buckets[index] = nullptr;
		}

		// ��ȡ���еļ�ֵ��
		vector<Pair *> pairSet() {
			vector<Pair*>pairSet;
			for (Pair* pair : buckets)
			{
				if (pair != nullptr)
					pairSet.push_back(pair);
			}
			return pairSet;
		}

		// ��ȡ���еļ�
		vector<int> keySet() {
			vector<int> keySet;
			for (Pair* pair : buckets) {
				if (pair != nullptr)
					keySet.push_back(pair->key);
			}
			return keySet;
		}

		// ��ȡ���е�ֵ
		vector<string> valueSet() {
			vector<string> valueSet;
			for (Pair* pair : buckets) {
				if (pair != nullptr)
					valueSet.push_back(pair->val);
			}
			return valueSet;
		}

		// ��ӡ��ϣ��
		void print() {
			for (Pair* kv : pairSet()) {
				cout << kv->key << "->" << kv->val << endl;
			}
		}
};

// ��ϣ��ͻ������
/*
   �����Ͻ����ڣ���������Ӧ��ͬ���
   ��ϣ������ n Խ�󣬶�� key �����䵽ͬһ��Ͱ�еĸ��ʾͻ�Խ�ͣ���ͻ�ͻ�Խ��
   �������ǿ���ͨ�����ݹ�ϣ�������ٳ�ͻ
   �������������ݣ���ϣ�������轫���м�ֵ�Դ�ԭ��ϣ��Ǩ�����¹�ϣ���ǳ���ʱ��
   �������ڹ�ϣ������ capacity �ı䣬������Ҫͨ����ϣ���������¼������м�ֵ�ԵĴ洢λ�ã����һ����������ݹ��̵ļ��㿪����
   Ϊ�ˣ��������ͨ����Ԥ���㹻��Ĺ�ϣ����������ֹƵ�����ݡ�
���������� load factor���ǹ�ϣ���һ����Ҫ����䶨��Ϊ��ϣ���Ԫ����������Ͱ���������ں�����ϣ��ͻ�����س̶ȣ�Ҳ����Ϊ��ϣ�����ݵĴ���������
*/

// ��ϣ��ͻ
/*
����취��
1. ������ϣ�����ݽṹ��ʹ�ù�ϣ������ڳ��ֹ�ϣ��ͻʱ����������
2. ���ڱ�Ҫʱ��������ϣ��ͻ�Ƚ�����ʱ����ִ�����ݲ�����

����ϣ��ṹ�ĸ����������ǣ�
��ʽ��ַ   
����Ѱַ
*/


// ��ʽ��ַ
// ��ʽ��ַ��ϣ��
class HashMapChaining {
	private:
		int size; // ��ֵ������
		int capacity; // ��ϣ������
		double loadTres; // ����������ֵ
		int extendRatio; // ���ݱ���
		vector<vector<Pair*>> buckets; // Ͱ����

	public:
		// ���췽��
		HashMapChaining() :size(0), capacity(4), loadTres(2.0 / 3.0), extendRatio(2) {
			buckets.resize(capacity); // ������ϣ��������С
		}

		// ��������
		~HashMapChaining() {
			for (auto& bucket : buckets)
				for (Pair* pair : bucket)
					// �ͷ��ڴ�
					delete pair;
		}

		// ��ϣ����
		int hashFunc(int key)
		{
			return key % capacity;
		}

		// ��������
		double loadFactor()
		{
			return (double)size / (double)capacity;
		}

		// ��ѯ����
		string get(int key)
		{
			int index = hashFunc(key);
			// ����Ͱ �ҵ� key ���� val
			for (Pair* pair : buckets[index])
				if (pair->key == key)
					return pair->val;
			// ��δ�ҵ� val ���ͷ��ؿ��ַ���
			return "";
		}

		// ����
		void extend()
		{
			// �ݴ��ϣ��
			vector<vector<Pair*>> bucketsTmp = buckets;
			// ��ʼ�����ݺ���¹�ϣ��
			capacity *= extendRatio;
			buckets.clear();
			buckets.resize(capacity);
			size = 0;
			// ����ֵ�Դ�ԭ����ϣ���а������¹�ϣ��
			for (auto& bucket : bucketsTmp)
			{
				for (Pair* pair : bucket)
				{
					put(pair->key, pair->val);
					// �ͷ��ڴ�
					delete pair;
				}
			}
		}

		// ��Ӳ���
		void put(int key, string val)
		{
			// ���������ӳ�����ֵ��ʱ������
			if (loadFactor() > loadTres)
				extend();

			int index = hashFunc(key);
			// ����Ͱ��������ָ�� key �����¶�Ӧ�� val ����
			for (Pair* pair : buckets[index])
			{
				if (pair->key == key)
				{
					pair->val = val;
					return;
				}
			}
			// ��û�� key �ͽ���ֵ�������β��
			buckets[index].push_back(new Pair(key, val));
			size++;
		}

		// ɾ������
		void remove(int key)
		{
			int index = hashFunc(key);
			auto& bucket = buckets[index];
			// ����Ͱ ����ɾ����ֵ��
			for (int i = 0; i < bucket.size(); i++)
			{
				if (bucket[i]->key == key)
				{
					Pair* tmp = bucket[i];
					bucket.erase(bucket.begin() + i); // ����ɾ����ֵ��
					// �ͷ��ڴ�
					delete tmp;
					size--;
					return;
				}
			}
		}

		// ��ӡ��ϣ��
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

// ����Ѱַ open addressing
/*
�������������ݽṹ������ͨ�����̽���������ϣ��ͻ
̽��ķ�������������̽�⡢ƽ��̽�⡢��ι�ϣ
*/

/*
   ����̽��
   ����̽����ù̶���������������������̽��
*/
// ����Ѱַ��ϣ��
// ���潫 ��ϣ�� ����һ���������飬��Խ������β����ʱ�򣬻ص�ͷ��������ɱ���
class HashMapOpenAddressing {
	private:
		int size; // ��ֵ������
		int capacity = 4; // ��ϣ������
		const double loadTres = 2.0 / 3.0; // �������ݵĸ���������ֵ
		const int extendRatio = 2; // ���ݱ���
		vector<Pair*>buckets; // Ͱ����
		Pair* TOMBSTONE = new Pair(-1, "-1"); // ɾ�����

	public:
		// ���췽��
		HashMapOpenAddressing():size(0),buckets(capacity,nullptr){}

		// ��������
		~HashMapOpenAddressing()
		{
			for (Pair* pair : buckets)
			{
				if (pair != nullptr && pair != TOMBSTONE)
					delete pair;
			}
			delete TOMBSTONE;
		}

		// ��ϣ����
		int hashFunc(int key)
		{
			return key % capacity;
		}

		// ��������
		double loadFactor()
		{
			return (double)size / capacity;
		}

		// ���� key ��Ӧ��Ͱ������
		int findBucket(int key)
		{
			int index = hashFunc(key);
			int firstTombstone = -1;
			// ����̽�� ��������Ͱ��������
			while (buckets[index] != nullptr)
			{
				// ������ key �ͷ��� ��ӦͰ������
				if (buckets[index]->key == key)
				{
					// ��֮ǰ������ɾ����ǣ��򽫼�ֵ���ƶ���������
					if (firstTombstone != -1)
					{
						buckets[firstTombstone] = buckets[index];
						buckets[index] = TOMBSTONE;
						return firstTombstone; // �����ƶ����Ͱ������
					}
					return index; // ����Ͱ����
				}
				// ��¼�������׸�ɾ�����
				if (firstTombstone == -1 && buckets[index] == TOMBSTONE)
					firstTombstone = index;
				// ����Ͱ������Խ��β������ͷ��
				index = (index + 1) % capacity;
			}
			// �� key �����ڣ��򷵻���ӵ�����
			return firstTombstone == -1 ? index : firstTombstone;
		}

		// ��ѯ����
		string get(int key)
		{
			// ���� key ��Ӧ��Ͱ����
			int index = findBucket(key);
			// ���ҵ���ֵ�ԣ� �򷵻ض�Ӧ val
			if (buckets[index] != nullptr && buckets[index] != TOMBSTONE)
				return buckets[index]->val;
			// ��û���ҵ���ֵ��, ���ؿ��ַ���
			return "";
		}

		// ����
		void extend()
		{
			// �ݴ��ϣ��
			vector<Pair*>bucketsTmp = buckets;
			// ��ʼ�����ݺ���¹�ϣ��
			capacity *= extendRatio;
			buckets = vector<Pair*>(capacity, nullptr);
			size = 0;
			// ����ֵ�Դ�ԭ��ϣ���а������¹�ϣ��
			for (Pair* pair : bucketsTmp)
			{
				if (pair != nullptr && pair != TOMBSTONE)
				{
					put(pair->key, pair->val);
					delete pair;
				}
			}
		}

		// ��Ӳ���
		void put(int key, string val)
		{
			// ���������ӳ�����ֵ��ʱ�򣬽�������
			if (loadFactor() > loadTres)
				extend();
			// ���� key ��Ӧ��Ͱ����
			int index = findBucket(key);
			// ���ҵ���ֵ�ԣ� �򸲸� val ����
			if (buckets[index] != nullptr && buckets[index] != TOMBSTONE)
			{
				buckets[index]->val = val;
				return;
			}
			// ����ֵ�Բ����ڣ�����Ӹü�ֵ��
			buckets[index] = new Pair(key, val);
			size++;
		}

		// ɾ��
		void remove(int key)
		{
			// ���� key ��Ӧ��Ͱ����
			int index = findBucket(key);
			// ���ҵ���ֵ�� ����ɾ����Ǹ�����
			if (buckets[index] != nullptr && buckets[index] != TOMBSTONE)
			{
				delete buckets[index];
				buckets[index] = TOMBSTONE;
				size--;
			}
		}

		// ��ӡ��ϣ��
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
	// ��Ӽ�ֵ��
	hashMap.put(1, "one");
	hashMap.put(2, "Two");
	hashMap.put(3, "Three");
	hashMap.put(4, "Four");

	// ��ӡ
	cout << "��ӡ��ϣ�� :" << endl;
	hashMap.print();
	// ��ѯ��ֵ��
	int n;
	cout << "������Ҫ��ѯ������" << endl;
	cin >> n;
	cout << "value for key" << n << " :" << hashMap.get(n) << endl;
	// ɾ����ֵ��
	hashMap.remove(1);
	// ��ӡ
	hashMap.print();

	cout << "=================================" << endl;
	HashMapOpenAddressing hashOpenMap;

	// ��Ӽ�ֵ��
	hashOpenMap.put(1, "One");
	hashOpenMap.put(2, "Two");
	hashOpenMap.put(3, "Three");

	// ��ӡ��ǰ��ϣ��
	cout << "Current HashMap:" << endl;
	hashMap.print();

	// ��ѯ��ֵ��
	cout << "\nValue for key 2: " << hashOpenMap.get(2) << endl;

	// ɾ����ֵ��
	hashMap.remove(2);

	// ��ӡ�޸ĺ�Ĺ�ϣ��
	cout << "\nHashMap after removing key 2:" << endl;
	hashOpenMap.print();

	return 0;
}