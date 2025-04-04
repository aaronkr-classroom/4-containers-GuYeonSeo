//read_words.cpp
#include "read_words.h"

std::istream& read_words(std::istream& in, std::vector<std::string>& words) {
	if (in) {
		//이전 내용을 제거
		words.clear();

		//입력을 위한 변수 
		std::string x; //cin에서 사용하기

		//입력받은 점수의 합은 sum
		while (in >> x) {
			words.push_back(x);
		}

		//다음 학생의 점수 입력 작업을 고려해 스트림을 지움
		in.clear();

		return in;
	}
}