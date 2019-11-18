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
	int _ssm; // 골격근량
	int _bfm; // 체지방량
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
	//개별로 값을 변경할 일이 없고, 너무 많아서 하나로 묶어봤습니다
	void setInbody(int weight, int height, int arms, int body, int legs, int ssm, int bfm);
};