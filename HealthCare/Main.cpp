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
vector<Inbody> variationOfUserInbody; // how
int numberOfUserInbodyData = 0;
StdInbody stdInbody;

void inputInbody() {
	int temp = 0;
	do {
		Sleep(1000);   //1초 딜레이
		system("cls"); //콘솔화면 지우기
		cout << "********************인바디 입력********************" << endl;
		UserInbody newUserInbody;
		userInbody.push_back(newUserInbody);
		userInbody[numberOfUserInbodyData].getInbodyFromUser();
		userInbody[numberOfUserInbodyData].writeInbodyToFile();
		numberOfUserInbodyData++;
		cout << "\n더 입력하시겠습니까? yes(1) no(0)" << endl;
		cin >> temp;
	} while (temp);
}

void showVariation() {

}

//void runInbodyService() { // 인바디 기본 서비스
//	if (numberOfUserInbodyData > 0) { // 사용자가 이미 인바디를 입력했으면 또 입력할 필요 없이 출력만합니다.
//		stdInbody.showStdInbody();
//		userInbody[0].showInbodyDiff(stdInbody);
//	}
//	else {
//		getInbodyHandler(0); // 인바디 입력받기
//		stdInbody.getInbodyFromFile(userInbody[0].getHeight()); // 사용자 키에 맞는 표준 인바디 가져오기
//		stdInbody.showStdInbody(); // 표준 인바디 출력하기
//		userInbody[0].showInbodyDiff(stdInbody); // 사용자 인바디와 표준 인바디 차이 출력하기
//		// 만약 저장할 필요가 있으면 InbodyDiff 하나 만들어야 될 거 같아요
//	}
//}

void showDiff() {
	if (numberOfUserInbodyData <= 0) // 인바디 데이터가 입력되지 않았으면
		cout << "inbody 데이터가 없습니다.\n" << endl;
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
		Sleep(800);   //1초 딜레이
		system("cls"); //콘솔화면 지우기
		cout << "********************Health care program********************\n" << endl;
		cout << "\"input_inbody\": 사용자의 inbody 정보를 입력받습니다.\n" << endl;
		cout << "\"show_diff\": 사용자의 inbody와 표준 inbody를 비교합니다.\n" << endl;
		cout << "\"variation\": 사용자의 inbody 정보의 변화를 분석합니다.\n" << endl;
		cout << "\"diet\": 사용자의 균형잡힌 식단관리를 돕습니다.\n" << endl;
		cout << "\"record\": 사용자가 체계적으로 운동할 수 있도록 운동 기록을 관리합니다.\n" << endl;
		cout << "\"exit\": 프로그램을 종료합니다.\n" << endl;
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
			cout << "\n프로그램이 종료되었습니다.";
			exit(1);
		}
		else {
			cout << "유효한 명령어가 아닙니다.\n" << endl;
		}
	}
	return 1;
}