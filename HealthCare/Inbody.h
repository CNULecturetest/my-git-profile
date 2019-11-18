#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

class Inbody {
private:
	int _weight;
	int _height;
	int _arms;
	int _body;
	int _legs;
	int _ssm; // ��ݱٷ�
	int _bfm; // ü���淮
public:
	Inbody();
	//getters
	int getWeight();
	int getHeight();
	int getArms();
	int getBody();
	int getLegs();
	int getSsm();
	int getBfm();
	//setters
	//void setWeight(int weight);
	//void setHeight(int height);
	//void setArms(int arms);
	//void setBody(int body);
	//void setLegs(int legs);
	//void setSsm(int ssm);
	//void setBfm(int bfm);
	//������ ���� ������ ���� ����, �ʹ� ���Ƽ� �ϳ��� ����ý��ϴ�
	void setInbody(int weight, int height, int arms, int body, int legs, int ssm, int bfm);
};