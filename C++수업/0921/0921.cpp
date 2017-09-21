#include<stdio.h>

void main1(){
	int a;// 200km를 달리는데 소요되는 초
	int h, m, s;
	a=186300/30;
	printf("총초 %d\n",a);
	h=a/3600;
	m=(a-h*3600)/60;
	s=a%60;
	printf("%d시간 %d분 %d초",h,m,s);	
	
      
}

void main2(){
	int a;
	scanf("%d",&a);
	if(a%2==1){
	printf("홀수입니다");}
	else if(a==0)
	{printf("정수0입니다");}	
	else
	{printf("짝수입니다");}
}

void main3(){
	int a=1,b=0,c=0;//b:홀수합. c:짝수합
	for(a;a<=100;a++){
		if(a%2==1)
		b=b+a;
		else
		{c=c+a;}
	}
	printf("반복문종료a는 %d \n홀수합%d \n짝수합%d",a,b,c);
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
	printf("최대값은 %d\n",max(a,b,c));
	printf("최소값은 %d\n",min(a,b,c));
}