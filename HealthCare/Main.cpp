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
	Sleep(1000);   //1초 딜레이
	system("cls"); //콘솔화면 지우기
	cout << "*****인바디 입력*****" << endl;
	UserInbody newUserInbody;
	userInbody.push_back(newUserInbody);
	userInbody[0].getInbodyFromUser();
}

void runInbodyService() { // 인바디 기본 서비스로 입력을 받아서 표준 인바디와의 차이만 출력합니다
	getInbodyHandler();
	stdInbody.getInbodyFromFile(userInbody[0].getHeight());
	stdInbody.showStdInbody();
	// 메소드시작 UserInbody안에 StdInbody를 받아서 둘의 차이를 출력하는 메소드가 있어야 할 것 같습니다.
	Sleep(1000);   //1초 딜레이
	system("cls"); //콘솔화면 지우기
	cout << "\n*****사용자 인바디와 표준 인바디의 차이 출력*****" << endl;
	cout << "ㅁㅇㄻㄴㅇㄻㄴㄻㄴㅇㄹ" << endl;
	cout << "ㅁㅇㄻㄴㅇㄻㄴㄻㄴㅇㄹ" << endl;
	cout << "ㅁㅇㄻㄴㅇㄻㄴㄻㄴㅇㄹ" << endl;
	cout << "ㅁㅇㄻㄴㅇㄻㄴㄻㄴㅇㄹ" << endl;
	cout << "ㅁㅇㄻㄴㅇㄻㄴㄻㄴㅇㄹ" << endl;
	// 메소드 종료
	cout << "\ninbody 변화를 보고 싶으시면 \"special\", 메뉴로 돌아가시려면 \"home\"을 입력해주세요" << endl;
	string command;
	while (1) {
		cout << "$ ";
		cin >> command;
		if (command.compare("home") == 0) {
			Sleep(1000);   //1초 딜레이
			system("cls"); //콘솔화면 지우기
			break;
		}
		else if (command.compare("special") == 0){
			specialInbodyService();
			Sleep(1000);   //1초 딜레이
			system("cls"); //콘솔화면 지우기
		}
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
	Sleep(1000);   //1초 딜레이
	system("cls"); //콘솔화면 지우기
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
		else {
			cout << "아래의 명령어 중에서 입력해주셔야 합니다." << endl;
		}
	}
	return 1;
}