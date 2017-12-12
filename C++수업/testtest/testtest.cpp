#include <stdio.h>

struct money{
	int food;
	int stay;
};

struct country{ 
	int air;
	money b;
};

void main(){
	struct country japan={10,{20,30}};

	printf("비행기%d 음식%d 숙박료%d",japan.air,japan.b.food,japan.b.stay);


}