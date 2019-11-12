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

	// ���Ͽ��� ������� Ű�� ���� ������ Ű�� ã�� �ڵ尡 �ʿ��մϴ�.
	// in >> temp;
	// if(temp)

	// ���� ������ Ű�� �ִ� ������ �̵������״� ������ �޾Ƽ� stdInbody�� �ְ� �����մϴ�.
	in >> inputWeight;
	in >> inputHeight;
	in >> inputSsm;
	in >> inputBfm;
	in >> inputBody;
	in >> inputLegs;
	in >> inputArms;
	setInbody(inputWeight, inputHeight, inputArms, inputBody, inputLegs, inputSsm, inputBfm);
}

void StdInbody::showStdInbody() {
	Sleep(2000);   //1�� ������
	system("cls"); //�ܼ�ȭ�� �����
	std::cout << "********************ǥ�� �ιٵ� ����********************" << std::endl;
	std::cout << "������� Ű�� ���� ������ �ιٵ� �����͸� ����մϴ�." << std::endl;
	std::cout << "Ű: " << getHeight() << std::endl;
	std::cout << "������: " << getWeight() << std::endl;
}