#include <stdio.h>
#include<stdlib.h>//malloc free cls함수
#include<conio.h>
#define MAX 100


void main1(){int score[MAX]={0};//점수배열
int size,i;
int sum=0;
double avg;
printf("학생의 수를 입력하시오(최대 %d명)");
scanf("%d",&size);
for (i=0;i<size;i++){
	printf("%d번 학생 점수 : ",i+1);
	scanf("%d",&score[i]);
	sum+=score[i];
}
avg=(double)sum/size;
printf("======================================\n");
printf("     평균 점수 :   %.2lf 점\n",avg);
printf("======================================\n");
}

void main2(){//점수배열
int size,i;
int *score;//동적할당을 위한 포인터 변수선언
int sum=0;
double avg;
printf("학생의 수를 입력하시오");
scanf("%d",&size);
//동적배열 할당 malloc -->stlib.h
score = (int *)malloc(sizeof(int)*size);
//동적할당을 받지 못할경우 프로그램 강제종료
if(score==NULL)//힙 영역에 기억장소가 부족할 경우 null반환
	{printf("동적기억장소 할당에 실패했습니다.\n");
exit(1);}

for (i=0;i<size;i++){
	printf("%d번 학생 점수 : ",i+1);
	scanf("%d",score+i);
	sum+=score[i];
}
avg=(double)sum/size;
printf("======================================\n");
printf("     평균 점수 :   %.2lf 점\n",avg);
printf("======================================\n");
//동적할당해제
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
	//구조체 동적배열 선언하여 성적 구하기, 석차 구하기
	int size,i;
	struct student *st_info;//학생들의 이름 점수 저장 구조체
	
printf("학생의 수를 입력하시오");
scanf("%d",&size);
//동적배열 할당 malloc -->stlib.h
st_info = (struct student *)malloc(sizeof(struct student)*size);
//동적할당을 받지 못할경우 프로그램 강제종료
if(st_info==NULL)//힙 영역에 기억장소가 부족할 경우 null반환
	{printf("동적기억장소 할당에 실패했습니다.\n");
exit(1);}
for (i=0;i<size;i++){
	printf("%d 번 학생 이름 : ",i+1);
	scanf("%s",st_info[i].name);
	printf("중간고사점수");
	scanf("%d",&st_info[i].Mid_test);
	printf("기말고사점수");
	scanf("%d",&st_info[i].Fin_test);
	printf("출석점수");
	scanf("%d",&st_info[i].chulchek);
	printf("과제점수");
	scanf("%d",&st_info[i].report);
	//석차 초기화
	st_info[i].rank=1;
}
for(i=0;i<size;i++){
	st_info[i].total=(st_info[i].Mid_test+st_info[i].Fin_test+st_info[i].chulchek+st_info[i].report);}
//석차 구하기
for(i=0;i<size;i++)
	for(int j=0;j<size;j++)
		if(st_info[i].total < st_info[j].total) st_info[i].rank++;//선택알고리즘
printf("결과를 보려면 아무키나 누르시오.\n");
getch();
system("cls");
printf("======================================\n");
printf("     이름    점수   석차  \n");
printf("--------------------------------------\n");
//학생점수 석차 출력
	for(i=0;i<size;i++)
		printf("       %3s %3d %3d \n",st_info[i].name,st_info[i].total,st_info[i].rank);
	free(st_info);
}