#include <stdio.h>

void bianry (int a){
	if(a==1)
		printf("%d",1);
	else {
		bianry(a/2);
	printf("%d", a%2);
	}
}


void main(){
		int a;
	printf("2�����κ�ȯ�� �������Է�");
	scanf("%d",&a);
bianry(a);
}