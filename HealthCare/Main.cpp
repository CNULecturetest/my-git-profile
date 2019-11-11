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
	Sleep(1000);   //1초 딜레이
	system("cls"); //콘솔화면 지우기
	if (week == 0)
		cout << "********************인바디 입력********************" << endl;
	else
		cout << "********************" << week << "주차 인바디 입력********************" << endl;
	UserInbody newUserInbody;
	userInbody.push_back(newUserInbody);
	userInbody[week].getInbodyFromUser();
}

void runInbodyService() { // 인바디 기본 서비스로 입력을 받아서 표준 인바디와의 차이만 출력합니다
	getInbodyHandler(0);
	stdInbody.getInbodyFromFile(userInbody[0].getHeight());
	stdInbody.showStdInbody();
	userInbody[0].showInbodyDiff(stdInbody); // 만약 저장할 필요가 있으면 InbodyDiff 하나 만들어야 될 거 같아요
}

void runInbodyDiffService() {
	Sleep(1000);
	system("cls");
	int numberOfWeeks = 0;
	cout << "몇 주차의 정보를 가지고 계신가요?\n" << endl;
	cout << "$ ";
	cin >> numberOfWeeks;
	Sleep(1000);
	system("cls");
	cout << "********************" << numberOfWeeks << "주의 인바디 정보를 입력하겠습니다.********************" << endl;
	for(int i=1; i<=numberOfWeeks; i++) {
		getInbodyHandler(i);
	}
}

void specialInbodyService() { // 인바디 특별 서비스로 n주차 인바디를 반복해서 받은 다음 그래프로 출력하고 ...
	Sleep(1000);   //1초 딜레이
	system("cls"); //콘솔화면 지우기
	cout << "\n*****인바디 입력*****" << endl;
}

void runDietService() {
	Sleep(1000);   //1초 딜레이
	system("cls"); //콘솔화면 지우기
	cout << "*****아직 구현이 안됐습니다*****" << endl;
}

void runRecordService() {
	Sleep(1000);   //1초 딜레이
	system("cls"); //콘솔화면 지우기
	cout << "*****아직 구현이 안됐습니다*****" << endl;
}

int main() {
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	cout << "********************Health care program********************" << endl;
	Sleep(800);   //1초 딜레이
	system("cls"); //콘솔화면 지우기
	string command;
	while (1) {
		cout << "********************Health care program********************\n" << endl;
		cout << "\"inbody\": 사용자의 inbody와 표준 인바디를 비교합니다.\n" << endl;
		cout << "\"diff\": 사용자의 반복된 inbody를 입력받아 변화량을 분석합니다.\n" << endl;
		cout << "\"diet\": 사용자의 균형잡힌 식단관리를 돕습니다.\n" << endl;
		cout << "\"record\": 사용자가 체계적으로 운동할 수 있도록 운동 기록을 관리합니다.\n" << endl;
		cout << "\"exit\": 프로그램을 종료합니다.\n" << endl;
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
			cout << "\n프로그램이 종료되었습니다.";
			exit(1);
		}
		else {
			system("cls");
			cout << "아래의 명령어 중에서 입력해주셔야 합니다.\n" << endl;
		}
	}
	return 1;
}