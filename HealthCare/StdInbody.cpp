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
		std::cout << "������ ã�� �� �����ϴ�." << std::endl;
	}

	// ���Ͽ��� ������� Ű�� ã�Ƽ� �� ���� �����͸� �����;��մϴ�.

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
	Sleep(2000);   //1�� ������
	system("cls"); //�ܼ�ȭ�� �����
	std::cout << "********************ǥ�� �ιٵ� ����********************" << std::endl;
	std::cout << "������ ������� Ű�� �´� ǥ�� �ιٵ� �������Դϴ�." << std::endl;
	std::cout << "Ű: " << getHeight() << std::endl;
	std::cout << "������: " << getWeight() << std::endl;
	std::cout << "��ݱٷ�: " << getSsm() << std::endl;
	std::cout << "�ȱ�����: " << getArms() << std::endl;
	std::cout << "�ٸ�������: " << getLegs() << std::endl;
	std::cout << "���α�����: " << getBody() << std::endl;
	std::cout << "ü���淮: " << getBfm() << std::endl;
}