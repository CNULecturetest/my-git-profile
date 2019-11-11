#include "inbody.h"

int Inbody::getWeight() { return _weight; }
int Inbody::getHeight() { return _height; }
void Inbody::setWeight(int weight) { this->_weight = weight; }
void Inbody::setHeight(int height) { this->_height = height; }

Inbody::Inbody() {
	this->setHeight(0);
	this->setWeight(0);
}

