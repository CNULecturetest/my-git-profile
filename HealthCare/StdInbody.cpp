// 강동훈

#define _CRT_SECURE_NO_WARNINGS
#include "StdInbody.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

using namespace std;

// 이제보니 C 코드 같은데 괜찮을까요?
int StdInbody::getInbodyFromFile(int height) {
	int stdInbody[7];
	//stdInbody[0]:height
	//stdInbody[1]:weight
	//stdInbody[2]:ssm
	//stdInbody[3]:arms
	//stdInbody[4]:legs
	//stdInbody[5]:body
	//stdInbody[6]:bfm
	FILE* f = fopen("ManInbody.txt", "r");
	char line[256];

	if (f == NULL) {
		cout<<"파일이 열리지 않습니다."<<endl;
		exit(1);
	}
	
	char delimit[] = "\t \n-";
	char* token = NULL;
	int i=0;
	int FLAG = 0;
	while (!feof(f)) {
		i = 0;
		fgets(line, sizeof(line), f);
		token = strtok(line, delimit);//공백까지 끊어서 읽기
		int fileheight = atoi(token);
		if (fileheight == height) {
			FLAG = 1;
			//token = strtok(NULL, delimit);//다음 단어
			while (token != NULL) {//현재라인의 모든 단어 읽기
				int inbody = atoi(token);
				stdInbody[i] = inbody;
				token = strtok(NULL, delimit);//다음 단어
				i++;
			}
		}
	}
	if (FLAG == 0) {
		cout << "\n죄송합니다. 해당하는 키의 표준 inbody 정보가 없습니다. " << endl;
		Sleep(2000);
		fclose(f);
		return -1;
	}
	fclose(f);//파일 닫기

	// 파일에서 사용자의 키를 찾아서 그 행의 데이터를 가져와야합니다.

	setInbody(stdInbody[0], stdInbody[1], stdInbody[2], stdInbody[3], stdInbody[4], stdInbody[5], stdInbody[6]);
	return 1;
}

void StdInbody::showStdInbody() {
	Sleep(1000);
	system("cls");
	std::cout << "********************표준 인바디 정보********************" << std::endl;
	std::cout << "다음은 사용자의 키에 맞는 표준 인바디 데이터입니다." << std::endl;
	std::cout << "키: " << getHeight() << std::endl;
	std::cout << "몸무게: " << getWeight() << std::endl;
	std::cout << "골격근량: " << getSsm() << std::endl;
	std::cout << "팔근육량: " << getArms() << std::endl;
	std::cout << "다리근육량: " << getLegs() << std::endl;
	std::cout << "복부근육량: " << getBody() << std::endl;
	std::cout << "체지방량: " << getBfm() << std::endl;
}