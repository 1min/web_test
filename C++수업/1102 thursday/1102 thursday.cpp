#include <stdio.h>
int trans(int*pa,int*pb);

void main1(){
char a,*pa;
int b,*pb;
float c,*pc;

pa=&a;//pa+1=a�ּ�+1
pb=&b;//pb+4=b�ּ�+4*4
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
		printf("%u������ ����%d\n",pa+i,*(pa+i));
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
	printf("i�� �ּ� %u, \t i�� ��: %d\n",&i,i);
	printf("������ ������ ���� i�� �ּ�=%u,i�� �� %d\n",pi,*pi);
	printf("��ø�����Ϳ� ���� i�� �ּ�=%u,i�ǰ� %d %u\n",*ppi,**ppi,ppi);
	printf("%d",sizeof(pi));
}

void main(){
	char a[100];
	int i;
	char *p=a;

	//scanf("%s",a);d
	gets(a);//���ڿ� �Է� ��ĭ�Է�+���� ���� %c�δ� �ѱ��� ĥ �� ����
	for(i=0;a[i]!='\0';i++);

	for(i=i-1;i>=0;i--)
		printf("%c",a[i]);
	//scanf("%s",a);d
	gets(a);//���ڿ� �Է� ��ĭ�Է�+���� ���� %c�δ� �ѱ��� ĥ �� ����
	for(i=0; *(p+i) !='\0';i++);

	for(i=i-1;i>=0;i--)
		printf("%c",*(p+i));

}

void main7(){
	char a[100];
	int i;
	char *p=a;

	//scanf("%s",a);d

	gets(a);//���ڿ� �Է� ��ĭ�Է�+���� ���� %c�δ� �ѱ��� 2����Ʈ�� �ȳ���
	for(i=0; *(p+i) !='\0';i++);

	for(i=i-1;i>=0;i--)
		printf("%c",*(p+i));
	
}