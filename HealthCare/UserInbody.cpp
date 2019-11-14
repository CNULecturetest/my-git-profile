#include "UserInbody.h"

void UserInbody::getInbodyFromUser() {
	int inputWeight;
	int inputHeight;
	int inputSsm;
	int inputBfm;
	int inputBody;
	int inputLegs;
	int inputArms;
	std::cout << "키: ";
	std::cin >> inputHeight;
	std::cout << "몸무게: ";
	std::cin >> inputWeight;
	std::cout << "골격근량: ";
	std::cin >> inputSsm;
	std::cout << "팔근육량: ";
	std::cin >> inputArms;
	std::cout << "다리근육량: ";
	std::cin >> inputLegs;
	std::cout << "복부근육량: ";
	std::cin >> inputBody;
	std::cout << "체지방량: ";
	std::cin >> inputBfm;
	setInbody(inputHeight, inputWeight, inputArms, inputBody, inputLegs, inputSsm, inputBfm);
}

void UserInbody::showUserInbody(int targetWeek) {
	std::cout << "\n********************사용자의 " << targetWeek << "주차 인바디 정보********************" << std::endl;
	std::cout << "키: " << getHeight() << std::endl;
	std::cout << "몸무게: " << getWeight() << std::endl;
	std::cout << "골격근량: " << getSsm() << std::endl;
	std::cout << "팔근육량: " << getArms() << std::endl;
	std::cout << "다리근육량: " << getLegs() << std::endl;
	std::cout << "복부근육량: " << getBody() << std::endl;
	std::cout << "체지방량: " << getBfm() << std::endl;
}

void UserInbody::showInbodyDiff(Inbody stdInbody) { // type은 Inbody지만 StdInbody가 들어옵니다 ( 다형성 )
	int diffWeight = getWeight()- stdInbody.getWeight();
	int diffSsm = getSsm()- stdInbody.getSsm();
	int diffArms = getArms()-stdInbody.getArms();
	int diffLegs = getLegs()-stdInbody.getLegs();
	int diffBody = getBody()- stdInbody.getBody();
	int diffBfm = getBfm()- stdInbody.getBfm();
	std::cout << "\n********************사용자 인바디와 표준 인바디의 차이********************" << std::endl;
	printf("%6s %8s %17s %15s %15s %15s %13s\n", "", "몸무게", "골격근량", "팔근육량", "다리근육량", "복부근육량", "비만율");
	printf("%5s: %5d %15d %15d %15d %15d %15d\n", "사용자", getWeight(), getSsm(), getArms(), getLegs(), getBody(), getBfm());
	printf("%6s: %5d %15d %15d %15d %15d %15d\n", "표준", stdInbody.getWeight(), stdInbody.getSsm(), stdInbody.getArms(),
		stdInbody.getLegs(), stdInbody.getBody(), stdInbody.getBfm());
	printf("%6s: %5d %15d %15d %15d %15d %15d\n", "차이", diffWeight, diffSsm, diffArms, diffLegs, diffBody, diffBfm);
	std::cout << "\n아무키나 입력하시면 처음 화면으로 돌아갑니다.\n" << std::endl;
	getchar();
	getchar();
}

void UserInbody::writeInbodyToFile() {
	/*
	user1대신에 사용자 id나 이름이 들어가면 좋을 거 같아요
	근데 지금은 여러 회원이 아니라 한명의 사용자를 대상으로 하는거니까
	*/
	std::ofstream out("user1_Inbody.txt", std::ios::app);
	std::string s;
	if (out.is_open()) {
		out << " " << getHeight() << " " << getWeight() << " " << getSsm() << " " << getArms() << " " << getLegs() << " " << getBody() << " " << getBfm() << "\n";
	}
}
