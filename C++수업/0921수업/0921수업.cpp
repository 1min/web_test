#include<stdio.h>
#include <math.h>

float circle(int);//함수의 선언
void circum(int);
float volume(int, int);
float test(int,int);

void main1(){
	int r,h; //r는 원의 반지름 h는 원의높이
	printf("원의 반지름과 원의 높이 입력해주세요..");
	scanf("%d %d",&r,&h);
	printf("%d %d",r,h);
	printf("반지름이 %d인원의 면적은%.2f\n",r,circle(r));
	circum(r);
	printf("반지름이 %d이고 높이가 %d인 원의 부피은%f\n",r,h,volume(r,h));
	test(r,h);
}

float circle(int a){
	return a*a*3.14;
	
}
void circum(int a){
	printf("반지름이 %d인 원의 둘레는 %f\n",a,3.14*2*a);
}

float volume(int a, int b){
	return a*a*3.14*b;

}
float test(int a,int b){
	return printf("테스트 통합 %f %f %f",a*a*3.14,2*a*3.14,a*a*3.14*b);
}
int deter(int a, int b, int c){
return b*b - 4*a*c;
}

float r1(int a, int b){
return -b/(2*a);
}

void r2(int a,int b, int c){
	
printf("근은 2개이고 하나는%f 또하나는%f \n",(-b+sqrt((float)c))/(2*a),(-b-sqrt((float)c))/(2*a));
}
void main(){
	int a,b,c,D;
	printf("다항식 a b c입력");
	scanf("%d%d%d",&a,&b,&c);
	D=deter(a,b,c);
	if(D<0)
		printf("근이 없음\n");
	else if (D==0)
		printf("근이하나고 %f",r1(a,b));
	else
		r2(a,b,D);
}