#include <iostream>
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
int main() {
	string example[5] = {"hello", "world", "56", "t", ":-)"};
	int newSize;
	string* result = processArray(example, 5, newSize);
	for (int i = 0; i < newSize; i++) {
		cout << result[i] << " " << i << " ";
	}
}