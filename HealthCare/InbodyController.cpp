#include "InbodyController.h"

std::vector<Inbody> InbodyController::getInbodyFromUser(std::vector<Inbody>& userInbody) {
	Inbody tempInbody;
	int weight;
	int height;
	std::cout << "������: ";
	std::cin >> weight;
	std::cout << "Ű: ";
	std::cin >> height;
	tempInbody.setHeight(height);
	tempInbody.setWeight(weight);
	userInbody.push_back(tempInbody);
	return userInbody;
}

Inbody InbodyController::getInbodyFromFile(Inbody& stdInbody, int height) {
	std::ifstream in("inbody.txt");
	int temp; // ���Ͽ� �ִ� Ű�� ���� ����
	int data; // ������ ���� ���� ����
	if (!in.is_open()) {
		std::cout << "������ ã�� �� �����ϴ�." << std::endl;
	}
	
	// ���Ͽ��� ������� Ű�� ���� ������ Ű�� ã�� �ڵ尡 �ʿ��մϴ�.
	// in >> temp;
	// if(temp)
	
	// ���� ������ Ű�� �ִ� ������ �̵������״� ������ �޾Ƽ� stdInbody�� �ְ� �����մϴ�.
	in >> data;
	stdInbody.setHeight(data);
	in >> data;
	stdInbody.setWeight(data);
	return stdInbody;
}

void InbodyController::showStdInbody(Inbody& stdInbody) {
	std::cout << "*****ǥ�� �ιٵ� ����*****" << std::endl;
	std::cout << "������� Ű�� ���� ������ �ιٵ� �����͸� ����մϴ�.\n" << std::endl;
	std::cout << "Ű: " << stdInbody.getHeight() << std::endl;
	std::cout << "������: " << stdInbody.getWeight() << std::endl;
}

void InbodyController::showUserInbody(std::vector<Inbody> userInbody) {
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
