#pragma once
#include <vector>
#include <iostream>

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