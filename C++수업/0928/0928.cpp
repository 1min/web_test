#include <stdio.h>
int max(int a,int b, int c);//함수선언(함수원형) a,b,c 생략가능 매개변수의 변수 생략가능
int rfunc(int);

int main1(void){
	printf("%d \n", max(9,4,19));
	return 0;
}
int main2 (void){
	int a;
	scanf("%d",&a);
printf("%d! = %d\n",a, rfunc(a));
return 3;

}
int max (int a, int b, int c)
{
	int manx=a;
	int max2=(b>c)?b:c;

	if(a>=max2)
		return a;
	else
		return max2;
}

int rfunc(int n){
	if(n==1)
		return 1;
	else 
		return (n*rfunc(n-1));//10!구하기
	//return (n+rfunc(n-1));//10에서 1까지 합구하기
}

void two (int a){
	if(a==1)
		printf("%d",1);
	else {
		two(a/2);
	printf("%d", a%2);
	}
}
	int main ()
	{
		int a;
	printf("2진수로변환할 십진수입력");
	scanf("%d",&a);
two(a);
}