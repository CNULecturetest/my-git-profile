#include "UserInbody.h"
#include "StdInbody.h"

void UserInbody::getInbodyFromUser() {
	// Inbody�� �ִ� �� ���� ������ �޾ƾ� �մϴ�.
	int inputWeight;
	int inputHeight;
	std::cout << "������: ";
	std::cin >> inputWeight;
	std::cout << "Ű: ";
	std::cin >> inputHeight;
	setHeight(inputHeight);
	setWeight(inputWeight);
}

void UserInbody::showUserInbody(std::vector<Inbody> userInbody) {
	/*
	������� inbody ������ ����ϴ� �޼ҵ��Դϴ�.
	������� inbody�� vector<Inbody>�̹Ƿ� vector�� ��ȸ�ϸ� ������ inbody �����͸� ����ϴ� �ڵ尡 �ʿ��մϴ�.
	*/

	//std::vector<Inbody>::iterator iter;
	//for (iter = userInbody.begin(); iter != userInbody.end(); ++iter) {
	//	*iter.
	//}
	for (int i = 0; i < userInbody.size() - 1; i++) {
		std::cout << "*****����� �ιٵ� ����*****" << std::endl;
		std::cout << "������: " << userInbody[i].getWeight() << std::endl;
	}
}

void UserInbody::showInbodyDiff(StdInbody stdInbody) {
	for(int i=0;)
};