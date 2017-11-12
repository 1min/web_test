#include <stdio.h>
int trans(int*pa,int*pb);

void main1(){
char a,*pa;
int b,*pb;
float c,*pc;

pa=&a;//pa+1=a주소+1
pb=&b;//pb+4=b주소+4*4
pc=&c;

*pa='A';
*pb=50;
*pc=3.11;

printf("*pa=%c,a=%c\n",a,*pa);
printf("*pb=%d,b=%d\n",b,*pb);
printf("*pc=%lf,c=%.f\n",c,*pc);
printf("%p,%p",pa,&a);
}
void c(int a,int b){
	a=30;
	b=40;
}

void main2(){
	int a=10,b=20;
	//trans(&a,&b);
	c(a,b);
	printf("a=%d,b=%d\n",a,b);

}

int trans(int *pa,int *pb){

int temp;

temp=*pa;
*pa=*pb;
*pb=temp;
return 0;
}

void main3(){
	int a[5]={10,20,30,40,50};
	int i,*pa;
	int b=0;
	pa=a;

	for(i=0;i<5;i++)
		printf("%u번지의 값은%d\n",pa+i,*(pa+i));
}

void main4(){
char *pa[3];
int i;

pa[0]="apple";
pa[1]="banana";
pa[2]="eggplant";

for(i=0;i<3;i++)
	printf("%s \n",pa[i]);
}

void main5(){
	int i =100;
	int *pi,**ppi;

	pi=&i;
	ppi=&pi;
	printf("i의 주소 %u, \t i의 값: %d\n",&i,i);
	printf("포인터 변수에 의한 i의 주소=%u,i의 값 %d\n",pi,*pi);
	printf("중첩포인터에 의한 i의 주소=%u,i의값 %d %u\n",*ppi,**ppi,ppi);
	printf("%d",sizeof(pi));
}

void main(){
	char a[100];
	int i;
	char *p=a;

	//scanf("%s",a);d
	gets(a);//문자열 입력 빈칸입력+엔터 가능 %c로는 한글을 칠 수 없음
	for(i=0;a[i]!='\0';i++);

	for(i=i-1;i>=0;i--)
		printf("%c",a[i]);
	//scanf("%s",a);d
	gets(a);//문자열 입력 빈칸입력+엔터 가능 %c로는 한글을 칠 수 없음
	for(i=0; *(p+i) !='\0';i++);

	for(i=i-1;i>=0;i--)
		printf("%c",*(p+i));

}

void main7(){
	char a[100];
	int i;
	char *p=a;

	//scanf("%s",a);d

	gets(a);//문자열 입력 빈칸입력+엔터 가능 %c로는 한글은 2바이트라 안나옴
	for(i=0; *(p+i) !='\0';i++);

	for(i=i-1;i>=0;i--)
		printf("%c",*(p+i));
	
}