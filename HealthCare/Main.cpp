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
vector<Inbody> variationOfUserInbody; // how
int numberOfUserInbodyData = 0;
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

void showVariation() {

}

//void runInbodyService() { // �ιٵ� �⺻ ����
//	if (numberOfUserInbodyData > 0) { // ����ڰ� �̹� �ιٵ� �Է������� �� �Է��� �ʿ� ���� ��¸��մϴ�.
//		stdInbody.showStdInbody();
//		userInbody[0].showInbodyDiff(stdInbody);
//	}
//	else {
//		getInbodyHandler(0); // �ιٵ� �Է¹ޱ�
//		stdInbody.getInbodyFromFile(userInbody[0].getHeight()); // ����� Ű�� �´� ǥ�� �ιٵ� ��������
//		stdInbody.showStdInbody(); // ǥ�� �ιٵ� ����ϱ�
//		userInbody[0].showInbodyDiff(stdInbody); // ����� �ιٵ�� ǥ�� �ιٵ� ���� ����ϱ�
//		// ���� ������ �ʿ䰡 ������ InbodyDiff �ϳ� ������ �� �� ���ƿ�
//	}
//}

void showDiff() {
	if (numberOfUserInbodyData <= 0) // �ιٵ� �����Ͱ� �Էµ��� �ʾ�����
		cout << "inbody �����Ͱ� �����ϴ�.\n" << endl;
	else {
		stdInbody.getInbodyFromFile(userInbody[numberOfUserInbodyData-1].getHeight());
		stdInbody.showStdInbody();
		userInbody[numberOfUserInbodyData-1].showInbodyDiff(stdInbody);
	}
}

void runInbodyDiffService() {}

void runDietService() {}

void runRecordService() {}

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
		cout << "\"show_diff\": ������� inbody�� ǥ�� inbody�� ���մϴ�.\n" << endl;
		cout << "\"variation\": ������� inbody ������ ��ȭ�� �м��մϴ�.\n" << endl;
		cout << "\"diet\": ������� �������� �Ĵܰ����� �����ϴ�.\n" << endl;
		cout << "\"record\": ����ڰ� ü�������� ��� �� �ֵ��� � ����� �����մϴ�.\n" << endl;
		cout << "\"exit\": ���α׷��� �����մϴ�.\n" << endl;
		cout << "********************Health care program********************\n" << endl;
		cout << "$ ";
		cin >> command;
		if (command.compare("input_inbody") == 0)
			inputInbody();
		else if (command.compare("show_diff") == 0)
			showDiff();
		else if (command.compare("variation") == 0)
			showVariation();
		else if (command.compare("diet") == 0)
			runDietService();
		else if (command.compare("record") == 0)
			runRecordService();
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