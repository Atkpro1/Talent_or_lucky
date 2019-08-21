#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include "rand.h"
#include "people.cpp"
using namespace std;

//ofstream ablity("ablity");//I use Linux
//ofstream score ("score ");//I use Linux

People* ps;//Peoples
int pc;//People Count
int round;
int play;

bool cmp_abl(People a,People b){return a.ablity > b.ablity;}
bool cmp_scr(People a,People b){return a.score > b.score;}

int main(){
	MRAND_init();
	cin>>pc>>round>>play;
	ps=new People[pc];

	for(int i=0;i<pc;i++){
		People* tmp;
		tmp = new People(MRAND_NOR());
		ps[i] = *tmp;
		delete tmp;
	}

	for(int i=0;i<pc;i++){
		ps[i].test_score(round);
	}

	partial_sort(ps , ps+play , ps+pc , cmp_abl );
	cout<<"Max Ablity"<<endl;
	for(int i=0;i<play;i++){
		cout<<"Top "	<<i				<<"\t:";
		cout<<"Ablity:"	<<ps[i].ablity	<<"\t ";
		cout<<"Score :"	<<ps[i].score	<<endl ;
	}

	partial_sort(ps , ps+play , ps+pc , cmp_scr );
	cout<<"Max Score"<<endl;
	for(int i=0;i<play;i++){
		cout<<"Top "	<<i				<<"\t:";
		cout<<"Ablity:"	<<ps[i].ablity	<<"\t ";
		cout<<"Score :"	<<ps[i].score	<<endl ;
	}

	return 0;
}
