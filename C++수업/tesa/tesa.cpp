#include <stdio.h>
#include<string.h>
void main1(){
int a=20,b=10,*p1,*p2,*p3;
p1=&a;
p2=&b;

if(*p1>*p2){
	p3 = p1;p1=p2;p2=p3;
}
printf("a=%d,b=%d\n",a,b);
printf("*p1=%d,*p2=%d\n",*p1,*p2);
}

void main2(){
	int index =0,*ptr;
ptr = &index;
index++;
*ptr=*ptr+1;
printf("index = %d, *ptr = %d \n",index,*ptr);
}

void main3(){
char ch, *ptr;
ptr = "Welcome to";
ch ='C';
printf(">>%s %c %s %s\n",ptr,ch,"Language","!!!");
}

void main4(){
	int *ptr,a[5] = {10,20,30,40,50};
	ptr = a;
	printf("��������: %d, ��������: %d",*(ptr+3),a[3]);
}

void main5(){
	char *ptr,note[]="See you at the snack bar!";
	ptr = note;
	puts(ptr);
	ptr++;
	puts(++ptr);
	note[7]='!';
	note[8]='\0';
	puts(note);
}

void main6(){
	char *ptr,word[]="Bye!";
	ptr = word+strlen(word);
	while(--ptr>=word)
		puts(ptr);
}

void main(){
	int matrix[2][3]={{1,2,3},{10,20,30}};
	printf("%d\n %d\n %d\n %d\n",*matrix,*matrix[0],*matrix[1],*(matrix[1]+1));
}
void division(int x,int y, int &q, int &r){
	q= x/y;
	r=x%y;
}
void main8(){
	int a =75,b=8,quotient,remainder;
	
	division(a,b,quotient,remainder);
	printf("%d/%d = %d\n",a,b,quotient);
	printf("%d %% %d =%d\n",a,b,remainder);

}

void top_n(int sales[],int &n){
	int i,j,temp;
	for(j=0;j<10-1;j++){
		for(i=0;i<10-1-j;i++){
		if(sales[i]<sales[i+1]){
			temp=sales[i];
			sales[i]=sales[i+1];
			sales[i+1]=temp;
		}
	}
}
	int *ptr;
	ptr=sales;
	for(i=0;i<n;i++){
	printf("%d\n",*(ptr+i));
	}
}
void main9(){
	int sales[10] = {203,105,302,200,289,175,130,120,267,312};
	int n;
	printf("���� � ��ŭ ��Ÿ������ n���� �����Ͻÿ�");
	scanf("%d",&n);
	top_n(sales,n);
}

struct student{
	char name[10];
	char phone[14];
	double grade;
};

int search(char *who,struct student *ptr_student){
	int i;
	for(i=0;i<10;i++){
	{
		if(strcmp(who,(ptr_student+i)->name)==0)
			return i;
	}
	}
	return -1;
}

void main10(){
	char student_name[10];
	struct student c[10]={{"������","010-5228-7889",4.3},{"������","010-5211-1472",4.0},{"������","010-1235-8765",3.2},
	{"���ǿ�","010-8282-8282",2.7},{"������","010-5165-3483",3.2},{"������","010-5232-1628",4.0},{"�嵵��","010-3452-1676",4.4},
	{"�����","010-5210-1234",3.7},{"�̳���","010-5210-1234",4.2},{"���ؼ�","010-8255-8255",3.8}};
	char *who;
	struct student *ptr_student=c;
	printf("������ ã�� ���� �л��� �̸���?\n");
	scanf("%s",student_name);
	who=student_name;
	if(search(who,ptr_student)==-1){
		printf("%s �л��� ã�� �� �����ϴ�.",student_name);}
	else{
		printf("�̸�        ��ȭ     ����\n");
		printf("-------------------------\n");
		printf("%s %s %.1lf",(ptr_student+search(who,ptr_student))->name,
			(ptr_student+search(who,ptr_student))->phone,(ptr_student+search(who,ptr_student))->grade);
	}
}