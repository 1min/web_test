#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>//stcmp���ڿ� ���Լ� �������� ����
//1~3������� ������ �������
#define N 10

struct game{
char name[10];
int R1,R2,R3;


};//����ü �߰�ȣ���� �����ݷ��ʿ�

void main1(){
	int a;
	struct game player;//����ü ���� ����
	double avg;//����� ���ϴ� ���� ����
	//���� �̸��� ���庰 ���� �Է�
	do{
	printf("�л��� �̸��� �Է��Ͻÿ�:");
	scanf("%s",player.name);
	printf("�ֱ� 3ȸ ���������� �Է��Ͻÿ�. (��) 525 630 750  : ");
	scanf("%d %d %d",&player.R1,&player.R2,&player.R3);
	//��ձ��ϱ�
	avg=(double)(player.R1+player.R2+player.R3)/3;
	//������
	printf("\n%s �л��� ���� ��� ����:%.2lf�� \n",player.name,avg);
	printf("�����Ͻ÷��� 3�� �Է�");
	scanf("%d",&a);
	getch();
	system("cls");
	}while(a!=3);
}

//10���� �������� ������ ����ü�� �����ϰ� 
//���ڼ� ���ڼ� ��� ���
//��տ��� ��� 
//�ְ���� ���(����ü �迭 �ǽ�)
struct person{
	char name[10];
	char gender[4];
	int age;

};
void main(){
	//10�� ������ ���� ����ü ���� �迭�� ����
	struct person star[N]={{"����","��",24},{"����","��",35},{"���߱�","��",33},
	{"���ظ�","��",24},{"������","��",19},{"���ٿ�","��",31},{"�輳��","��",24},
	{"�ں���","��",25},{"�˼���","��",23},{"�ٴϿ�","��",22}};
	int i,j,temp,cnt_M=0,cnt_F=0,sum_age=0;
	double avg_age;
	struct person oldest=star[0];//oldest��� �ְ���� ������ ���� ���庯��
	struct person youngist=star[0];//oldest��� �ֿ����� ������ ���� ���庯��
	//���ڿ����� �� ����
	for(i=0;i<N;i++){
	sum_age+=star[i].age;
	if(strcmp(star[i].gender,"��")==0)
		cnt_M++;
	else
		cnt_F++;
	}
	//������ ��ճ��� ���ϱ�
	avg_age=(double)sum_age/N;
	//������

	printf("\n\n");
	printf("--------------------------\n");
	printf(" �̸�    ����    ����   \n");
	printf("--------------------------\n");
	for(i=0;i<N;i++){
		printf("%7s   %3s   %10d\n",star[i].name,star[i].gender,star[i].age);
	}
		printf("--------------------------\n");
		printf("\n\n");
		printf("������ : %d��\n",cnt_M);
		printf("������ : %d��\n",cnt_F);
		printf("����ճ��� : %.2lf��\n",avg_age);

		//�ְ���� ã��
		for(j=1;j<N;j++)
		{if(star[j].age>oldest.age){
			oldest=star[j];
		}
		
		}
		//�ֿ����� ã��
		for(j=0;j<N-1;j++)
		{if(star[j].age<youngist.age){
			youngist=star[j];
		}
		
		}
		printf("�ְ�ɿ����� �̸�:%s ����:%s ����:%d��\n",oldest.name,oldest.gender,oldest.age);
		printf("�ֿ��ҿ����� �̸�:%s ����:%s ����:%d��\n",youngist.name,youngist.gender,youngist.age);
}