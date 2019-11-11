#include "Inbody.h"

class UserInbody : public Inbody {
public:
	void getInbodyFromUser();
	void showUserInbody(std::vector<Inbody> userInbody);
	void showInbodyDiff(Inbody stdInbody);
	void writeInbodyToFile(); // 파일에 유저 인바디 데이터 입력. 구현해야 합니다.
};