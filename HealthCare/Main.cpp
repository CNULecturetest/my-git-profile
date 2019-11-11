#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Inbody.h"
#include "InbodyController.h"

using namespace std;
InbodyController _inbodyController;

void runInbodyService() { // �ιٵ� �⺻ ���񽺷� �Է��� �޾Ƽ� ǥ�� �ιٵ���� ���̸� ����մϴ�
	vector<Inbody> userInbody;
	Inbody stdInbody;
	cout << "*****�ιٵ� �Է�*****" << endl;
	_inbodyController.getInbodyFromUser(userInbody);
	_inbodyController.getInbodyFromFile(stdInbody, userInbody[0].getHeight());
	_inbodyController.showStdInbody(stdInbody);
}

void specialInbodyService() { // �ιٵ� Ư�� ���񽺷� n���� �ιٵ� �ݺ��ؼ� ���� ���� �׷����� ����ϰ� ...

}

void runDietService() {

}

void runRecordService() {

}

int main() {
	cout << "********************Health care program********************" << endl;
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
	}
	return 1;
}