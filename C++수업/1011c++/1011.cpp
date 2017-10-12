#include  <stdio.h>

void TUM(int num){
	int cnt=4;
	if(num<cnt)
		printf("pass");
	else
		printf("fail");
}

void main (){
	int absent;
	printf("결석시간을 입력하시오.");
	scanf("%d",&absent);
	printf("결석시간이 %d시간이므로", absent);
	TUM(absent);
	printf("입니다");

}