#include <stdio.h>
#include<stdlib.h>//malloc free cls�Լ�
#include<conio.h>
#define MAX 100


void main1(){int score[MAX]={0};//�����迭
int size,i;
int sum=0;
double avg;
printf("�л��� ���� �Է��Ͻÿ�(�ִ� %d��)");
scanf("%d",&size);
for (i=0;i<size;i++){
	printf("%d�� �л� ���� : ",i+1);
	scanf("%d",&score[i]);
	sum+=score[i];
}
avg=(double)sum/size;
printf("======================================\n");
printf("     ��� ���� :   %.2lf ��\n",avg);
printf("======================================\n");
}

void main2(){//�����迭
int size,i;
int *score;//�����Ҵ��� ���� ������ ��������
int sum=0;
double avg;
printf("�л��� ���� �Է��Ͻÿ�");
scanf("%d",&size);
//�����迭 �Ҵ� malloc -->stlib.h
score = (int *)malloc(sizeof(int)*size);
//�����Ҵ��� ���� ���Ұ�� ���α׷� ��������
if(score==NULL)//�� ������ �����Ұ� ������ ��� null��ȯ
	{printf("���������� �Ҵ翡 �����߽��ϴ�.\n");
exit(1);}

for (i=0;i<size;i++){
	printf("%d�� �л� ���� : ",i+1);
	scanf("%d",score+i);
	sum+=score[i];
}
avg=(double)sum/size;
printf("======================================\n");
printf("     ��� ���� :   %.2lf ��\n",avg);
printf("======================================\n");
//�����Ҵ�����
free(score);
}

struct student{
	char name [10];
	int Mid_test;
	int Fin_test;
	int chulchek;
	int report;
	int total;
	int rank;
};


void main(){
	//����ü �����迭 �����Ͽ� ���� ���ϱ�, ���� ���ϱ�
	int size,i;
	struct student *st_info;//�л����� �̸� ���� ���� ����ü
	
printf("�л��� ���� �Է��Ͻÿ�");
scanf("%d",&size);
//�����迭 �Ҵ� malloc -->stlib.h
st_info = (struct student *)malloc(sizeof(struct student)*size);
//�����Ҵ��� ���� ���Ұ�� ���α׷� ��������
if(st_info==NULL)//�� ������ �����Ұ� ������ ��� null��ȯ
	{printf("���������� �Ҵ翡 �����߽��ϴ�.\n");
exit(1);}
for (i=0;i<size;i++){
	printf("%d �� �л� �̸� : ",i+1);
	scanf("%s",st_info[i].name);
	printf("�߰��������");
	scanf("%d",&st_info[i].Mid_test);
	printf("�⸻�������");
	scanf("%d",&st_info[i].Fin_test);
	printf("�⼮����");
	scanf("%d",&st_info[i].chulchek);
	printf("��������");
	scanf("%d",&st_info[i].report);
	//���� �ʱ�ȭ
	st_info[i].rank=1;
}
for(i=0;i<size;i++){
	st_info[i].total=(st_info[i].Mid_test+st_info[i].Fin_test+st_info[i].chulchek+st_info[i].report);}
//���� ���ϱ�
for(i=0;i<size;i++)
	for(int j=0;j<size;j++)
		if(st_info[i].total < st_info[j].total) st_info[i].rank++;//���þ˰���
printf("����� ������ �ƹ�Ű�� �����ÿ�.\n");
getch();
system("cls");
printf("======================================\n");
printf("     �̸�    ����   ����  \n");
printf("--------------------------------------\n");
//�л����� ���� ���
	for(i=0;i<size;i++)
		printf("       %3s %3d %3d \n",st_info[i].name,st_info[i].total,st_info[i].rank);
	free(st_info);
}