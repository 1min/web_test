#include<stdio.h>

void main1(){
	int a;// 200km�� �޸��µ� �ҿ�Ǵ� ��
	int h, m, s;
	a=186300/30;
	printf("���� %d\n",a);
	h=a/3600;
	m=(a-h*3600)/60;
	s=a%60;
	printf("%d�ð� %d�� %d��",h,m,s);	
	
      
}

void main2(){
	int a;
	scanf("%d",&a);
	if(a%2==1){
	printf("Ȧ���Դϴ�");}
	else if(a==0)
	{printf("����0�Դϴ�");}	
	else
	{printf("¦���Դϴ�");}
}

void main3(){
	int a=1,b=0,c=0;//b:Ȧ����. c:¦����
	for(a;a<=100;a++){
		if(a%2==1)
		b=b+a;
		else
		{c=c+a;}
	}
	printf("�ݺ�������a�� %d \nȦ����%d \n¦����%d",a,b,c);
}

int max(int a,int b,int c){
	if (a>b && a>c)
	 return a;
	if(b>a && b>c)
	return b;
else return c;

}
int min(int a,int b,int c){
	if (a<b && a<c)
	 return a;
	if(b<a && b<c)
	return b;
else return c;
}
void main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("�ִ밪�� %d\n",max(a,b,c));
	printf("�ּҰ��� %d\n",min(a,b,c));
}