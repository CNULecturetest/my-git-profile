#include "InbodyController.h"

std::vector<Inbody> InbodyController::getInbodyFromUser(std::vector<Inbody>& userInbody) {
	Inbody tempInbody;
	int weight;
	int height;
	std::cout << "몸무게: ";
	std::cin >> weight;
	std::cout << "키: ";
	std::cin >> height;
	tempInbody.setHeight(height);
	tempInbody.setWeight(weight);
	userInbody.push_back(tempInbody);
	return userInbody;
}

Inbody InbodyController::getInbodyFromFile(Inbody& stdInbody, int height) {
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
	stdInbody.setHeight(data);
	in >> data;
	stdInbody.setWeight(data);
	return stdInbody;
}

void InbodyController::showStdInbody(Inbody& stdInbody) {
	std::cout << "*****표준 인바디 정보*****" << std::endl;
	std::cout << "사용자의 키와 가장 근접한 인바디 데이터를 출력합니다.\n" << std::endl;
	std::cout << "키: " << stdInbody.getHeight() << std::endl;
	std::cout << "몸무게: " << stdInbody.getWeight() << std::endl;
}

void InbodyController::showUserInbody(std::vector<Inbody> userInbody) {
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
