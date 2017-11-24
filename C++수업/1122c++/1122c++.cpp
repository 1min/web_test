#include<stdio.h>
#define SIZE 5
#define MAX 100
#include <conio.h>
/*
struct employee_info{//구조체선언
	char name[10];
	char id[10];
	int salary;
};

void main1(){
	struct employee_info person[SIZE];//구조체배열선언
	int sum=0,i,avg_salary;
	printf("직원의 정보 (이름,id,급여)를 입력하시오\n");
	printf("(보기)김수현 soo1004 5000\n");

	for(i=0;i<SIZE;i++){//직원 5명의 정보입력
		printf("%d번 직원정보 : ",i+1);
		scanf("%s %s %d",person[i].name, person[i].id, &person[i].salary);
		sum += person[i].salary;
	}
	avg_salary=sum/SIZE;//평균급여계산

	printf("--------------------------------\n");
	printf("급여가 평균(%d만원)이상인 직원정보\n",avg_salary);//급여가 평균 이상인 직원정보 출력
	for(i=0;i<SIZE;i++){
		if(person[i].salary>avg_salary){
			printf("%s %d만원\n",person[i].id,person[i].salary);
		}

	}
	printf("--------------------------------\n");
	getch();
}

struct person{
	char name[10],gender[4];
	int age;
};

void main2(){
	int i;
	struct person *ptr;//구조체 포인터선언
	//5명의 사용자 정보 입력 위한 구조체 변수 선언
	struct person user[SIZE]={{"김태희","여",},{"김우빈","남"},{"김희선","여"},
	{"오달수","남"},{"마동석","남"}};
	ptr=user;//포인터가 배열의 첫번째를 가리키도록 함
	//사용자 나이 입력
	for(i=0;i<SIZE;i++){
		printf("%s의 나이입력 : ",ptr->name);
		scanf("%d",&ptr->age);// &ptr->age==(*ptr).age
		ptr++;
	}
	//사용자 정보 출력
	printf("=======================\n");
	printf(" 이름   성별   나이   \n");
	printf("=======================\n");
	ptr=user;//ptr+5인 상태에서 ptr로 원상복귀 초기화
	for(i=0;i<SIZE;i++){
		printf("%s   %s   %d\n",ptr->name,ptr->gender,ptr->age);
		ptr++;//포인터가 다음 배열을 가리키도록 함
	}
	printf("=======================\n");
}

void main3(){//포인터 대신 구조체 배열 사용버전
	int i;
	struct person user[SIZE]={{"김태희","여",},{"김우빈","남"},{"김희선","여"},
	{"오달수","남"},{"마동석","남"}};
	for(i=0;i<SIZE;i++){
		printf("%s의 나이입력 : ",user[i].name);
		scanf("%d",&user[i].age);// &ptr->age==(*ptr).age
	}
	//사용자 정보 출력
	printf("=======================\n");
	printf(" 이름   성별   나이   \n");
	printf("=======================\n");
	for(i=0;i<SIZE;i++){
		printf("%s   %s   %d\n",user[i].name,user[i].gender,user[i].age);
	}
	printf("=======================\n");
}

*/
struct person{
	char name[10];
	char gender[4];
	int age;
};

int cnt_data;//cnt_data=0으로 선언됨 전역변수라서

void inputData(struct person info[]){ //자료입력함수
	int work=1;
	do{
	printf("%d.  이름: ",cnt_data+1);
	scanf("%s",info[cnt_data].name);
	printf("성별 (남 또는 여) : ");
	scanf("%s",info[cnt_data].gender);
	printf(" 나이: ");
	scanf("%d",&info[cnt_data].age);
	cnt_data++;
	if(cnt_data==MAX){
		printf("더이상 자료를 저장할 공간이 없습니다.\n");
		break;//while문 밖으로 빠져나감
	}
	printf("계속 입력하려면 1,그만하려면 0을 입력하시오");
	scanf("%d",&work);
	}
	while(work!=0);
}
void outputData(struct person *arr){ //자료 출력함수
	int i;
	printf("=======================\n");
	printf(" 이름   성별   나이   \n");
	printf("=======================\n");
	for(i=0;i<cnt_data;i++){
		printf("%s   %s   %d\n",arr[i].name,arr[i].gender,arr[i].age);
	}
	printf("=======================\n");
}

void main(){
	struct person user[MAX];
	printf("사용자 정보를 최대 %d명까지 입력받고 출력합니다.\n;",MAX);
	
	inputData(user);//입력 함수 호출
	outputData(user);//출력함수 호출
	
}



void main5(){
	int i;
	struct person user[MAX];
	printf("사용자 정보를 최대 %d명까지 입력받고 출력합니다.\n;",MAX);
	int work=1;
	do{
	printf("%d.  이름: ",cnt_data+1);
	scanf("%s",user[cnt_data].name);
	printf("성별 (남 또는 여) : ");
	scanf("%s",user[cnt_data].gender);
	printf(" 나이: ");
	scanf("%d",&user[cnt_data].age);
	cnt_data++;
	if(cnt_data==MAX){
		printf("더이상 자료를 저장할 공간이 없습니다.\n");
		break;//while문 밖으로 빠져나감
	}
	printf("계속 입력하려면 1,그만하려면 0을 입력하시오");
	scanf("%d",&work);
	}
	while(work!=0);

	//정보출력
	printf("=======================\n");
	printf(" 이름   성별   나이   \n");
	printf("=======================\n");
	for(i=0;i<cnt_data;i++){
		printf("%s   %s   %d\n",user[i].name,user[i].gender,user[i].age);
	}
	printf("=======================\n");
}
