//chp4_ex5_a.cpp
#include <iostream>
#include <vector>
#include <string>
#include "read_words.h"

using std::cin;		using std::cout;	using std::endl;
using std::vector;	using std::string;

int main() {
	vector<string> words;
	vector<string>::size_type count = 0;

	//입력받기
	cout << "Write a sentence, than EOF: " << endl;
	read_words(cin, words);
	cout << "Total: " << words.size() << endl;

	return 0;
}