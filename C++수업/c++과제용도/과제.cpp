#include <stdio.h>

void main(){
		int n;
	printf("�Ųٷ������ n�Է�");
	scanf("%d",&n);
for(n;n>=10;n/=10){
	printf("%d",n%10);
}
printf("%d",n);
}