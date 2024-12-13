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
	// ��ʼ���ڽӾ����С����ʼ����ֵ����Ϊ false(0)
	adjMatrix.resize(numVertices, vector<bool>(numVertices, false));
}

void Graph::addEdge(int row, int col)
{
	// ����ڽӾ���ı�
	adjMatrix[row][col] = true;
	adjMatrix[col][row] = true;
}

void Graph::addEdgeII(int row, int col)
{
	adjMatrix[row][col] = true;
}

void Graph::print()
{
	cout << "�ڽӾ���> " << endl;
	// ����
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

	cout << "DFS���:> ";
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

		// ��û�з��ʵ������ڶ�������ջ��
		for (int i = numVertices - 1; i >= 0; i--)
			if (adjMatrix[curVertex][i] && !visited[i])
				stack.push(i);
	}
	cout << endl;
}

void Graph::BFS(int startVertex) {
	vector<bool> visited(numVertices, false);
	queue<int> queue;

	cout << "BFS ���:> ";
	visited[startVertex] = true;
	cout << startVertex << " ";
	queue.push(startVertex);

	while (!queue.empty()) {
		int currentVertex = queue.front();
		queue.pop();

		// ��δ���ʵ����ڶ������������
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
	int numVertices = 8; // ��һ�� 8���ڵ�
	int numVerticesII = 5; // �ڶ��� 5���ڵ�
	Graph graph(numVertices); // ��һ��
	Graph graphII(numVerticesII); // �ڶ���

	cout << "��һ��:> " << endl;
	// ��ӱ�
	graph.addEdge(0, 1);
	graph.addEdge(0, 2);
	graph.addEdge(1, 3);
	graph.addEdge(1, 4);
	graph.addEdge(2, 5);
	graph.addEdge(2, 6);
	graph.addEdge(3, 7);
	graph.addEdge(4, 7);
	graph.addEdge(5, 6);

	// ����ڽӾ���
	graph.print();

	// ִ��DFS��������
	graph.DFS(0);

	// ִ��BFS��������
	graph.BFS(0);

	cout << endl;
	cout << "�ڶ���:> " << endl;
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