#define _CRT_SECURE_NO_WARNINGS 1

// hello 算法 第九章 图 
// 「图 graph」是一种非线性数据结构，由「顶点 vertex」和「边 edge」组成。

#include<iostream>
#include<cstdio>
#include<queue>
#include<map>
#include<stack>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
#include <unordered_set>

using namespace std;

// 图常见类型和术语
/*
   1. 有向图 边具有方向性 例如 抖音 中的 关注 与 被关注
   2. 无向图 边表示两顶点之间的“双向”连接关系，例如微信或 QQ 中的“好友关系”

   1. 连通图 从某个顶点出发，可以到达其余任意顶点
   2. 非连通图 从某个顶点出发，至少有一个顶点无法到达

   同时也可以为边添加权重

   常用术语
   1. 邻接 当两顶点之间存在边相连时，称这两顶点“邻接”
   2. 路径 从顶点 A 到顶点 B 经过的边构成的序列被称为从 A 到 B 的“路径”
   3. 度   一个顶点拥有的边数

   图的表示
   1. 邻接矩阵
   2. 邻接表
*/
/*
   图的基础操作
   1. 基于邻接矩阵的实现
   2. 基于邻接表的实现					
*/

// 基于邻接矩阵实现无向图
class GraphAdjMat {
	vector<int> vertices; // 顶点列表，元素代表 “顶点值” ，索引代表 “顶点索引”
	vector <vector<int>> adjMat; // 邻接矩阵，行列索引对应 “顶点索引”

	public:
		// 构造方法
		GraphAdjMat(const vector<int>& vertices, const vector<vector<int>>& edges)
		{
			// 添加顶点
			for (int val : vertices)
				addVertex(val);
			// 添加边
			// 注意：edges 元素 代表顶点索引，即对应 vertices 元素索引
			for (const vector<int>& edge : edges)
				addEdge(edge[0], edge[1]);
		}

		// 获取顶点数量
		int size()const
		{
			return vertices.size();
		}

		// 添加顶点
		void addVertex(int val)
		{
			int n = size();
			// 向顶点列表添加新顶点的值
			vertices.push_back(val);
			// 在邻接矩阵中添加一行
			adjMat.emplace_back(vector<int>(n, 0));
			// 在邻接矩阵中添加一列
			for (vector<int>& row : adjMat)
				row.push_back(0);
		}

		// 删除顶点
		void removeVertex(int index)
		{
			if (index >= size())
				throw out_of_range("顶点不存在");
			// 在顶点列表中移除索引 index 的顶点
			vertices.erase(vertices.begin() + index);
			// 在邻接矩阵中删除索引 index 的行
			adjMat.erase(adjMat.begin() + index);
			// 在邻接矩阵中删除索引 index 的列
			for (vector<int>& row : adjMat)
				row.erase(row.begin() + index);
		}

		// 添加边
		// 参数 i j 对应 vertices 元素索引
		void addEdge(int i, int j)
		{
			// 索引越界与相等处理
			if (i < 0 || j < 0 || i >= size() || j >= size() || i == j)
				throw out_of_range("顶点不存在");
			// 在无向图中，邻接矩阵关于主对角线对称，既满足(i, j) == (j, i)
			adjMat[i][j] = 1;
			adjMat[j][i] = 1;
		}

		// 删除边
		// 参数 i j 对应 vertices 元素索引
		void removeEdge(int i, int j)
		{
			// 索引越界与相等处理
			if (i < 0 || j < 0 || i >= size() || j >= size() || i == j)
				throw out_of_range("顶点不存在");
			adjMat[i][j] = 0;
			adjMat[j][i] = 0;
		}

		// 辅助函数，打印整数向量
		void printVector(const std::vector<int>& vec) {
			for (int i : vec) {
				std::cout << i << " ";
			}
			std::cout << std::endl;
		}

		// 辅助函数，打印整数矩阵
		void printVectorMatrix(const std::vector<std::vector<int>>& matrix) {
			for (const std::vector<int>& row : matrix) {
				for (int i : row) {
					std::cout << i << " ";
				}
				std::cout << std::endl;
			}
		}

		// 打印邻接矩阵
		void print()
		{
			cout << "顶点列表 = ";
			printVector(vertices);
			cout << "邻接矩阵 = " << endl;
			printVectorMatrix(adjMat);
		}
};

// 基于邻接表实现
// 基于邻接表实现的无向图
class Vertex {
	public:
		int val; // 顶点值
		// 构造方法
		Vertex(int value):val(value){}
};

class GraphAdjList {
	public:
		// 邻接表，key：顶点， value：该顶点的所有邻接点
		unordered_map<Vertex*, vector<Vertex*>>adjList;

		// 在 vector 中删除指定节点
		void remove(vector<Vertex*>& vec, Vertex* vet)
		{
			for (int i = 0; i < vec.size(); i++)
			{
				if (vec[i] == vet)
				{
					vec.erase(vec.begin() + i);
					break;
				}
			}
		}

		// 构造方法
		GraphAdjList(const vector<vector<Vertex*>>& edges)
		{
			// 添加所有的顶点边
			for (const vector<Vertex*>& edge : edges)
			{
				addVertex(edge[0]);
				addVertex(edge[1]);
				addEdge(edge[0], edge[1]);
			}
		}

		// 获取顶点数量
		int size()
		{
			return adjList.size();
		}

		// 添加边
		void addEdge(Vertex* vet1, Vertex* vet2)
		{
			if (!adjList.count(vet1) || !adjList.count(vet2) || vet1 == vet2)
				throw invalid_argument("不存在顶点");
			// 删除边 vet1-vet2
			remove(adjList[vet1], vet2);
			remove(adjList[vet2], vet1);
		}

		// 添加顶点
		void addVertex(Vertex* vet)
		{
			if (adjList.count(vet))
				return;
			// 在邻接表中添加一个新链表
			adjList.erase(vet);
			// 遍历其他顶点的链表，删除包含 vet 的边
			adjList[vet] = vector<Vertex*>();
		}

		// 删除顶点
		void removeVertx(Vertex* vet)
		{
			if(!adjList.count(vet))
				throw invalid_argument("不存在顶点");
			// 在邻接表中删除顶点 vet 对应的链表
			adjList.erase(vet);
			// 遍历其他顶点的链表， 删除所有包含 vet 的边
			for (auto& adj : adjList)
				remove(adj.second, vet);
		}

		void printVector(const vector<int>& vec) {
			for (const auto& element : vec) {
				cout << element << " ";
			}
			cout << endl;
		}

		vector<int> vetsToVals(const vector<Vertex*>& vec) {
			vector<int> vals;
			for (const auto& vertex : vec) {
				vals.push_back(vertex->val);
			}
			return vals;
		}

		// 打印
		void print()
		{
			cout << "邻接表 = " << endl;
			for (auto& adj : adjList)
			{
				const auto& key = adj.first;
				const vector<Vertex*>& vec = adj.second;
				cout << key->val << ":";
				printVector(vetsToVals(vec));
			}
		}
};

// 图的遍历

// 1. 广度优先遍历
/* 广度优先遍历 BFS */
// 使用邻接表来表示图，以便获取指定顶点的所有邻接顶点
vector<Vertex*> graphBFS(GraphAdjList& graph, Vertex* startVet) {
	// 顶点遍历序列
	vector<Vertex*> res;
	// 哈希表，用于记录已被访问过的顶点
	unordered_set<Vertex*> visited = { startVet };
	// 队列用于实现 BFS
	queue<Vertex*> que;
	que.push(startVet);
	// 以顶点 vet 为起点，循环直至访问完所有顶点
	while (!que.empty()) {
		Vertex* vet = que.front();
		que.pop();          // 队首顶点出队
		res.push_back(vet); // 记录访问顶点
		// 遍历该顶点的所有邻接顶点
		for (auto adjVet : graph.adjList[vet]) {
			if (visited.count(adjVet))
				continue;            // 跳过已被访问的顶点
			que.push(adjVet);        // 只入队未访问的顶点
			visited.emplace(adjVet); // 标记该顶点已被访问
		}
	}
	// 返回顶点遍历序列
	return res;
}

// 2. 深度优先遍历
/* 深度优先遍历 DFS 辅助函数 */
void dfs(GraphAdjList& graph, unordered_set<Vertex*>& visited, vector<Vertex*>& res, Vertex* vet) {
	res.push_back(vet);   // 记录访问顶点
	visited.emplace(vet); // 标记该顶点已被访问
	// 遍历该顶点的所有邻接顶点
	for (Vertex* adjVet : graph.adjList[vet]) {
		if (visited.count(adjVet))
			continue; // 跳过已被访问的顶点
		// 递归访问邻接顶点
		dfs(graph, visited, res, adjVet);
	}
}

/* 深度优先遍历 DFS */
// 使用邻接表来表示图，以便获取指定顶点的所有邻接顶点
vector<Vertex*> graphDFS(GraphAdjList& graph, Vertex* startVet) {
	// 顶点遍历序列
	vector<Vertex*> res;
	// 哈希表，用于记录已被访问过的顶点
	unordered_set<Vertex*> visited;
	dfs(graph, visited, res, startVet);
	return res;
}
int main()
{

}