#include<iostream>
#include<vector>

using namespace std;

void printMatrix(vector<vector<int>>& matrix, int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

vector<vector<int>>reachability(vector<vector<int>>& graph, int size) {
	vector<vector<int>>reMatrix = graph;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < size; k++)
			{
				if (graph[i][j] == 1 && graph[j][k] == 1)
					reMatrix[i][k] = 1;
			}
		}
	}
	return reMatrix;
}

void main() {
	setlocale(LC_ALL, "ru");

	cout << "������� ������ ������� n*n (���-�� ������ �����)" << endl;
	int size;
	cin >> size;

	vector<vector<int>>graph(size, vector<int>(size));
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "������� A[" << i << "]" << "[" << j << "]" << endl;
			cin >> graph[i][j];
		}
	}

	vector<vector<int>>reMatrix = reachability(graph, size);

	cout << "����:" << endl;
	printMatrix(graph, size);
	cout << "\n������� ������������:" << endl;
	printMatrix(reMatrix, size);
}