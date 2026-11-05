/*
* Korbin Landrum
* count words
* 11/5/26
*/

#include<iostream>
#include<string>
using namespace std;

int wordCountBaby(string str);

int main() {
	string input;
	while (true) {
		cout << "Enter a sentence if you dare or Q if you're scared: ";
		getline(cin, input);

		if (input == "Q") {
			break;
		}

		cout << "The amount of scary words in your sentence: " << wordCountBaby(input) << endl;
	}
}

int wordCountBaby(string str) {
	int words = 0;
	bool inWord = false;

	for (int i = 0; i < str.length();i++) {
		
		if (!inWord && (str[i] >= 33 && str[i] <= 126)) {
			inWord = true;
			words++;

		}

		if (inWord == true && (str[i] == 32 )) {
			inWord = false;
		}


	}
	return words;
}