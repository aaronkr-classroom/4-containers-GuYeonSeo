//chp4_ex7.cpp
#include <vector>
#include <string>
#include <iostream>

using std::vector;	using std::string;
using std::cout;	using std::cin;		using std::endl;

int main() {
	vector<double> nums;

	cout << "Enter numbers, than EOF: " << endl;

	//입력받고
	double num;
	while (cin >> num) {
		nums.push_back(num);
	}

	//계산하기
	double average;
	//--------------------
	double sum = 0, count = nums.size();
	for (vector<double>::size_type i = 0; i < count; ++i) {
		sum += nums[i];
	}
	average = sum / count;
	//---------------------
	cout << "Average: " << average << endl;
	return 0;
}