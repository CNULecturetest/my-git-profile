#include "StdInbody.h"

void StdInbody::getInbodyFromFile(int height) {
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
	setHeight(data);
	in >> data;
	setWeight(data);
}

void StdInbody::showStdInbody() {
	Sleep(1000);   //1�� ������
	system("cls"); //�ܼ�ȭ�� �����
	std::cout << "*****ǥ�� �ιٵ� ����*****" << std::endl;
	std::cout << "������� Ű�� ���� ������ �ιٵ� �����͸� ����մϴ�." << std::endl;
	std::cout << "Ű: " << getHeight() << std::endl;
	std::cout << "������: " << getWeight() << std::endl;
}