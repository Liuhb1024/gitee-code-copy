#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

class Graph {
	private:
		int numVertices;
		vector<vector<bool>>adjMatrix;

	public:
		Graph(int numVertices);
		void addEdge(int row, int col);
		void addEdgeII(int row, int col);
		void print();
		void DFS(int startVertex);
		void BFS(int startVertex);
};

Graph::Graph(int numVertices)
{
	this->numVertices = numVertices;
	// 初始化邻接矩阵大小，初始化的值设置为 false(0)
	adjMatrix.resize(numVertices, vector<bool>(numVertices, false));
}

void Graph::addEdge(int row, int col)
{
	// 标记邻接矩阵的边
	adjMatrix[row][col] = true;
	adjMatrix[col][row] = true;
}

void Graph::addEdgeII(int row, int col)
{
	adjMatrix[row][col] = true;
}

void Graph::print()
{
	cout << "邻接矩阵：> " << endl;
	// 遍历
	for (int i = 0; i < numVertices; i++)
	{
		for (int j = 0; j < numVertices; j++)
			cout << adjMatrix[i][j] << " ";
		cout << endl;
	}
}

void Graph::DFS(int startVertex)
{
	vector<bool>visited(numVertices, false);
	stack<int>stack;

	cout << "DFS结果:> ";
	stack.push(startVertex);

	while (!stack.empty())
	{
		int curVertex = stack.top();
		stack.pop();

		if (!visited[curVertex])
		{
			cout << curVertex << " ";
			visited[curVertex] = true;
		}

		// 将没有访问到的相邻顶点推入栈中
		for (int i = numVertices - 1; i >= 0; i--)
			if (adjMatrix[curVertex][i] && !visited[i])
				stack.push(i);
	}
	cout << endl;
}

void Graph::BFS(int startVertex) {
	vector<bool> visited(numVertices, false);
	queue<int> queue;

	cout << "BFS 结果:> ";
	visited[startVertex] = true;
	cout << startVertex << " ";
	queue.push(startVertex);

	while (!queue.empty()) {
		int currentVertex = queue.front();
		queue.pop();

		// 将未访问的相邻顶点推入队列中
		for (int i = 0; i < numVertices; i++) 
			if (adjMatrix[currentVertex][i] && !visited[i]) {
				visited[i] = true;
				cout << i << " ";
				queue.push(i);
			}
	}

	cout << endl;
}

int main()
{
	int numVertices = 8; // 第一题 8个节点
	int numVerticesII = 5; // 第二题 5个节点
	Graph graph(numVertices); // 第一题
	Graph graphII(numVerticesII); // 第二题

	cout << "第一题:> " << endl;
	// 添加边
	graph.addEdge(0, 1);
	graph.addEdge(0, 2);
	graph.addEdge(1, 3);
	graph.addEdge(1, 4);
	graph.addEdge(2, 5);
	graph.addEdge(2, 6);
	graph.addEdge(3, 7);
	graph.addEdge(4, 7);
	graph.addEdge(5, 6);

	// 输出邻接矩阵
	graph.print();

	// 执行DFS并输出结果
	graph.DFS(0);

	// 执行BFS并输出结果
	graph.BFS(0);

	cout << endl;
	cout << "第二题:> " << endl;
	graphII.addEdgeII(0, 1);
	graphII.addEdgeII(0, 4);
	graphII.addEdgeII(1, 3);
	graphII.addEdgeII(3, 2);
	graphII.addEdgeII(2, 4);
	graphII.addEdgeII(4, 1);

	graphII.print();
	graphII.DFS(0);
	graphII.BFS(0);

	return 0;
}