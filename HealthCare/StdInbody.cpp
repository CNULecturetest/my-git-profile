#include "StdInbody.h"

void StdInbody::getInbodyFromFile(int height) {
	std::ifstream in("inbody.txt");
	int temp; // 파일에 있는 키를 담을 변수
	int data; // 파일의 값을 담을 변수
	if (!in.is_open()) {
		std::cout << "파일을 찾을 수 없습니다." << std::endl;
	}

	// 파일에서 사용자의 키와 가장 근접한 키를 찾는 코드가 필요합니다.
	// in >> temp;
	// if(temp)

	// 가장 근접한 키가 있는 행으로 이동했을테니 정보를 받아서 stdInbody에 넣고 리턴합니다.
	in >> data;
	setHeight(data);
	in >> data;
	setWeight(data);
}

void StdInbody::showStdInbody() {
	Sleep(1000);   //1초 딜레이
	system("cls"); //콘솔화면 지우기
	std::cout << "*****표준 인바디 정보*****" << std::endl;
	std::cout << "사용자의 키와 가장 근접한 인바디 데이터를 출력합니다." << std::endl;
	std::cout << "키: " << getHeight() << std::endl;
	std::cout << "몸무게: " << getWeight() << std::endl;
}