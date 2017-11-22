#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>//stcmp문자열 비교함수 쓰기위한 선언
//1~3라운드까지 게임의 평균점수
#define N 10

struct game{
char name[10];
int R1,R2,R3;


};//구조체 중괄호끝에 세미콜론필요

void main1(){
	int a;
	struct game player;//구조체 변수 선언
	double avg;//평균을 구하는 변수 선언
	//선수 이름과 라운드별 점수 입력
	do{
	printf("학생의 이름을 입력하시오:");
	scanf("%s",player.name);
	printf("최근 3회 토익점수를 입력하시오. (예) 525 630 750  : ");
	scanf("%d %d %d",&player.R1,&player.R2,&player.R3);
	//평균구하기
	avg=(double)(player.R1+player.R2+player.R3)/3;
	//결과출력
	printf("\n%s 학생의 토익 평균 성적:%.2lf점 \n",player.name,avg);
	printf("종료하시려면 3을 입력");
	scanf("%d",&a);
	getch();
	system("cls");
	}while(a!=3);
}

//10명의 연예인의 정보를 구조체에 저장하고 
//남자수 여자수 세어서 출력
//평균연령 출력 
//최고령자 출력(구조체 배열 실습)
struct person{
	char name[10];
	char gender[4];
	int age;

};
void main(){
	//10명 연예인 정보 구조체 변수 배열에 저장
	struct person star[N]={{"수지","여",24},{"현빈","남",35},{"송중기","남",33},
	{"이해리","여",24},{"김유정","여",19},{"문근영","여",31},{"김설현","여",24},
	{"박보검","남",25},{"옹성우","남",23},{"다니엘","남",22}};
	int i,j,temp,cnt_M=0,cnt_F=0,sum_age=0;
	double avg_age;
	struct person oldest=star[0];//oldest라는 최고령자 연예인 정보 저장변수
	struct person youngist=star[0];//oldest라는 최연소자 연예인 정보 저장변수
	//남자연예인 수 세기
	for(i=0;i<N;i++){
	sum_age+=star[i].age;
	if(strcmp(star[i].gender,"남")==0)
		cnt_M++;
	else
		cnt_F++;
	}
	//연예인 평균나이 구하기
	avg_age=(double)sum_age/N;
	//결과출력

	printf("\n\n");
	printf("--------------------------\n");
	printf(" 이름    성별    나이   \n");
	printf("--------------------------\n");
	for(i=0;i<N;i++){
		printf("%7s   %3s   %10d\n",star[i].name,star[i].gender,star[i].age);
	}
		printf("--------------------------\n");
		printf("\n\n");
		printf("▶남자 : %d명\n",cnt_M);
		printf("▶여자 : %d명\n",cnt_F);
		printf("▶평균나이 : %.2lf세\n",avg_age);

		//최고령자 찾기
		for(j=1;j<N;j++)
		{if(star[j].age>oldest.age){
			oldest=star[j];
		}
		
		}
		//최연소자 찾기
		for(j=0;j<N-1;j++)
		{if(star[j].age<youngist.age){
			youngist=star[j];
		}
		
		}
		printf("최고령연예인 이름:%s 성별:%s 나이:%d세\n",oldest.name,oldest.gender,oldest.age);
		printf("최연소연예인 이름:%s 성별:%s 나이:%d세\n",youngist.name,youngist.gender,youngist.age);
}