#include "UserInbody.h"

void UserInbody::getInbodyFromUser() {
	int inputWeight;
	int inputHeight;
	int inputSsm;
	int inputBfm;
	int inputBody;
	int inputLegs;
	int inputArms;
	std::cout << "Ű: ";
	std::cin >> inputHeight;
	std::cout << "������: ";
	std::cin >> inputWeight;
	std::cout << "��ݱٷ�: ";
	std::cin >> inputSsm;
	std::cout << "�ȱ�����: ";
	std::cin >> inputArms;
	std::cout << "�ٸ�������: ";
	std::cin >> inputLegs;
	std::cout << "���α�����: ";
	std::cin >> inputBody;
	std::cout << "ü���淮: ";
	std::cin >> inputBfm;
	setInbody(inputHeight, inputWeight, inputArms, inputBody, inputLegs, inputSsm, inputBfm);
}

void UserInbody::showUserInbody(int targetWeek) {
	std::cout << "\n********************������� " << targetWeek << "���� �ιٵ� ����********************" << std::endl;
	std::cout << "Ű: " << getHeight() << std::endl;
	std::cout << "������: " << getWeight() << std::endl;
	std::cout << "��ݱٷ�: " << getSsm() << std::endl;
	std::cout << "�ȱ�����: " << getArms() << std::endl;
	std::cout << "�ٸ�������: " << getLegs() << std::endl;
	std::cout << "���α�����: " << getBody() << std::endl;
	std::cout << "ü���淮: " << getBfm() << std::endl;
}

void UserInbody::showInbodyDiff(Inbody stdInbody) { // type�� Inbody���� StdInbody�� ���ɴϴ� ( ������ )
	int diffWeight = getWeight()- stdInbody.getWeight();
	int diffSsm = getSsm()- stdInbody.getSsm();
	int diffArms = getArms()-stdInbody.getArms();
	int diffLegs = getLegs()-stdInbody.getLegs();
	int diffBody = getBody()- stdInbody.getBody();
	int diffBfm = getBfm()- stdInbody.getBfm();
	std::cout << "\n********************����� �ιٵ�� ǥ�� �ιٵ��� ����********************" << std::endl;
	printf("%6s %8s %17s %15s %15s %15s %13s\n", "", "������", "��ݱٷ�", "�ȱ�����", "�ٸ�������", "���α�����", "����");
	printf("%5s: %5d %15d %15d %15d %15d %15d\n", "�����", getWeight(), getSsm(), getArms(), getLegs(), getBody(), getBfm());
	printf("%6s: %5d %15d %15d %15d %15d %15d\n", "ǥ��", stdInbody.getWeight(), stdInbody.getSsm(), stdInbody.getArms(),
		stdInbody.getLegs(), stdInbody.getBody(), stdInbody.getBfm());
	printf("%6s: %5d %15d %15d %15d %15d %15d\n", "����", diffWeight, diffSsm, diffArms, diffLegs, diffBody, diffBfm);
	std::cout << "\n�ƹ�Ű�� �Է��Ͻø� ó�� ȭ������ ���ư��ϴ�.\n" << std::endl;
	getchar();
	getchar();
}

void UserInbody::writeInbodyToFile() {
	/*
	user1��ſ� ����� id�� �̸��� ���� ���� �� ���ƿ�
	�ٵ� ������ ���� ȸ���� �ƴ϶� �Ѹ��� ����ڸ� ������� �ϴ°Ŵϱ�
	*/
	std::ofstream out("user1_Inbody.txt", std::ios::app);
	std::string s;
	if (out.is_open()) {
		out << " " << getHeight() << " " << getWeight() << " " << getSsm() << " " << getArms() << " " << getLegs() << " " << getBody() << " " << getBfm() << "\n";
	}
}
