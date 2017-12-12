#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct employee_info{
	char no[20];
	char name[15];
	int	 children;
	int pay;
	int extra_pay;
	int total;
};

void main1(){
	int i;
	struct employee_info person[5];
	for(i=0;i<5;i++){
		printf("사원번호를 입력하시오");
		scanf("%s",person[i].no);
		printf("이름을 입력하시오");
		scanf("%s",person[i].name);
		printf("자녀수를 입력하시오");
		scanf("%d",&person[i].children);
		printf("기본급을 입력하시오");
		scanf("%d",&person[i].pay);
		if(person[i].children==1)
			person[i].extra_pay=100000;
		else if(person[i].children>=2)
			person[i].extra_pay=200000;
		else if (person[i].children==0)
			person[i].extra_pay=0;
		person[i].total=person[i].pay+person[i].extra_pay;
	}
	printf("사원번호   이름    기본급   자녀수   자녀수당  최종급여\n");
	printf("=======================================================\n");
	for(int i=0;i<5;i++){
		printf("%s  %s  %d   %d   %d  %d\n",person[i].no,person[i].name,person[i].pay,person[i].children,person[i].extra_pay,person[i].total);
	}
}

int size;

struct employee{
	//이름, 직위, 야근시간, 기본 급여, 최종 급여
	char name[10];
	char position[10];
	int night_time;
	int normal_pay;//기본급여
	int total_pay;//최종급여
};

void input(struct employee *man){
	
		for(int i=0;i<size;i++){
			printf("이름을 입력하시오.");
			scanf("%s",man[i].name);
			printf("직위를 입력하시오.");
			scanf("%s",man[i].position);
			printf("야근시간을 입력하시오.");
			scanf("%d",&man[i].night_time);
		}

}

void basic_pay(struct employee *man){
	for(int i=0; i<size;i++){
		if (strcmp(man[i].position,"과장")==0)
			man[i].normal_pay=  3000000;
		else if(strcmp(man[i].position,"대리")==0)
			man[i].normal_pay= 2000000;
		else
			man[i].normal_pay= 1500000;
	}
}

void total_pay(struct employee *man){
	for(int i=0; i<size;i++){
		if (strcmp(man[i].position,"과장")==0)
			man[i].total_pay=man[i].normal_pay*1.1+(20000*man[i].night_time);
		else if(strcmp(man[i].position,"대리")==0)
			man[i].total_pay=man[i].normal_pay*1.07+(20000*man[i].night_time);
		else
			man[i].total_pay=man[i].normal_pay*1.05+(20000*man[i].night_time);
	}
}

void output(struct employee *man){
	printf("이름 직위 야근시간 기본급여 최종급여\n");
	printf("====================================\n");
	for(int i=0;i<size;i++){
		printf("이름%s 직위%s 야근시간%d 기본급여%d 최종급여%d \n",
			man[i].name,man[i].position,man[i].night_time,man[i].normal_pay,man[i].total_pay);

	}

}

void max_pay(struct employee *man){
	int i,j;
	struct employee temp={"\0"};
	for(i=0;i<size-1;i++)
		for(j=0;j<size-i-j;j++){
			if(man[j].total_pay<man[j+1].total_pay){
				temp=man[j+1];
				man[j+1]=man[j];
				man[j]=temp;}
			
}
		printf("\n최고 급여자는 %s %d",man[0].name,man[0].total_pay);
}

  void main(){
	  printf("몇명의 사원을 입력할지 size를 입력하시오");
	  scanf("%d",&size);
	 typedef struct employee MAN;
	 MAN *man;
	 man = (MAN*)malloc(sizeof(MAN)*size);
	 input(man);
	 basic_pay(man);
	 total_pay(man);
	 output(man);
	 max_pay(man);
	  free(man);
  }