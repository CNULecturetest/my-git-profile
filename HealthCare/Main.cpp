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
StdInbody stdInbody;
void specialInbodyService();

void getInbodyHandler() {
	Sleep(1000);   //1�� ������
	system("cls"); //�ܼ�ȭ�� �����
	cout << "*****�ιٵ� �Է�*****" << endl;
	UserInbody newUserInbody;
	userInbody.push_back(newUserInbody);
	userInbody[0].getInbodyFromUser();
}

void runInbodyService() { // �ιٵ� �⺻ ���񽺷� �Է��� �޾Ƽ� ǥ�� �ιٵ���� ���̸� ����մϴ�
	Sleep(1000);   //1�� ������
	system("cls"); //�ܼ�ȭ�� �����

	cout << "*****�ιٵ� �Է�*****" << endl;
	UserInbody newUserInbody;
	userInbody.push_back(newUserInbody);
	userInbody[0].getInbodyFromUser();
	stdInbody.getInbodyFromFile(userInbody[0].getHeight());
	stdInbody.showStdInbody();

	userInbody[0].showInbodyDiff(stdInbody); // ���� ������ �ʿ䰡 ������ InbodyDiff �ϳ� ������ �� �� ���ƿ�

	cout << "\ninbody ��ȭ�� ���� �����ø� \"special\", �޴��� ���ư��÷��� \"home\"�� �Է����ּ���" << endl;
	string command;
	while (1) {
		cout << "$ ";
		cin >> command;
		if (command.compare("home") == 0) {
			Sleep(1000);   //1�� ������
			system("cls"); //�ܼ�ȭ�� �����
			break;
		}
		else if (command.compare("special") == 0){
			specialInbodyService();
			Sleep(1000);   //1�� ������
			system("cls"); //�ܼ�ȭ�� �����
		}
	}
}

void specialInbodyService() { // �ιٵ� Ư�� ���񽺷� n���� �ιٵ� �ݺ��ؼ� ���� ���� �׷����� ����ϰ� ...
	Sleep(1000);   //1�� ������
	system("cls"); //�ܼ�ȭ�� �����
	cout << "\n*****�ιٵ� �Է�*****" << endl;
}

void runDietService() {
	Sleep(1000);   //1�� ������
	system("cls"); //�ܼ�ȭ�� �����
	cout << "*****���� ������ �ȵƽ��ϴ�*****" << endl;
}

void runRecordService() {
	Sleep(1000);   //1�� ������
	system("cls"); //�ܼ�ȭ�� �����
	cout << "*****���� ������ �ȵƽ��ϴ�*****" << endl;
}

int main() {
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	Sleep(1000);   //1�� ������
	system("cls"); //�ܼ�ȭ�� �����
	string command;
	while (1) {
		cout << "command: \"inbody\", \"diet\", \"record\", \"exit\"" << endl;
		cout << "$ ";
		cin >> command;
		if (command.compare("inbody") == 0)
			runInbodyService();
		else if (command.compare("diet") == 0)
			runDietService();
		else if (command.compare("record") == 0)
			runRecordService();
		else if (command.compare("exit") == 0) {
			cout << "���α׷��� ����Ǿ����ϴ�.\n********************Health care program********************\n\n";
			exit(1);
		}
		else {
			cout << "�Ʒ��� ��ɾ� �߿��� �Է����ּž� �մϴ�." << endl;
		}
	}
	return 1;
}