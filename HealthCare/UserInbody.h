#include "Inbody.h"

class UserInbody : public Inbody {
public:
	void getInbodyFromUser();
	void showUserInbody(std::vector<Inbody> userInbody);
	void showInbodyDiff(Inbody stdInbody);
	void writeInbodyToFile();
};