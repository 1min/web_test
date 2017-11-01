#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#pragma warning(disable:4996)//2017에 scanf못쓰게해서 썼습니다.

#define N 6

char name[N][10] = { "","노트","연필","지우개","자","볼펜" }; //이름
int unit_cost[N] = { 0,1000,500,300,800,1500 }; //단가
int number[N] = {0};//상품숫자
int goods;

void screen() {
	static int sum,gnum;
		   printf("상품주문서비스입니다\n");
		   printf("======================\n");
		   printf("1.노트 1000\n");
		   printf("2.연필 500\n");
		   printf("3.지우개 300\n");
		   printf("4.자 800\n");
		   printf("5.볼펜 1500\n");
		   printf("======================\n");
		   printf("원하시는 상품의 번호는?\n");
		   scanf("%d", &goods);
		   printf("원하시는 상품 %s의 갯수는?\n",name[goods]);
		   scanf("%d", &gnum);
		   number[goods] += gnum;//배열이라 함수밖에서도 쓸때마다 바뀐다 배열 원소0에 계속 더하기
		   printf("\n");
		   sum = unit_cost[goods] * gnum;
		   printf("주문하신 %s의 %d개는 총 %d원입니다\n", name[goods], gnum, sum);
}

void screen2() {
	int gcost,i;
	int gsum = 0;
	printf("상품주문내역서\n");
	printf("======================\n");
	printf("상품명 개수 가격\n");
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
	printf(" 총액   %d원 \n", gsum);
	printf("=====================\n");
}
void main() {
	int service;
	do {
		printf(">>>환영합니다.\n");
		printf("========================\n");
		printf("==1.상품주문하기      ==\n");
		printf("==2. 주문서 확인하기  ==\n");
		printf("==3. 종료하기         ==\n");
		printf("========================\n");
		printf("원하는 서비스를 선택하세요\n");
		scanf("%d", &service);
		system("cls");
		switch (service) {
		case 1: screen(); break;
		case 2: screen2(); break;
		case 3: exit(0);
		}
		printf("서비스를 계속원하면 아무키나 누르세요");
		getch();
		system("cls");
	} while (service != 3);

}