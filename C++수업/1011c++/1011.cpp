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
	printf("�Ἦ�ð��� �Է��Ͻÿ�.");
	scanf("%d",&absent);
	printf("�Ἦ�ð��� %d�ð��̹Ƿ�", absent);
	TUM(absent);
	printf("�Դϴ�");

}