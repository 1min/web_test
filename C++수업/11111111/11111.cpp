#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#pragma warning(disable:4996)//2017�� scanf�������ؼ� ����ϴ�.

#define N 6

char name[N][10] = { "","��Ʈ","����","���찳","��","����" }; //�̸�
int unit_cost[N] = { 0,1000,500,300,800,1500 }; //�ܰ�
int number[N] = {0};//��ǰ����
int goods;

void screen() {
	static int sum,gnum;
		   printf("��ǰ�ֹ������Դϴ�\n");
		   printf("======================\n");
		   printf("1.��Ʈ 1000\n");
		   printf("2.���� 500\n");
		   printf("3.���찳 300\n");
		   printf("4.�� 800\n");
		   printf("5.���� 1500\n");
		   printf("======================\n");
		   printf("���Ͻô� ��ǰ�� ��ȣ��?\n");
		   scanf("%d", &goods);
		   printf("���Ͻô� ��ǰ %s�� ������?\n",name[goods]);
		   scanf("%d", &gnum);
		   number[goods] += gnum;//�迭�̶� �Լ��ۿ����� �������� �ٲ�� �迭 ����0�� ��� ���ϱ�
		   printf("\n");
		   sum = unit_cost[goods] * gnum;
		   printf("�ֹ��Ͻ� %s�� %d���� �� %d���Դϴ�\n", name[goods], gnum, sum);
}

void screen2() {
	int gcost,i;
	int gsum = 0;
	printf("��ǰ�ֹ�������\n");
	printf("======================\n");
	printf("��ǰ�� ���� ����\n");
	for (i = 1; i<6; i++)
	{
	if (number[i] > 0)	
	{
		gcost = unit_cost[i] * number[i];
			printf(" %s %d %d \n", name[i], number[i], gcost);
			gsum += gcost;
		}
	}
	printf("=====================\n");
	printf(" �Ѿ�   %d�� \n", gsum);
	printf("=====================\n");
}
void main() {
	int service;
	do {
		printf(">>>ȯ���մϴ�.\n");
		printf("========================\n");
		printf("==1.��ǰ�ֹ��ϱ�      ==\n");
		printf("==2. �ֹ��� Ȯ���ϱ�  ==\n");
		printf("==3. �����ϱ�         ==\n");
		printf("========================\n");
		printf("���ϴ� ���񽺸� �����ϼ���\n");
		scanf("%d", &service);
		system("cls");
		switch (service) {
		case 1: screen(); break;
		case 2: screen2(); break;
		case 3: exit(0);
		}
		printf("���񽺸� ��ӿ��ϸ� �ƹ�Ű�� ��������");
		getch();
		system("cls");
	} while (service != 3);

}