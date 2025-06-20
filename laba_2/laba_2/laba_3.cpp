//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//struct XY
//{
//	int x;
//	int y;
//};
//
//bool isFunction(vector<XY>& set) {
//	for (int i = 0; i < set.size() - 1; i++)
//	{
//		for (int j = i + 1; j < set.size(); j++)
//		{
//			if (set[i].x == set[j].x) {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
////Ввести отношение
//void inputRelation(vector<XY>& set, int size) {
//	XY elem;
//	for (int i = 0; i < size; i++)
//	{
//		cin >> elem.x >> elem.y;
//		set.push_back(elem);
//	}
//}
//
////Вывести отношение
//void printRelation(vector<XY>& set) {
//	cout << "{";
//	for (int i = 0; i < set.size(); i++)
//	{
//		cout << "(" << set[i].x << "," << set[i].y << ")";
//	}
//	cout << "}" << endl;
//}
//
////Ввести множество
//void inputSet(vector<int>& set) {
//	for (int i = 0; i < set.size(); i++)
//	{
//		cin >> set[i];
//	}
//}
//
////Вывести множество
//void printSet(vector<int>& set) {
//	cout << "{";
//	for (int i = 0; i < set.size(); i++)
//	{
//		cout << set[i];
//		if (i == set.size() - 1)
//		{
//			break;
//		}
//		cout << ",";
//	}
//	cout << "}" << endl;
//}
//
//void main() {
//	setlocale(LC_ALL, "ru");
//
//	int size1, size2, size3;
//
//	//Множество А
//	cout << "Введите размер множества А: \n";
//	cin >> size1;
//	vector<int>set1(size1);
//	cout << "Введите элементы множества A: " << endl;
//	inputSet(set1);
//
//	//Множество В
//	cout << "Введите размер множества B: \n";
//	cin >> size2;
//	vector<int>set2(size2);
//	cout << "Введите элементы множества B: " << endl;
//	inputSet(set2);
//
//	//Отношение R
//	cout << "Введите размер отношения R: \n";
//	cin >> size3;
//	vector<XY>relation;
//	cout << "Введите отношения R: \n";
//	inputRelation(relation, size3);
//
//	cout << "Множество А" << endl;
//	printSet(set1);
//	cout << "Множество B" << endl;
//	printSet(set2);
//	cout << "Отношение R" << endl;
//	printRelation(relation);
//
//	if (isFunction(relation)) {
//		cout << "Является функцией" << endl;
//	}
//	else
//	{
//		cout << "Не является функцией" << endl;
//	}
//}