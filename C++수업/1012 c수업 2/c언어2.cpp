#include <stdio.h>

void main(){
	char c[10];
	int i;
	printf("���ڿ��Է�");
	scanf("%s",c);
	for(i=0;c[i] != '\0';i++){
		if(c[i]<=90)
		printf("%c",c[i]+32);
		
		else
		printf("%c",c[i]-32);
	}
}