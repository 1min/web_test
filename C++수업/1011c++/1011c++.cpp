#include  <stdio.h>
void TUM(int num);
char TUM2(int num2);


void main (){
	int absent;
	printf("결석시간을 입력하시오.");
	scanf("%d",&absent);
	printf("결석시간이 %d시간이므로", absent);
	TUM(absent);
	printf("입니다");

	printf("결석시간이 %d시간이므로 %c 입니다",absent,TUM2(absent));

}

void TUM(int num2){
	int cnt=4;
	if(num2<cnt)
		printf("pass");
	else
		printf("fail");
}

char TUM2(int num){
	int cnt=4;
	
	if(num<cnt)
		return 'p';
	else
		return 'f';//char은 한글자만 string은 배열이라 포인터사용해야함
}