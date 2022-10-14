#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char string[1000] = "";

	cout << "Enter a string: ";
	cin >> string;

	cout << "The length of string is: " << strlen(string) << endl;

	for (int i = strlen(string); i >= 0; i--) {
		cout << string[i];
	};

	cout << endl;
	return 0;
}
