#include <stdio.h>
int max(int a,int b, int c);//�Լ�����(�Լ�����) a,b,c �������� �Ű������� ���� ��������
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
		return (n*rfunc(n-1));//10!���ϱ�
	//return (n+rfunc(n-1));//10���� 1���� �ձ��ϱ�
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
	printf("2�����κ�ȯ�� �������Է�");
	scanf("%d",&a);
two(a);
}