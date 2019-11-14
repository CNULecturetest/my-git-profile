#include "Inbody.h"

class UserInbody : public Inbody {
public:
	void getInbodyFromUser();
	void showUserInbody(int targetWeek);
	void showInbodyDiff(Inbody stdInbody);
	void writeInbodyToFile();
};