#include "inbody.h"

int Inbody::getWeight() { return _weight; }
int Inbody::getHeight() { return _height; }
int Inbody::getArms() { return _arms; }
int Inbody::getLegs() { return _legs; }
int Inbody::getBfm() { return _bfm; }
int Inbody::getSsm() { return _ssm; }
int Inbody::getBody() { return _body; }
void Inbody::setWeight(int weight) { this->_weight = weight; }
void Inbody::setHeight(int height) { this->_height = height; }
void Inbody::setArms(int arms) { this->_arms = arms; }
void Inbody::setLegs(int legs) { this->_legs = legs; }
void Inbody::setSsm(int ssm) { this->_ssm = ssm; }
void Inbody::setBody(int body) { this->_body = body; }
void Inbody::setBfm(int bfm) { this->_bfm = bfm; }

Inbody::Inbody() {
	this->setHeight(0);
	this->setWeight(0);
	this->setArms(0);
	this->setBfm(0);
	this->setBody(0);
	this->setLegs(0);
	this->setSsm(0);
}

