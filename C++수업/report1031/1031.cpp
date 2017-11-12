#include <stdio.h>

void main1(){
int var = 100;
int *ptr;
ptr=&var;//var의 주소위치

printf("변수 var값 %d\n",var);
printf("변수 var값(간접참조방식) %d\n",*ptr);
//주소출력
printf("변수 var의 주소 %u(%p)\n",&var,&var);//%u는 (unsign 부호없는 정수) 정수형 양수 %p는 16진수 주소
printf("포인터 변수  ptr에 저장된 주소: %u(%p)\n",ptr,ptr);
printf("포인터 변수 주소: %u(%p)",&ptr,&ptr);
}

void main2(){
	int a=100,b=200,temp;
	int *pt1,*pt2,*pt_temp;
	
	pt1=&a;// a의 주소 저장
	pt2=&b;// b의 주소 저장
	printf("a=%d b=%d\n",a,b);
	printf("*pt1=%d, *pt2=%d \n",*pt1,*pt2);
	printf("a,b의 주소값 &a=%p &b=%p \n",pt1,pt2);
	printf("포인터 변수의 주소값 &pt1=%p, &pt2=%p \n\n",&pt1,&pt2);

	//a,b값 교환
	temp=a; //포인터로 a,b값 바꾸기
	a=b;
	b=temp;
	printf("값교환후 a=%d b=%d\n",a,b);
	//pt1과 pt2가 가리키는 곳에 저장된 값 직접 바꾸기 
	printf("pt1과 pt2가 가리키는 곳에 저장된 값 직접 바꾸기");
	a=100,b=200;
	temp=*pt1;//일반변수는 *포인터
	*pt1=*pt2;
	*pt2=temp;//주소값을 바꾼게 아니라 값만 포인터로 바꿈
	printf("값교환후 a=%d b=%d\n",a,b);
	printf("*pt1=%d, *pt2=%d \n",*pt1,*pt2);
	printf("a,b의 주소값 &a=%p &b=%p \n\n\n",pt1,pt2);
	//printf("포인터 변수의 주소값 &pt1=%p, &pt2=%p \n",&pt1,&pt2);
	//pt1과 pt2에 저장된 주소 바꾸기
	a=100;b=200;
	printf("pt1과 pt2에 저장된 주소 바꾸기");
	pt_temp=pt1;//포인터의 값을 바꿔서 a,b의 연결을 반대로
	pt1=pt2;
	pt2=pt_temp;
	printf("값교환후 a=%d b=%d\n",a,b);
	printf("*pt1=%d, *pt2=%d \n",*pt1,*pt2);
}

void main(){
	int a=100,b=200;
	int *pt1,*pt2;
	char ch='k', *pt3;
	double ff=0.7,*pt4;

	pt3=&ch;
	pt4=&ff;
	pt1=&a;// a의 주소 저장
	pt2=&b;// b의 주소 저장
	printf("*pt1=%d, *pt2=%d *pt3=%c *pt4=%lf \n",*pt1,*pt2,*pt3,*pt4);
	printf("a,b ch ff의 주소값 &a=%u &b=%u ch %u ff %u \n\n\n",pt1,pt2,pt3,pt4);
	(*pt1)++;
	(*pt2)++;
	(*pt3)++;
	(*pt4)++;
	printf("pt1 ++실행결과:%d\n",*pt1); // ++위치주의
	printf("pt2 ++실행결과:%d\n",*pt2);
	printf("pt3 ++실행결과:%c\n\n",*pt3);
	printf("pt4 ++실행결과:%lf\n\n",*pt4);
	
	pt1++;
	pt2++;
	printf("pt1 ++실행결과:%u\n",pt1); // ++위치주의
	printf("pt2 ++실행결과:%u\n",pt2);
	printf("pt3 ++실행결과:%u\n\n",++pt3);
	printf("pt4 ++실행결과:%u\n\n",++pt4);

	/*
	(*pt1)++;//*pt1++하면안됨
	printf("pt1 ++실행결과:%d\n",++(*pt1)); // ++위치주의
	printf("pt1 ++실행결과:%u\n",pt1++);
	printf("pt1 ++실행결과:%u\n\n",pt1);
	*/
}