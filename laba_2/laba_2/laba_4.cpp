#include<iostream>
#include<vector>

using namespace std;

const int INF = 1e9;

vector<int>getPath(vector<int>& from, int finish) {
	vector<int>path;
	for (int v = finish; v != -1; v = from[v])
	{
		path.push_back(v);
	}

	reverse(path.begin(), path.end());
	return path;
}

pair<vector<int>, vector<int>> dijkstra(vector<vector<pair<int, int>>>& graph, int start) {
	vector<int>dist(graph.size(), INF);
	dist[start] = 0;
	vector<bool>visited(graph.size(), false);
	vector<int>from(graph.size(), -1);

	for (int i = 0; i < graph.size(); i++)
	{
		int nearest = -1;
		for (int v = 0; v < graph.size(); v++)
		{
			if (!visited[v] && (nearest == -1 || dist[nearest] > dist[v]))
			{
				nearest = v;
			}
		}
		visited[nearest] = true;

		for (int i = 0; i < graph[nearest].size(); i++)
		{
			if (dist[graph[nearest][i].first] > dist[nearest] + graph[nearest][i].second) {
				dist[graph[nearest][i].first] = dist[nearest] + graph[nearest][i].second;
				from[graph[nearest][i].first] = nearest;
			}
		}
	}
	return { dist,from };
}

int main() {
	setlocale(LC_ALL, "ru");
	cout << "������� ���������� ������ � �����" << endl;
	int vertex, edge;
	cin >> vertex >> edge;

	cout << "������� ������� ������� � ���� (�, �, ���)" << endl;
	vector<vector<pair<int, int>>>graph(vertex);
	for (int i = 0; i < edge; i++)
	{
		int a, b, weight;
		cin >> a >> b >> weight;

		//�����������������
		graph[a].push_back({ b,weight });
		graph[b].push_back({ a,weight });
	}

	cout << "������� ������ � ����� ����" << endl;
	int start, finish;
	cin >> start >> finish;

	auto [dist, from] = dijkstra(graph, start);
	vector<int>path = getPath(from, finish);

	cout << dist[finish] << endl;
	for (int i = 0; i < path.size(); i++)
	{
		cout << path[i];
		if (i != path.size() - 1) {
			cout << " -> ";
		}
	}

}