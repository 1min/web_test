#include  <stdio.h>
void TUM(int num);
char TUM2(int num2);


void main (){
	int absent;
	printf("�Ἦ�ð��� �Է��Ͻÿ�.");
	scanf("%d",&absent);
	printf("�Ἦ�ð��� %d�ð��̹Ƿ�", absent);
	TUM(absent);
	printf("�Դϴ�");

	printf("�Ἦ�ð��� %d�ð��̹Ƿ� %c �Դϴ�",absent,TUM2(absent));

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
		return 'f';//char�� �ѱ��ڸ� string�� �迭�̶� �����ͻ���ؾ���
}