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
	int _ssm; // ��ݱٷ�
	int _bfm; // ü���淮
public:
	Inbody();
	//getter setter�� ������ �մϴ�
	int getWeight();
	int getHeight();
	void setWeight(int weight);
	void setHeight(int height);
};