#ifndef PEOPLE_DEF
#define PEOPLE_DEF
#include "rand.h"
class People{
	public:
		int ablity=0;
		People(int ability);
		People();
		int test_score(int round);
		int score=0;
};

People::People(int ablity){
	this->ablity=ablity;
}
People::People(){
	this->ablity=0;
}
int People::test_score(int round){
	this->score=0;
	for(int i=0;i<round;i++){
		if(MRAND_BIT()){
			this->score+=this->ablity;//incress score
		}else{
			this->score>>=1;//bitwise move for speed
		}
	}
	return this->score;
}
#endif
