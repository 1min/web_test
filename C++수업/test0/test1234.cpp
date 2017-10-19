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
	printf("2진수로변환할 십진수입력");
	scanf("%d",&a);
bianry(a);
}