#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Inbody.h"
#include "InbodyController.h"

using namespace std;
InbodyController _inbodyController;

void runInbodyService() { // 인바디 기본 서비스로 입력을 받아서 표준 인바디와의 차이만 출력합니다
	vector<Inbody> userInbody;
	Inbody stdInbody;
	cout << "*****인바디 입력*****" << endl;
	_inbodyController.getInbodyFromUser(userInbody);
	_inbodyController.getInbodyFromFile(stdInbody, userInbody[0].getHeight());
	_inbodyController.showStdInbody(stdInbody);
}

void specialInbodyService() { // 인바디 특별 서비스로 n주차 인바디를 반복해서 받은 다음 그래프로 출력하고 ...

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
			cout << "프로그램이 종료되었습니다.\n********************Health care program********************\n\n";
			exit(1);
		}
	}
	return 1;
}