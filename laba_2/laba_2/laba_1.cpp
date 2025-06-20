//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//
////ijji ��������� ��� �������� ������
//struct element
//{
//	char evennumber1;  //������ �����
//	char odd1;         //�������� �����
//	char odd2;         //�������� �����
//	char evennumber2;  //������ �����
//
//};
//
////������ ������
//void inputarray(vector<element>& mass, int size) {
//	element elem;
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << "input element ijji " << i << ": ";
//		string input;
//		cin >> input;
//
//		//�������� ������������ �����
//		if (input.length() == 4 &&
//			(input[0] >= '0' && input[0] <= '9') && (input[0] - '0') % 2 == 0 &&
//			(input[1] >= '0' && input[1] <= '9') && (input[1] - '0') % 2 == 1 &&
//			(input[2] >= '0' && input[2] <= '9') && (input[2] - '0') % 2 == 1 &&
//			(input[3] >= '0' && input[3] <= '9') && (input[3] - '0') % 2 == 0)
//		{
//			elem.evennumber1 = input[0];
//			elem.odd1 = input[1];
//			elem.odd2 = input[2];
//			elem.evennumber2 = input[3];
//			mass.push_back(elem);
//		}
//		else
//		{
//			cout << "error input" << endl;
//			--i;
//		}
//	}
//	cout << endl;
//}
//
////������� ������
//void printarray(vector<element>& mass) {
//	for (int i = 0; i < mass.size(); i++)
//	{
//		cout << "element " << i << ": " << mass[i].evennumber1 << mass[i].odd1 << mass[i].odd2 << mass[i].evennumber2 << endl;
//	}
//}
//
////������� ����������� �������� �������
//void removenonunique(vector<element>& mass) {
//	vector<element> uniqueelement;
//
//	for (int i = 0; i < mass.size(); i++)
//	{
//		bool isunique = true;
//
//		for (int j = 0; j < uniqueelement.size(); j++)
//		{
//			if (mass[i].evennumber1 == uniqueelement[j].evennumber1 &&
//				mass[i].odd1 == uniqueelement[j].odd1 &&
//				mass[i].odd2 == uniqueelement[j].odd2 &&
//				mass[i].evennumber2 == uniqueelement[j].evennumber2) {
//				isunique = false;
//				break;
//			}
//		}
//
//		if (isunique) {
//			uniqueelement.push_back(mass[i]);
//		}
//	}
//
//	//������� ������������ ������ � ��������� ��� ����������� ����������
//	mass.clear();
//	for (int i = 0; i < uniqueelement.size(); i++)
//	{
//		mass.push_back(uniqueelement[i]);
//	}
//}
//
////����������� ��������
//void unionarray(vector<element>& result, vector<element>& mass1, vector<element>& mass2) {
//	for (int i = 0; i < mass1.size(); i++)
//	{
//		result.push_back(mass1[i]);
//	}
//	for (int i = 0; i < mass2.size(); i++)
//	{
//		result.push_back(mass2[i]);
//	}
//	removenonunique(result);
//}
//
////������� ���������(�������������) �������� �������
//void removeunique(vector<element>& mass) {
//	vector<element> nouniqueelement;
//
//	for (int i = 0; i < mass.size(); i++)
//	{
//		bool isunique = true;
//
//		for (int j = 0; j < nouniqueelement.size(); j++)
//		{
//			if (mass[i].evennumber1 != nouniqueelement[j].evennumber1 &&
//				mass[i].odd1 != nouniqueelement[j].odd1 &&
//				mass[i].odd2 != nouniqueelement[j].odd2 &&
//				mass[i].evennumber2 != nouniqueelement[j].evennumber2) {
//				isunique = false;
//				break;
//			}
//		}
//
//		if (isunique) {
//			nouniqueelement.push_back(mass[i]);
//		}
//	}
//
//	//������� ������������ ������ � ��������� ��� ����������� ����������
//	mass.clear();
//	for (int i = 0; i < nouniqueelement.size(); i++)
//	{
//		mass.push_back(nouniqueelement[i]);
//	}
//}
//
////����������� ��������
//void intersectionarray(vector<element>& result, vector<element>& mass1, vector<element>& mass2) {
//	for (int i = 0; i < mass1.size(); i++)
//	{
//		result.push_back(mass1[i]);
//	}
//	for (int i = 0; i < mass2.size(); i++)
//	{
//		result.push_back(mass2[i]);
//	}
//	//������� ������������� ��������
//	removeunique(result);
//	//������� ������������� ��������
//	removenonunique(result);
//}
//
////���������� �\� � �\�
//void addingarray(vector<element>& result, vector<element>& mass1, vector<element>& mass2) {
//	vector<element>intersectiom;
//
//	//������� ������� �����������
//	intersectionarray(intersectiom, mass1, mass2);
//	
//	//������ ���� ����������, ���� �������� ����������� ���� � ���������, �� �� ������� ��� �������� ���������
//	for (int i = 0; i < mass1.size(); i++)
//	{
//		bool isunique = true;
//		for (int j = 0; j < intersectiom.size(); j++)
//		{
//			if (mass1[i].evennumber1 == intersectiom[j].evennumber1 &&
//				mass1[i].odd1 == intersectiom[j].odd1 &&
//				mass1[i].odd2 == intersectiom[j].odd2 &&
//				mass1[i].evennumber2 == intersectiom[j].evennumber2) {
//				isunique = false;
//				break;
//			}
//		}
//
//		if (isunique) {
//			result.push_back(mass1[i]);
//		}
//	}
//
//}
////�������������� ��������
////���� ��������� �������: 1)���������� ���������� �\� � �\�; 2)�� ����������� ������ �����������
////����� 2 ������
//void symmetricdifferencearray(vector<element>& result, vector<element>& unionmass, vector<element>& intersectionmass) {
//	for (int i = 0; i < unionmass.size(); i++)
//	{
//		bool isunique = true;
//		for (int j = 0; j < intersectionmass.size(); j++)
//		{
//			if (unionmass[i].evennumber1 == intersectionmass[j].evennumber1 &&
//				unionmass[i].odd1 == intersectionmass[j].odd1 &&
//				unionmass[i].odd2 == intersectionmass[j].odd2 &&
//				unionmass[i].evennumber2 == intersectionmass[j].evennumber2) {
//				isunique = false;
//				break;
//			}
//		}
//
//		if (isunique) {
//			result.push_back(unionmass[i]);
//		}
//	}
//}
//
//int main() {
//	int size1, size2;
//	vector<element>mass1;
//	vector<element>mass2;
//	vector<element>unionmass;
//	vector<element>intersectionmass;
//	vector<element>addingab;
//	vector<element>addingba;
//	vector<element>symmetricdifference;
//
//	cout << "input size first array: ";
//	cin >> size1;
//	inputarray(mass1, size1);
//
//	cout << "input size second array: ";
//	cin >> size2;
//	inputarray(mass2, size2);
//
//	removenonunique(mass1);
//	removenonunique(mass2);
//
//	cout << "elements first array: " << endl;
//	printarray(mass1);
//	cout << endl;
//
//	cout << "elements second array: " << endl;
//	printarray(mass2);
//	cout << endl;
//
//	//����������
//	unionarray(unionmass, mass1, mass2);
//	cout << "elements union arrays: " << endl;
//	printarray(unionmass);
//	cout << endl;
//
//	//�����������
//	intersectionarray(intersectionmass, mass1, mass2);
//	cout << "elements intersection arrays: " << endl;
//	printarray(intersectionmass);
//	cout << endl;
//
//	//���������� �\�
//	addingarray(addingab, mass1, mass2);
//	cout << "elements adding a/b arrays: " << endl;
//	printarray(addingab);
//	cout << endl;
//
//	//���������� b\a
//	addingarray(addingba, mass2, mass1);
//	cout << "elements adding b/a arrays: " << endl;
//	printarray(addingba);
//	cout << endl;
//
//	//�������������� ��������
//	symmetricdifferencearray(symmetricdifference, unionmass, intersectionmass);
//	cout << "elements symmetric difference arrays: " << endl;
//	printarray(symmetricdifference);
//	cout << endl;
//}