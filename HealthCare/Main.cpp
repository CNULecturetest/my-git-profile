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
vector<Inbody> variationOfUserInbody; // inbody 변화량을 담을 변수, showResult에 쓰일 예정
int numberOfUserInbodyData = 0; // user inbody data의 수
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

void showDiff() {
	int temp = 0;
	if (numberOfUserInbodyData <= 0) // 인바디 데이터가 입력되지 않았으면
		cout << "inbody 데이터가 없습니다.\n" << endl;
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
	if (numberOfUserInbodyData <= 0) // 인바디 데이터가 입력되지 않았으면
		cout << "inbody 데이터가 없습니다.\n" << endl;
	else {
		while(1){
			Sleep(1000);
			system("cls");
			cout << numberOfUserInbodyData << "개의 inbody 정보가 있습니다. 몇 주차의 정보를 원하시나요? (-1 입력시 종료)\n" << endl;
			cout << "$ ";
			cin >> targetWeek;
			if (targetWeek >= 1 && targetWeek <= numberOfUserInbodyData) {
				userInbody[targetWeek - 1].showUserInbody(targetWeek); // index로 들어갈 때는 -1
				std::cout << "\n다 보셨으면 아무키나 입력해주세요.\n" << std::endl;
				getchar();
				getchar();
			}
			else if (targetWeek == -1)
				break;
			else
				cout << "유효한 입력이 아닙니다." << endl;
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
		Sleep(800);   //1초 딜레이
		system("cls"); //콘솔화면 지우기
		cout << "********************Health care program********************\n" << endl;
		cout << "\"input_inbody\": 사용자의 inbody 정보를 입력받습니다.\n" << endl;
		cout << "\"show_diff\": 사용자의 최신 inbody와 표준 inbody를 비교합니다.\n" << endl;
		cout << "\"show_inbody\": 사용자가 원하는 주차의 inbody 정보를 출력합니다.\n" << endl;
		cout << "\"variation\": 사용자의 inbody 변화를 출력합니다.\n" << endl;
		cout << "\"show_result\": 사용자의 inbody 변화량을 바탕으로 의미 있는 결과를 출력합니다.\n" << endl;
		cout << "\"exit\": 프로그램을 종료합니다.\n" << endl;
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
			cout << "\n프로그램이 종료되었습니다.";
			exit(1);
		}
		else {
			cout << "유효한 명령어가 아닙니다.\n" << endl;
		}
	}
	return 1;
}