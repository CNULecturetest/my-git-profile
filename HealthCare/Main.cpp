/*
�����ؾ��� ��
inbody ��ɾ ġ�� �ʰ� diff ��ɾ ġ�� ����
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <windows.h>
#include "Inbody.h"
#include "StdInbody.h"
#include "UserInbody.h"

using namespace std;
vector<UserInbody> userInbody;
int numberOfUserInbodyData = 0;
StdInbody stdInbody;

void getInbodyHandler(int week) {
	Sleep(1000);   //1�� ������
	system("cls"); //�ܼ�ȭ�� �����
	cout << "********************�ιٵ� �Է�********************" << endl;
	UserInbody newUserInbody;
	userInbody.push_back(newUserInbody);
	numberOfUserInbodyData++;
	userInbody[week].getInbodyFromUser();
	userInbody[week].writeInbodyToFile();
}

void runInbodyService() { // �ιٵ� �⺻ ����
	if (numberOfUserInbodyData > 0) { // ����ڰ� �̹� �ιٵ� �Է������� �� �Է��� �ʿ� ���� ��¸��մϴ�.
		stdInbody.showStdInbody();
		userInbody[0].showInbodyDiff(stdInbody);
	}
	else {
		getInbodyHandler(0); // �ιٵ� �Է¹ޱ�
		stdInbody.getInbodyFromFile(userInbody[0].getHeight()); // ����� Ű�� �´� ǥ�� �ιٵ� ��������
		stdInbody.showStdInbody(); // ǥ�� �ιٵ� ����ϱ�
		userInbody[0].showInbodyDiff(stdInbody); // ����� �ιٵ�� ǥ�� �ιٵ� ���� ����ϱ�
		// ���� ������ �ʿ䰡 ������ InbodyDiff �ϳ� ������ �� �� ���ƿ�
	}
}

void runInbodyDiffService() {
	int week = 1;
	int temp = 0;
	while (1) {
		getInbodyHandler(week++);
		cout << "\n��� �Է�: 1 �׸� �Է�: 2 " << endl;
		cout << "$ ";
		cin >> temp;
		if (temp == 2) {
			system("cls"); //�ܼ�ȭ�� �����
			break;
		}
	}
	// ����� ����ϴ� �޼ҵ� ���� ���� X
}

void runDietService() {}

void runRecordService() {}

int main() {
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	Sleep(800);   //1�� ������
	system("cls"); //�ܼ�ȭ�� �����
	string command;
	while (1) {
		cout << "********************Health care program********************\n" << endl;
		cout << "\"inbody\": ������� inbody�� ǥ�� �ιٵ� ���մϴ�.\n" << endl;
		cout << "\"diff\": ������� �ݺ��� inbody�� �Է¹޾� ��ȭ���� �м��մϴ�.\n" << endl;
		cout << "\"diet\": ������� �������� �Ĵܰ����� �����ϴ�.\n" << endl;
		cout << "\"record\": ����ڰ� ü�������� ��� �� �ֵ��� � ����� �����մϴ�.\n" << endl;
		cout << "\"exit\": ���α׷��� �����մϴ�.\n" << endl;
		cout << "********************Health care program********************\n" << endl;
		cout << "$ ";
		cin >> command;
		if (command.compare("inbody") == 0)
			runInbodyService();
		else if (command.compare("diff") == 0)
			runInbodyDiffService();
		else if (command.compare("diet") == 0)
			runDietService();
		else if (command.compare("record") == 0)
			runRecordService();
		else if (command.compare("exit") == 0) {
			cout << "\n���α׷��� ����Ǿ����ϴ�.";
			exit(1);
		}
		else {
			system("cls");
			cout << "�Ʒ��� ��ɾ� �߿��� �Է����ּž� �մϴ�.\n" << endl;
		}
	}
	return 1;
}