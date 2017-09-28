#include <stdio.h>

double V (int r){
double pi=3.141592;

		return (r*r);
}
double V2 (int r){
double pi=3.141592;

		return (4*pi*(r*r*r));
}double V3 (int r){
double pi=3.141592;

		return (4*pi*(r*r*r)/3);
}
void main(){
	int r1;
	int work;
	printf("반지름을 입력하시오.(정수):");
	scanf("%d",&r1);
	printf("=============메뉴==========\n");
	printf("1. 원의넓이\n");
		printf("2. 원의 겉넓이 \n");
		printf("3. 원의 부피 \n");
		printf("=========================");
		scanf("%d",&work);
		switch(work){
		case 1: printf("\n\n 반지름이 %d인 구의 넓이는 %.3lf 입니다 \n",r1,V(r1));
			break;
		case 2: printf("\n\n 반지름이 %d인 구의 겉넓이는 %.3lf 입니다 \n",r1,V2(r1));
			break;
		case 3: printf("\n\n 반지름이 %d인 구의 부피는 %.3lf 입니다 \n",r1,V3(r1));
			break;
		default : printf("잘못입력함\n");
			break;
		}
}