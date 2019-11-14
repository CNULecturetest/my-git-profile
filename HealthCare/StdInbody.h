#include "Inbody.h"

class StdInbody: public Inbody {
public:
	int getInbodyFromFile(int height); // 사용자의 키에 맞는 표준 inbody를 찾지 못하면 -1을 리턴
	void showStdInbody();
};