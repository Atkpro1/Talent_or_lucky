#ifndef MRAND_DEF
	#define MRAND_DEF
	#define MRAND_MIN 1
	#define MRAND_MAX 100
	#define MRAND_SIZE 100
	#define MRAND_MID 50
 
	#include <cstdlib>
	#include <ctime>

	#define MRAND_TIM 12

	void MRAND_init(unsigned int seed= time(NULL) ){
		srand(seed);
	}

	int MRAND_NOR(){
		int tmp= MRAND_TIM ;
		for(int i=0;i< MRAND_TIM ;i++){
			tmp+=rand()% MRAND_MAX ;
		}
		return ( tmp/ MRAND_TIM );
	}

	int MRAND_BIT(){
		return rand()&1;
	}
#endif
