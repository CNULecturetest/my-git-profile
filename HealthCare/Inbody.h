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
	//getter setter를 만들어야 합니다
	int getWeight();
	int getHeight();
	int getArms();
	int getBody();
	int getLegs();
	int getSsm();
	int getBfm();
	void setWeight(int weight);
	void setHeight(int height);
	void setArms(int arms);
	void setBody(int body);
	void setLegs(int legs);
	void setSsm(int ssm);
	void setBfm(int bfm);
};