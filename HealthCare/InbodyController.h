#pragma once
#include "Inbody.h"
#include <string>
#include <fstream>

class InbodyController {

public:

	std::vector<Inbody> getInbodyFromUser(std::vector<Inbody>& userInbody);
	Inbody getInbodyFromFile(Inbody& stdInbody, int height);
	void showStdInbody(Inbody& stdInbody);
	void showUserInbody(std::vector<Inbody> userInbody);

};