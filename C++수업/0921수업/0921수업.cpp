#include<stdio.h>
#include <math.h>

float circle(int);//�Լ��� ����
void circum(int);
float volume(int, int);
float test(int,int);

void main1(){
	int r,h; //r�� ���� ������ h�� ���ǳ���
	printf("���� �������� ���� ���� �Է����ּ���..");
	scanf("%d %d",&r,&h);
	printf("%d %d",r,h);
	printf("�������� %d�ο��� ������%.2f\n",r,circle(r));
	circum(r);
	printf("�������� %d�̰� ���̰� %d�� ���� ������%f\n",r,h,volume(r,h));
	test(r,h);
}

float circle(int a){
	return a*a*3.14;
	
}
void circum(int a){
	printf("�������� %d�� ���� �ѷ��� %f\n",a,3.14*2*a);
}

float volume(int a, int b){
	return a*a*3.14*b;

}
float test(int a,int b){
	return printf("�׽�Ʈ ���� %f %f %f",a*a*3.14,2*a*3.14,a*a*3.14*b);
}
int deter(int a, int b, int c){
return b*b - 4*a*c;
}

float r1(int a, int b){
return -b/(2*a);
}

void r2(int a,int b, int c){
	
printf("���� 2���̰� �ϳ���%f ���ϳ���%f \n",(-b+sqrt((float)c))/(2*a),(-b-sqrt((float)c))/(2*a));
}
void main(){
	int a,b,c,D;
	printf("���׽� a b c�Է�");
	scanf("%d%d%d",&a,&b,&c);
	D=deter(a,b,c);
	if(D<0)
		printf("���� ����\n");
	else if (D==0)
		printf("�����ϳ��� %f",r1(a,b));
	else
		r2(a,b,D);
}