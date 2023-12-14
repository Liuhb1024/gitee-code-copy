#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <climits>

using namespace std;

class Graph {
private:
    int numVertices;
    vector<vector<int>> adjMatrix;

public:
    Graph(int numVertices);
    void addEdge(int src, int dest, int weight);
    void printAdjMatrix();
    void DFS(int startVertex);
    void BFS(int startVertex);
    void Dijkstra(int startVertex);
    void Prim();
};

Graph::Graph(int numVertices) {
    this->numVertices = numVertices;
    adjMatrix.resize(numVertices, vector<int>(numVertices, 0));
}

void Graph::addEdge(int src, int dest, int weight) {
    adjMatrix[src][dest] = weight;
}

void Graph::printAdjMatrix() {
    cout << "邻接矩阵：" << endl;
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

void Graph::DFS(int startVertex) {
    vector<bool> visited(numVertices, false);
    stack<int> s;

    cout << "DFS 结果：" << endl;

    s.push(startVertex);

    while (!s.empty()) {
        int currentVertex = s.top();
        s.pop();

        if (!visited[currentVertex]) {
            cout << currentVertex << " ";
            visited[currentVertex] = true;
        }

        for (int i = 0; i < numVertices; i++) {
            if (adjMatrix[currentVertex][i] != 0 && !visited[i]) {
                s.push(i);
            }
        }
    }

    cout << endl;
}

void Graph::BFS(int startVertex) {
    vector<bool> visited(numVertices, false);
    queue<int> q;

    cout << "BFS 结果：" << endl;

    q.push(startVertex);
    visited[startVertex] = true;

    while (!q.empty()) {
        int currentVertex = q.front();
        q.pop();

        cout << currentVertex << " ";

        for (int i = 0; i < numVertices; i++) {
            if (adjMatrix[currentVertex][i] != 0 && !visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }

    cout << endl;
}

void Graph::Dijkstra(int startVertex) {
    vector<int> distance(numVertices, INT_MAX);
    vector<bool> visited(numVertices, false);

    distance[startVertex] = 0;

    for (int count = 0; count < numVertices - 1; count++) {
        int u = -1;

        for (int i = 0; i < numVertices; i++) {
            if (!visited[i] && (u == -1 || distance[i] < distance[u])) {
                u = i;
            }
        }

        visited[u] = true;

        for (int v = 0; v < numVertices; v++) {
            if (adjMatrix[u][v] != 0 && !visited[v] && distance[u] != INT_MAX &&
                distance[u] + adjMatrix[u][v] < distance[v]) {
                distance[v] = distance[u] + adjMatrix[u][v];
            }
        }
    }

    cout << "Dijkstra 最短路径结果：" << endl;
    cout << "顶点\t距离" << endl;
    for (int i = 0; i < numVertices; i++) {
        cout << i << "\t" << distance[i] << endl;
    }
}

void Graph::Prim() {
    vector<int> parent(numVertices, -1);
    vector<int> key(numVertices, INT_MAX);
    vector<bool> mstSet(numVertices, false);

    key[0] = 0;

    for (int count = 0; count < numVertices - 1; count++) {
        int u = -1;

        for (int i = 0; i < numVertices; i++) {
            if (!mstSet[i] && (u == -1 || key[i] < key[u])) {
                u = i;
            }
        }

        mstSet[u] = true;

        for (int v = 0; v < numVertices; v++) {
            if (adjMatrix[u][v] != 0 && !mstSet[v] && adjMatrix[u][v] < key[v]) {
                parent[v] = u;
                key[v] = adjMatrix[u][v];
            }
        }
    }

    cout << "Prim 最小生成树结果：" << endl;
    cout << "边\t权重" << endl;
    for (int i = 1; i < numVertices; i++) {
        cout << parent[i] << " - " << i << "\t" << adjMatrix[parent[i]][i] << endl;
    }
}

int main() {
    Graph g(6);

    g.addEdge(0, 1, 4);
    g.addEdge(0, 3, 5);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 4, 2);
    g.addEdge(2, 0, 2);
    g.addEdge(2, 3, 8);
    g.addEdge(2, 5, 4);
    g.addEdge(4, 2, 3);
    g.addEdge(4, 5, 9);
    g.addEdge(5, 3, 1);

    g.printAdjMatrix();

    g.DFS(0);

    g.BFS(0);

    g.Dijkstra(0);

    g.Prim();

    return 0;
}