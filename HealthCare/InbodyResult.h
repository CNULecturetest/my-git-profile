#pragma once
#include "Inbody.h"

class InbodyResult {
public:
	virtual void showResult()=0;
	virtual Inbody getData()=0;
};