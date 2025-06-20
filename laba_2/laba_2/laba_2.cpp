//#include<iostream>
//#include<vector>
//
//using namespace std;
//
////Ввести матрицу
//void inputMatrix(vector<vector<int>>& matrix) {
//	cout << "Введите элементы матрицы (0 или 1): " << endl;
//	for (int i = 0; i < matrix.size(); i++)
//	{
//		for (int j = 0; j < matrix[0].size(); j++)
//		{
//			cout << "[" << i << "]" << "[" << j << "]: " << endl;
//			int input;
//			cin >> input;
//			if (input != 0 && input != 1) {
//				cout << "Введен не корректный формат" << endl;
//				j--;
//			}
//			else
//			{
//				matrix[i][j] = input;
//			}
//
//		}
//	}
//}
//
////Вывести матрицу
//void printMatrix(vector<vector<int>>& matrix) {
//	for (int i = 0; i < matrix.size(); i++)
//	{
//		for (int j = 0; j < matrix[0].size(); j++) {
//			cout << matrix[i][j] << '\t';
//		}
//		cout << endl;
//	}
//}
//
////Рефлексивность
//bool reflexivity(vector<vector<int>>& matrix) {
//	for (int i = 0; i < matrix.size(); i++)
//	{
//		if (matrix[i][i] != 1) {
//			return false;
//		}
//	}
//	return true;
//}
//
////Симметричность
//bool symmetry(vector<vector<int>>& matrix) {
//	for (int i = 0; i < matrix.size(); i++) {
//		for (int j = 0; j < matrix[0].size(); j++) {
//			if (matrix[i][j] != matrix[j][i]) {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
////Кососимметричность  (в кососимметричной матрице элементы главной диагонали всегда =false, и если [i][j] = true, то [j][i] = false, и наоборот)
//bool antiSymmetry(vector<vector<int>>& matrix) {
//	for (int i = 0; i < matrix.size(); i++) {
//		for (int j = 0; j < matrix[0].size(); j++) {
//			if (matrix[i][j] == matrix[j][i] && i != j)
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
////Транзитивность
//bool transitivity(vector<vector<int>>& matrix) {
//	for (int i = 0; i < matrix.size(); i++) {
//		for (int j = 0; j < matrix[0].size(); j++) {
//			for (int k = 0; k < matrix[0].size(); k++)
//			{
//				if (matrix[i][j] == 1 && matrix[j][k] == 1 && matrix[i][k] != 1) {
//					return false;
//				}
//			}
//		}
//	}
//	return true;
//}
//
//void main() {
//	setlocale(LC_ALL, "ru");
//	int n, m;
//	cout << "Введите размер массива: " << endl;
//	cin >> n >> m;
//	bool answer;
//
//	vector<vector<int>>matrix(n, vector<int>(m));
//
//	inputMatrix(matrix);
//	printMatrix(matrix);
//
//	//Рефлексивность
//	answer = reflexivity(matrix);
//	if (answer == true) {
//		cout << "Рефлексивность: Да" << endl;
//	}
//	else
//		cout << "Рефлексивность: Нет" << endl;
//
//	//Симметричность
//	answer = symmetry(matrix);
//	if (answer == true) {
//		cout << "Симметричность: Да" << endl;
//	}
//	else
//		cout << "Симметричность: Нет" << endl;
//
//	//Кососимметричность
//	answer = antiSymmetry(matrix);
//	if (answer == true) {
//		cout << "Кососимметричность: Да" << endl;
//	}
//	else
//		cout << "Кососимметричность: Нет" << endl;
//
//	//Транзитивность
//	answer = transitivity(matrix);
//	if (answer == true) {
//		cout << "Транзитивность: Да" << endl;
//	}
//	else
//		cout << "Транзитивность: Нет" << endl;
//}
