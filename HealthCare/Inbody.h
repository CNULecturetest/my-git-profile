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
	int arms;
	int body;
	int regs;
	int _ssm; // 골격근량
	int _bfm; // 체지방량
public:
	Inbody();
	//getter setter를 만들어야 합니다
	int getWeight();
	int getHeight();
	void setWeight(int weight);
	void setHeight(int height);
};