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
	std::cout << "비만율: ";
	std::cin >> inputBfm;
	setInbody(inputHeight, inputWeight, inputArms, inputBody, inputLegs, inputSsm, inputBfm);
}

void UserInbody::showUserInbody(std::vector<Inbody> userInbody) {
	/*
	사용자의 inbody 정보를 출력하는 메소드입니다.
	필요없을지도 모르겠습니다.
	*/
}

void UserInbody::showInbodyDiff(Inbody stdInbody) { // type은 Inbody지만 StdInbody가 들어옵니다 ( 다형성 )
	std::cout << "\n********************사용자 인바디와 표준 인바디의 차이********************" << std::endl;
	printf("%6s %8s %17s %15s %15s %15s %13s\n", "", "몸무게", "골격근량", "팔근육량", "다리근육량", "복부근육량", "비만율");
	printf("%6s: %5d %15d %15d %15d %15d %15d\n", "표준", stdInbody.getWeight(), stdInbody.getSsm(), stdInbody.getArms(),
		stdInbody.getLegs(), stdInbody.getBody(), stdInbody.getBfm());
	printf("%5s: %5d %15d %15d %15d %15d %15d\n", "사용자", getWeight(), getSsm(), getArms(), getLegs(), getBody(), getBfm());
	printf("%6s: %5d %15d %15d %15d %15d %15d\n", "차이", 1, 2, 3, 4, 5, 6);
	std::cout << "\n아무키나 입력하시면 처음 화면으로 돌아갑니다.\n" << std::endl;
	getchar();
	getchar();
	system("cls");
}

void UserInbody::writeInbodyToFile() {
	/*
	user1대신에 사용자 id나 이름이 들어가면 좋을 거 같아요
	근데 지금은 여러 회원이 아니라 한명의 사용자를 대상으로 하는거니까
	*/
	std::ofstream out("user1_Inbody.txt", std::ios::app);
	std::string s;
	if (out.is_open()) {
		out << " " << getHeight() << " " << getWeight() << " " << getArms() << " " << getBody() << " " << getLegs() << " " << getSsm() << " " << getBfm() << "\n";
	}
}