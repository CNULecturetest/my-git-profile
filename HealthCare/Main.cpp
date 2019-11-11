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

void getInbodyHandler(int week) {
	Sleep(1000);   //1�� ������
	system("cls"); //�ܼ�ȭ�� �����
	if (week == 0)
		cout << "********************�ιٵ� �Է�********************" << endl;
	else
		cout << "********************" << week << "���� �ιٵ� �Է�********************" << endl;
	UserInbody newUserInbody;
	userInbody.push_back(newUserInbody);
	userInbody[week].getInbodyFromUser();
}

void runInbodyService() { // �ιٵ� �⺻ ���񽺷� �Է��� �޾Ƽ� ǥ�� �ιٵ���� ���̸� ����մϴ�
	getInbodyHandler(0);
	stdInbody.getInbodyFromFile(userInbody[0].getHeight());
	stdInbody.showStdInbody();
	userInbody[0].showInbodyDiff(stdInbody); // ���� ������ �ʿ䰡 ������ InbodyDiff �ϳ� ������ �� �� ���ƿ�
}

void runInbodyDiffService() {
	Sleep(1000);
	system("cls");
	int numberOfWeeks = 0;
	cout << "�� ������ ������ ������ ��Ű���?\n" << endl;
	cout << "$ ";
	cin >> numberOfWeeks;
	Sleep(1000);
	system("cls");
	cout << "********************" << numberOfWeeks << "���� �ιٵ� ������ �Է��ϰڽ��ϴ�.********************" << endl;
	for(int i=1; i<=numberOfWeeks; i++) {
		getInbodyHandler(i);
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