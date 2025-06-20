#include<iostream>
#include<vector>
#include<string>

using namespace std;

struct XY
{
	int x;
	int y;
};

bool isFunction(vector<XY>& set) {
	for (int i = 0; i < set.size() - 1; i++)
	{
		for (int j = i + 1; j < set.size(); j++)
		{
			if (set[i].x == set[j].x) {
				return false;
			}
		}
	}
	return true;
}

//������ ���������
void inputRelation(vector<XY>& set, int size) {
	XY elem;
	for (int i = 0; i < size; i++)
	{
		cin >> elem.x >> elem.y;
		set.push_back(elem);
	}
}

//������� ���������
void printRelation(vector<XY>& set) {
	cout << "{";
	for (int i = 0; i < set.size(); i++)
	{
		cout << "(" << set[i].x << "," << set[i].y << ")";
	}
	cout << "}" << endl;
}

//������ ���������
void inputSet(vector<int>& set) {
	for (int i = 0; i < set.size(); i++)
	{
		cin >> set[i];
	}
}

//������� ���������
void printSet(vector<int>& set) {
	cout << "{";
	for (int i = 0; i < set.size(); i++)
	{
		cout << set[i];
		if (i == set.size() - 1)
		{
			break;
		}
		cout << ",";
	}
	cout << "}" << endl;
}

void main() {
	setlocale(LC_ALL, "ru");

	int size1, size2, size3;

	//��������� �
	cout << "������� ������ ��������� �: \n";
	cin >> size1;
	vector<int>set1(size1);
	cout << "������� �������� ��������� A: " << endl;
	inputSet(set1);

	//��������� �
	cout << "������� ������ ��������� B: \n";
	cin >> size2;
	vector<int>set2(size2);
	cout << "������� �������� ��������� B: " << endl;
	inputSet(set2);

	//��������� R
	cout << "������� ������ ��������� R: \n";
	cin >> size3;
	vector<XY>relation;
	cout << "������� ��������� R: \n";
	inputRelation(relation, size3);

	cout << "��������� �" << endl;
	printSet(set1);
	cout << "��������� B" << endl;
	printSet(set2);
	cout << "��������� R" << endl;
	printRelation(relation);

	if (isFunction(relation)) {
		cout << "�������� ��������" << endl;
	}
	else
	{
		cout << "�� �������� ��������" << endl;
	}
}