#include "StdInbody.h"

void StdInbody::getInbodyFromFile(int height) {
	std::ifstream in("inbody.txt");
	int inputWeight;
	int inputHeight;
	int inputSsm;
	int inputBfm;
	int inputBody;
	int inputLegs;
	int inputArms;
	if (!in.is_open()) {
		std::cout << "파일을 찾을 수 없습니다." << std::endl;
	}

	// 파일에서 사용자의 키를 찾아서 그 행의 데이터를 가져와야합니다.

	in >> inputHeight;
	in >> inputWeight;
	in >> inputArms;
	in >> inputBody;
	in >> inputLegs;
	in >> inputSsm;
	in >> inputBfm;

	setInbody(inputHeight, inputWeight, inputArms, inputBody, inputLegs, inputSsm, inputBfm);
}

void StdInbody::showStdInbody() {
	Sleep(2000);   //1초 딜레이
	system("cls"); //콘솔화면 지우기
	std::cout << "********************표준 인바디 정보********************" << std::endl;
	std::cout << "다음은 사용자의 키에 맞는 표준 인바디 데이터입니다." << std::endl;
	std::cout << "키: " << getHeight() << std::endl;
	std::cout << "몸무게: " << getWeight() << std::endl;
	std::cout << "골격근량: " << getSsm() << std::endl;
	std::cout << "팔근육량: " << getArms() << std::endl;
	std::cout << "다리근육량: " << getLegs() << std::endl;
	std::cout << "복부근육량: " << getBody() << std::endl;
	std::cout << "체지방량: " << getBfm() << std::endl;
}