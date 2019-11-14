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
vector<Inbody> variationOfUserInbody; // inbody ��ȭ���� ���� ����, showResult�� ���� ����
int numberOfUserInbodyData = 0; // user inbody data�� ��
StdInbody stdInbody;

void inputInbody() {
	int temp = 0;
	do {
		Sleep(1000);   //1�� ������
		system("cls"); //�ܼ�ȭ�� �����
		cout << "********************�ιٵ� �Է�********************" << endl;
		UserInbody newUserInbody;
		userInbody.push_back(newUserInbody);
		userInbody[numberOfUserInbodyData].getInbodyFromUser();
		userInbody[numberOfUserInbodyData].writeInbodyToFile();
		numberOfUserInbodyData++;
		cout << "\n�� �Է��Ͻðڽ��ϱ�? yes(1) no(0)" << endl;
		cin >> temp;
	} while (temp);
}

void showDiff() {
	int temp = 0;
	if (numberOfUserInbodyData <= 0) // �ιٵ� �����Ͱ� �Էµ��� �ʾ�����
		cout << "inbody �����Ͱ� �����ϴ�.\n" << endl;
	else {
		temp = stdInbody.getInbodyFromFile(userInbody[numberOfUserInbodyData-1].getHeight());
		if (temp == -1)
			return;
		else {
			stdInbody.showStdInbody();
			userInbody[numberOfUserInbodyData - 1].showInbodyDiff(stdInbody);
		}
	}
}

void showInbodyHandler() {
	int targetWeek;
	if (numberOfUserInbodyData <= 0) // �ιٵ� �����Ͱ� �Էµ��� �ʾ�����
		cout << "inbody �����Ͱ� �����ϴ�.\n" << endl;
	else {
		while(1){
			Sleep(1000);
			system("cls");
			cout << numberOfUserInbodyData << "���� inbody ������ �ֽ��ϴ�. �� ������ ������ ���Ͻó���? (-1 �Է½� ����)\n" << endl;
			cout << "$ ";
			cin >> targetWeek;
			if (targetWeek >= 1 && targetWeek <= numberOfUserInbodyData) {
				userInbody[targetWeek - 1].showUserInbody(targetWeek); // index�� �� ���� -1
				std::cout << "\n�� �������� �ƹ�Ű�� �Է����ּ���.\n" << std::endl;
				getchar();
				getchar();
			}
			else if (targetWeek == -1)
				break;
			else
				cout << "��ȿ�� �Է��� �ƴմϴ�." << endl;
		}
	}
}

void variationHandler() {}

void showResultHandler() {}

int main() {
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	string command;
	while (1) {
		Sleep(800);   //1�� ������
		system("cls"); //�ܼ�ȭ�� �����
		cout << "********************Health care program********************\n" << endl;
		cout << "\"input_inbody\": ������� inbody ������ �Է¹޽��ϴ�.\n" << endl;
		cout << "\"show_diff\": ������� �ֽ� inbody�� ǥ�� inbody�� ���մϴ�.\n" << endl;
		cout << "\"show_inbody\": ����ڰ� ���ϴ� ������ inbody ������ ����մϴ�.\n" << endl;
		cout << "\"variation\": ������� inbody ��ȭ�� ����մϴ�.\n" << endl;
		cout << "\"show_result\": ������� inbody ��ȭ���� �������� �ǹ� �ִ� ����� ����մϴ�.\n" << endl;
		cout << "\"exit\": ���α׷��� �����մϴ�.\n" << endl;
		cout << "********************Health care program********************\n" << endl;
		cout << "$ ";
		cin >> command;
		if (command.compare("input_inbody") == 0)
			inputInbody();
		else if (command.compare("show_diff") == 0)
			showDiff();
		else if (command.compare("show_inbody") == 0)
			showInbodyHandler();
		else if (command.compare("variation") == 0)
			variationHandler();
		else if (command.compare("show_Result") == 0)
			showResultHandler();
		else if (command.compare("exit") == 0) {
			cout << "\n���α׷��� ����Ǿ����ϴ�.";
			exit(1);
		}
		else {
			cout << "��ȿ�� ��ɾ �ƴմϴ�.\n" << endl;
		}
	}
	return 1;
}