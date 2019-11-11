#include "UserInbody.h"
#include "StdInbody.h"

void UserInbody::getInbodyFromUser() {
	// Inbody에 있는 더 많은 정보를 받아야 합니다.
	int inputWeight;
	int inputHeight;
	std::cout << "몸무게: ";
	std::cin >> inputWeight;
	std::cout << "키: ";
	std::cin >> inputHeight;
	setHeight(inputHeight);
	setWeight(inputWeight);
}

void UserInbody::showUserInbody(std::vector<Inbody> userInbody) {
	/*
	사용자의 inbody 정보를 출력하는 메소드입니다.
	사용자의 inbody는 vector<Inbody>이므로 vector를 순회하며 각각의 inbody 데이터를 출력하는 코드가 필요합니다.
	*/

	//std::vector<Inbody>::iterator iter;
	//for (iter = userInbody.begin(); iter != userInbody.end(); ++iter) {
	//	*iter.
	//}
	for (int i = 0; i < userInbody.size() - 1; i++) {
		std::cout << "*****사용자 인바디 정보*****" << std::endl;
		std::cout << "몸무게: " << userInbody[i].getWeight() << std::endl;
	}
}

void UserInbody::showInbodyDiff(StdInbody stdInbody) {
	for(int i=0;)
};