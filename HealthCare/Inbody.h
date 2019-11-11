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
public:
	Inbody();
	int getWeight();
	int getHeight();
	void setWeight(int weight);
	void setHeight(int height);
};