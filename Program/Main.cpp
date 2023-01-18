#include <iostream>
#include <conio.h>
using namespace std;
const int MAX_LENGTH = 3;
string* processArray(string origArray[], int size, int& newSize) {
	string* current = new string[size];
	int index = 0;
	for (int i = 0; i < size; i++) {
		if (origArray[i].length() <= MAX_LENGTH) {
			current[index++] = origArray[i];
		}
	}
	string* result = new string[index];
	for (int i = 0; i < index; i++) result[i] = current[i];
	newSize = index;
	return result;
}
void printArray(string example[], string result[], int size, int newSize) {
	cout << "����������� ������: ";
	for (int i = 0; i < size; i++) {
		cout << example[i] << " ";
	}
	cout << "\n���������� ������: ";
	for (int i = 0; i < newSize; i++) {
		cout << result[i] << " ";
	}
	cout << endl;
}
int main() {
	setlocale(LC_ALL, "");
	bool exit = 0;
	while (exit == 0) {
		system("cls");
		cout << "������� 1 ��� ������� ��������;\n������� 2 ��� ����� � ����������;\n������� 3 ��� ������.\n";
		int choose;
		choose = _getch();
		switch (choose - '0') {
		case 1: {
			system("cls");
			string example1[4] = { "1234", "1567", "-2", "computer science" };
			int newSize;
			string* result = processArray(example1, 4, newSize);
			printArray(example1, result, 4, newSize);
			string example2[3] = { "Russia", "Denmark", "Kazan" };
			result = processArray(example2, 3, newSize);
			printArray(example2, result, 3, newSize);
			string example3[4] = { "Hello", "2", "world", ":-)" };
			result = processArray(example3, 4, newSize);
			printArray(example3, result, 4, newSize);
			system("pause");
			break;
		}
		case 2: {
			break;
		}
		case 3: {
			exit = 1;
			break;
		}
		}
	}
}