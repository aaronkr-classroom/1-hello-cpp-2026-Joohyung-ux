#include <iostream> //C언어의 stdio.h

int main(void) {
	/*
	  cout은 출력을 담당하는 객체로써,
	  스트림 삽입 연산자 (stream insertion operator)인
	  <<를 이용해서 " "안에 있는 문자열을 출력한다.
	*/
	// printf("hello world~"); c언어에서의 출력

	std::cout << "Hello World" << std::endl; //c++ 보통출력 endl(줄바꿈, 줄종료)
	//std::cin >> 입력 받을 때 ;


	return 0; // 0=오류 없이 종료
}