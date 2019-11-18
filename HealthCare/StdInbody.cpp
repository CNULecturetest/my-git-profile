// ������

#define _CRT_SECURE_NO_WARNINGS
#include "StdInbody.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

using namespace std;

// �������� C �ڵ� ������ ���������?
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
		cout<<"������ ������ �ʽ��ϴ�."<<endl;
		exit(1);
	}
	
	char delimit[] = "\t \n-";
	char* token = NULL;
	int i=0;
	int FLAG = 0;
	while (!feof(f)) {
		i = 0;
		fgets(line, sizeof(line), f);
		token = strtok(line, delimit);//������� ��� �б�
		int fileheight = atoi(token);
		if (fileheight == height) {
			FLAG = 1;
			//token = strtok(NULL, delimit);//���� �ܾ�
			while (token != NULL) {//��������� ��� �ܾ� �б�
				int inbody = atoi(token);
				stdInbody[i] = inbody;
				token = strtok(NULL, delimit);//���� �ܾ�
				i++;
			}
		}
	}
	if (FLAG == 0) {
		cout << "\n�˼��մϴ�. �ش��ϴ� Ű�� ǥ�� inbody ������ �����ϴ�. " << endl;
		Sleep(2000);
		fclose(f);
		return -1;
	}
	fclose(f);//���� �ݱ�

	// ���Ͽ��� ������� Ű�� ã�Ƽ� �� ���� �����͸� �����;��մϴ�.

	setInbody(stdInbody[0], stdInbody[1], stdInbody[2], stdInbody[3], stdInbody[4], stdInbody[5], stdInbody[6]);
	return 1;
}

void StdInbody::showStdInbody() {
	Sleep(1000);
	system("cls");
	std::cout << "********************ǥ�� �ιٵ� ����********************" << std::endl;
	std::cout << "������ ������� Ű�� �´� ǥ�� �ιٵ� �������Դϴ�." << std::endl;
	std::cout << "Ű: " << getHeight() << std::endl;
	std::cout << "������: " << getWeight() << std::endl;
	std::cout << "��ݱٷ�: " << getSsm() << std::endl;
	std::cout << "�ȱ�����: " << getArms() << std::endl;
	std::cout << "�ٸ�������: " << getLegs() << std::endl;
	std::cout << "���α�����: " << getBody() << std::endl;
	std::cout << "ü���淮: " << getBfm() << std::endl;
}