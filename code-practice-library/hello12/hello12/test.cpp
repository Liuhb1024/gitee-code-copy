#define _CRT_SECURE_NO_WARNINGS 1

// hello �㷨 �ھ��� ͼ 
// ��ͼ graph����һ�ַ��������ݽṹ���ɡ����� vertex���͡��� edge����ɡ�

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

// ͼ�������ͺ�����
/*
   1. ����ͼ �߾��з����� ���� ���� �е� ��ע �� ����ע
   2. ����ͼ �߱�ʾ������֮��ġ�˫�����ӹ�ϵ������΢�Ż� QQ �еġ����ѹ�ϵ��

   1. ��ͨͼ ��ĳ��������������Ե����������ⶥ��
   2. ����ͨͼ ��ĳ�����������������һ�������޷�����

   ͬʱҲ����Ϊ�����Ȩ��

   ��������
   1. �ڽ� ��������֮����ڱ�����ʱ�����������㡰�ڽӡ�
   2. ·�� �Ӷ��� A ������ B �����ı߹��ɵ����б���Ϊ�� A �� B �ġ�·����
   3. ��   һ������ӵ�еı���

   ͼ�ı�ʾ
   1. �ڽӾ���
   2. �ڽӱ�
*/
/*
   ͼ�Ļ�������
   1. �����ڽӾ����ʵ��
   2. �����ڽӱ��ʵ��					
*/

// �����ڽӾ���ʵ������ͼ
class GraphAdjMat {
	vector<int> vertices; // �����б�Ԫ�ش��� ������ֵ�� ���������� ������������
	vector <vector<int>> adjMat; // �ڽӾ�������������Ӧ ������������

	public:
		// ���췽��
		GraphAdjMat(const vector<int>& vertices, const vector<vector<int>>& edges)
		{
			// ��Ӷ���
			for (int val : vertices)
				addVertex(val);
			// ��ӱ�
			// ע�⣺edges Ԫ�� ����������������Ӧ vertices Ԫ������
			for (const vector<int>& edge : edges)
				addEdge(edge[0], edge[1]);
		}

		// ��ȡ��������
		int size()const
		{
			return vertices.size();
		}

		// ��Ӷ���
		void addVertex(int val)
		{
			int n = size();
			// �򶥵��б�����¶����ֵ
			vertices.push_back(val);
			// ���ڽӾ��������һ��
			adjMat.emplace_back(vector<int>(n, 0));
			// ���ڽӾ��������һ��
			for (vector<int>& row : adjMat)
				row.push_back(0);
		}

		// ɾ������
		void removeVertex(int index)
		{
			if (index >= size())
				throw out_of_range("���㲻����");
			// �ڶ����б����Ƴ����� index �Ķ���
			vertices.erase(vertices.begin() + index);
			// ���ڽӾ�����ɾ������ index ����
			adjMat.erase(adjMat.begin() + index);
			// ���ڽӾ�����ɾ������ index ����
			for (vector<int>& row : adjMat)
				row.erase(row.begin() + index);
		}

		// ��ӱ�
		// ���� i j ��Ӧ vertices Ԫ������
		void addEdge(int i, int j)
		{
			// ����Խ������ȴ���
			if (i < 0 || j < 0 || i >= size() || j >= size() || i == j)
				throw out_of_range("���㲻����");
			// ������ͼ�У��ڽӾ���������Խ��߶Գƣ�������(i, j) == (j, i)
			adjMat[i][j] = 1;
			adjMat[j][i] = 1;
		}

		// ɾ����
		// ���� i j ��Ӧ vertices Ԫ������
		void removeEdge(int i, int j)
		{
			// ����Խ������ȴ���
			if (i < 0 || j < 0 || i >= size() || j >= size() || i == j)
				throw out_of_range("���㲻����");
			adjMat[i][j] = 0;
			adjMat[j][i] = 0;
		}

		// ������������ӡ��������
		void printVector(const std::vector<int>& vec) {
			for (int i : vec) {
				std::cout << i << " ";
			}
			std::cout << std::endl;
		}

		// ������������ӡ��������
		void printVectorMatrix(const std::vector<std::vector<int>>& matrix) {
			for (const std::vector<int>& row : matrix) {
				for (int i : row) {
					std::cout << i << " ";
				}
				std::cout << std::endl;
			}
		}

		// ��ӡ�ڽӾ���
		void print()
		{
			cout << "�����б� = ";
			printVector(vertices);
			cout << "�ڽӾ��� = " << endl;
			printVectorMatrix(adjMat);
		}
};

// �����ڽӱ�ʵ��
// �����ڽӱ�ʵ�ֵ�����ͼ
class Vertex {
	public:
		int val; // ����ֵ
		// ���췽��
		Vertex(int value):val(value){}
};

class GraphAdjList {
	public:
		// �ڽӱ�key�����㣬 value���ö���������ڽӵ�
		unordered_map<Vertex*, vector<Vertex*>>adjList;

		// �� vector ��ɾ��ָ���ڵ�
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

		// ���췽��
		GraphAdjList(const vector<vector<Vertex*>>& edges)
		{
			// ������еĶ����
			for (const vector<Vertex*>& edge : edges)
			{
				addVertex(edge[0]);
				addVertex(edge[1]);
				addEdge(edge[0], edge[1]);
			}
		}

		// ��ȡ��������
		int size()
		{
			return adjList.size();
		}

		// ��ӱ�
		void addEdge(Vertex* vet1, Vertex* vet2)
		{
			if (!adjList.count(vet1) || !adjList.count(vet2) || vet1 == vet2)
				throw invalid_argument("�����ڶ���");
			// ɾ���� vet1-vet2
			remove(adjList[vet1], vet2);
			remove(adjList[vet2], vet1);
		}

		// ��Ӷ���
		void addVertex(Vertex* vet)
		{
			if (adjList.count(vet))
				return;
			// ���ڽӱ������һ��������
			adjList.erase(vet);
			// �����������������ɾ������ vet �ı�
			adjList[vet] = vector<Vertex*>();
		}

		// ɾ������
		void removeVertx(Vertex* vet)
		{
			if(!adjList.count(vet))
				throw invalid_argument("�����ڶ���");
			// ���ڽӱ���ɾ������ vet ��Ӧ������
			adjList.erase(vet);
			// ����������������� ɾ�����а��� vet �ı�
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

		// ��ӡ
		void print()
		{
			cout << "�ڽӱ� = " << endl;
			for (auto& adj : adjList)
			{
				const auto& key = adj.first;
				const vector<Vertex*>& vec = adj.second;
				cout << key->val << ":";
				printVector(vetsToVals(vec));
			}
		}
};

// ͼ�ı���

// 1. ������ȱ���
/* ������ȱ��� BFS */
// ʹ���ڽӱ�����ʾͼ���Ա��ȡָ������������ڽӶ���
vector<Vertex*> graphBFS(GraphAdjList& graph, Vertex* startVet) {
	// �����������
	vector<Vertex*> res;
	// ��ϣ�����ڼ�¼�ѱ����ʹ��Ķ���
	unordered_set<Vertex*> visited = { startVet };
	// ��������ʵ�� BFS
	queue<Vertex*> que;
	que.push(startVet);
	// �Զ��� vet Ϊ��㣬ѭ��ֱ�����������ж���
	while (!que.empty()) {
		Vertex* vet = que.front();
		que.pop();          // ���׶������
		res.push_back(vet); // ��¼���ʶ���
		// �����ö���������ڽӶ���
		for (auto adjVet : graph.adjList[vet]) {
			if (visited.count(adjVet))
				continue;            // �����ѱ����ʵĶ���
			que.push(adjVet);        // ֻ���δ���ʵĶ���
			visited.emplace(adjVet); // ��Ǹö����ѱ�����
		}
	}
	// ���ض����������
	return res;
}

// 2. ������ȱ���
/* ������ȱ��� DFS �������� */
void dfs(GraphAdjList& graph, unordered_set<Vertex*>& visited, vector<Vertex*>& res, Vertex* vet) {
	res.push_back(vet);   // ��¼���ʶ���
	visited.emplace(vet); // ��Ǹö����ѱ�����
	// �����ö���������ڽӶ���
	for (Vertex* adjVet : graph.adjList[vet]) {
		if (visited.count(adjVet))
			continue; // �����ѱ����ʵĶ���
		// �ݹ�����ڽӶ���
		dfs(graph, visited, res, adjVet);
	}
}

/* ������ȱ��� DFS */
// ʹ���ڽӱ�����ʾͼ���Ա��ȡָ������������ڽӶ���
vector<Vertex*> graphDFS(GraphAdjList& graph, Vertex* startVet) {
	// �����������
	vector<Vertex*> res;
	// ��ϣ�����ڼ�¼�ѱ����ʹ��Ķ���
	unordered_set<Vertex*> visited;
	dfs(graph, visited, res, startVet);
	return res;
}
int main()
{

}