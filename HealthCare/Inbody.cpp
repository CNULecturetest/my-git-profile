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

Inbody::Inbody() : _height(0), _weight(0), _arms(0),
				   _body(0), _legs(0), _ssm(0), _bfm(0) {}

