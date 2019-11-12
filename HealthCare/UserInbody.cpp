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
	std::cout << "����: ";
	std::cin >> inputBfm;
	setInbody(inputHeight, inputWeight, inputArms, inputBody, inputLegs, inputSsm, inputBfm);
}

void UserInbody::showUserInbody(std::vector<Inbody> userInbody) {
	/*
	������� inbody ������ ����ϴ� �޼ҵ��Դϴ�.
	�ʿ�������� �𸣰ڽ��ϴ�.
	*/
}

void UserInbody::showInbodyDiff(Inbody stdInbody) { // type�� Inbody���� StdInbody�� ���ɴϴ� ( ������ )
	std::cout << "\n********************����� �ιٵ�� ǥ�� �ιٵ��� ����********************" << std::endl;
	printf("%6s %8s %17s %15s %15s %15s %13s\n", "", "������", "��ݱٷ�", "�ȱ�����", "�ٸ�������", "���α�����", "����");
	printf("%6s: %5d %15d %15d %15d %15d %15d\n", "ǥ��", stdInbody.getWeight(), stdInbody.getSsm(), stdInbody.getArms(),
		stdInbody.getLegs(), stdInbody.getBody(), stdInbody.getBfm());
	printf("%5s: %5d %15d %15d %15d %15d %15d\n", "�����", getWeight(), getSsm(), getArms(), getLegs(), getBody(), getBfm());
	printf("%6s: %5d %15d %15d %15d %15d %15d\n", "����", 1, 2, 3, 4, 5, 6);
	std::cout << "\n�ƹ�Ű�� �Է��Ͻø� ó�� ȭ������ ���ư��ϴ�.\n" << std::endl;
	getchar();
	getchar();
	system("cls");
}

void UserInbody::writeInbodyToFile() {
	/*
	user1��ſ� ����� id�� �̸��� ���� ���� �� ���ƿ�
	�ٵ� ������ ���� ȸ���� �ƴ϶� �Ѹ��� ����ڸ� ������� �ϴ°Ŵϱ�
	*/
	std::ofstream out("user1_Inbody.txt", std::ios::app);
	std::string s;
	if (out.is_open()) {
		out << " " << getHeight() << " " << getWeight() << " " << getArms() << " " << getBody() << " " << getLegs() << " " << getSsm() << " " << getBfm() << "\n";
	}
}