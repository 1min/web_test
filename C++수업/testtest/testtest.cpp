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

	printf("�����%d ����%d ���ڷ�%d",japan.air,japan.b.food,japan.b.stay);


}