#include <iostream>
using namespace std;
int main() {
	string example[5] = {"hello", "world", "56", "t", ":-)"};
	string result[5];
	int index = 0;
	for (string current : example) {
		if (current.length() <= 3) {
			result[index++] = current;
		}
	}
	for (string current : result) {
		cout << current << " ";
	}
}