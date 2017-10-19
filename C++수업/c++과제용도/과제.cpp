#include <stdio.h>

void main(){
		int n;
	printf("거꾸로출력할 n입력");
	scanf("%d",&n);
for(n;n>=10;n/=10){
	printf("%d",n%10);
}
printf("%d",n);
}