#include <stdio.h>

void main2(){

	int *p = (int *)100;
	int input=20;

	p = &input;
	*p = 50;
	printf("%d %d",*p,input);
}

void main3(){

	int data[] = {3,5,6,9,2};
	int i = 0;

	for (i=0;i<5;i++)
		printf("%d", *(data+i));
	puts("");
}

void main4(){

	int c[] = {3,5,6,9,2};
	int java[] = {3,5,6,9,2};
	int *p = c+1;

	printf("%d\n",p[2]);
	printf("%d\n",*(p+1));
	p= java+2;
	printf("%d\n",java[2]);
}

void increment(int *,int);

void main5(){
	int year[]={2006,2008,2010,2012,2014};

	printf("%d\n",year[2]);
	increment(&year[0],10);
	printf("%d\n",year[2]);
}

void increment(int *p,int n){

	int i;
	for(i=0;i<5;i++)
		*p++ += i*n;
}

void main6(){
	int a[4]={1,3,6,8};
	int *pa=&a[0];

	printf("%d %d %d %d\n", *(pa),*(pa+1),*(pa+2),*(pa+3));
	printf("%d %d %d %d\n", pa[0],pa[1],pa[2],pa[3]);
	printf("%d", ++*pa);
	printf("%d", *++pa);
	printf("%d",*pa++);
	printf("%d",--*pa++);
	printf("%d \n",(*pa)--);
	printf("%d %d %d %d\n", a[0],a[1],a[2],a[3]);
}

void main7(){
	int i = 20;
	int *pi = &i;
	int **dpi = &pi;

	printf("%p %p %p\n", &i,pi, *dpi);

	*pi = i+2;
	printf("%d %d %d\n",i, *pi,**dpi);
	
	**dpi = *pi+2;
	printf("%d %d %d\n",i,*pi,**dpi);
}

void main8(){

	int *pary[3] = {NULL};
	int i,a=10,b=20,c=30;

	pary[0] = &a;
	pary[1] = &b;
	pary[2] = &c;
	for(i=0;i<3;i++)
		printf("*pAry[%d]=%d\n",i,*pary[i]);
	for(i=0;i<3;i++)
	{
		scanf("%d",pary[i]);
		printf("%d %d %d \n",a,b,c);
	}
}
	void main(){
		int a[] = {8,2,8,1,3};
		int *p = a;

		int ary[][4]={5,7,6,2,7,8,1,3};
		int (*ptr)[4]=ary;
		//int *ptr[4] = ary;


		printf("%2d,%2d\n",*(p+1),*(p+4));
		printf("%2d,%2d\n",p[0],p[4]);
		printf("sizeof(a)= %d,sizeof(p) = %d\n",sizeof(a),sizeof(p));

		printf("%2d,%2d\n",**ary,**ptr++);
		printf("%2d,%2d\n",**(ary+1),**(ptr++));
		ptr = ary;
		printf("%2d,%2d\n",*(ary[1]+1),*(ptr[1]+1));
		printf("%2d,%2d\n",*(*(ary+1)+3),*(*(ptr+1)+3));
		printf("sizeof(ary)= %d, sizeof(ptr)= %d\n",sizeof(ary),sizeof(ptr));

	}