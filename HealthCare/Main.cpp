/*
생각해야할 점
inbody 명령어도 치지 않고 diff 명령어를 치면 오류
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
	Sleep(1000);   //1초 딜레이
	system("cls"); //콘솔화면 지우기
	cout << "********************인바디 입력********************" << endl;
	UserInbody newUserInbody;
	userInbody.push_back(newUserInbody);
	numberOfUserInbodyData++;
	userInbody[week].getInbodyFromUser();
	userInbody[week].writeInbodyToFile();
}

void runInbodyService() { // 인바디 기본 서비스
	if (numberOfUserInbodyData > 0) { // 사용자가 이미 인바디를 입력했으면 또 입력할 필요 없이 출력만합니다.
		stdInbody.showStdInbody();
		userInbody[0].showInbodyDiff(stdInbody);
	}
	else {
		getInbodyHandler(0); // 인바디 입력받기
		stdInbody.getInbodyFromFile(userInbody[0].getHeight()); // 사용자 키에 맞는 표준 인바디 가져오기
		stdInbody.showStdInbody(); // 표준 인바디 출력하기
		userInbody[0].showInbodyDiff(stdInbody); // 사용자 인바디와 표준 인바디 차이 출력하기
		// 만약 저장할 필요가 있으면 InbodyDiff 하나 만들어야 될 거 같아요
	}
}

void runInbodyDiffService() {
	int week = 1;
	int temp = 0;
	while (1) {
		getInbodyHandler(week++);
		cout << "\n계속 입력: 1 그만 입력: 2 " << endl;
		cout << "$ ";
		cin >> temp;
		if (temp == 2) {
			system("cls"); //콘솔화면 지우기
			break;
		}
	}
	// 결과를 출력하는 메소드 아직 구현 X
}

void runDietService() {}

void runRecordService() {}

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