#include <stdio.h>
#include <stdlib.h>//cls용
#include <conio.h>//getch용 콘솔 인풋아웃풋 비번 1018

int balance;
void print_menu();
int check_pw();
void display_balance();
void deposit();
void withdraw();

void main(){
	int service;
	printf("은행업무 시스템 시작");
	do{
		print_menu();
		printf("원하는 서비스를 선택하시오");
		scanf("%d",&service);
		switch(service){
		case 1:display_balance();break;
		case 2:deposit();break;
		case 3:withdraw(); break;
		case 4: exit(0); //종료하는 exit(0)
		}
		printf("\n계속 서비스를 원하시면 아무키나 누르세요");
		getch();//conio.h필요
		system("cls");//stdlib.h필요
	}
	while(service!=4);
}

void print_menu(){
	printf("==============\n");
	printf(" 1.잔액조회\n");
	printf(" 2.입급\n");
	printf(" 3.출금\n");
	printf(" 4.종료\n");
	printf("==============\n");
} 
//패스워드 체크함수
int check_pw(){
	static int cnt=0;
	int input_pw,system_pw=1018;
	int limit_error=3;

	printf("\n비밀번호를 입력하시오");
	scanf("%d",&input_pw);

	if(input_pw==system_pw) return 1;
	else {
		cnt++;
		if(cnt==limit_error){
			printf("비밀번호 오류3회!!!!\n");
			printf("은행에 방문하시기 바랍니다 \n");
		exit(0);}
		else{
			printf("\n 비밀번호 오류!!!현재까지 총 %d회 \n",cnt);
			printf("다시시도하시오\n");
			return 0;
		
		}
	}
}
//잔액조회함수
void display_balance(){
	if(check_pw()==1)
		printf("\n현재잔액 : %d원\n",balance);
}
//입금함수
void deposit(){
	int Dmoney;
	printf("입금하실 금액은?");
	scanf("%d",&Dmoney);
	balance +=Dmoney;
	printf("\n입금후 현재잔액 : %d 원 \n",balance);
}
//출금함수
void withdraw(){
	int Wmoney;
	if(check_pw()==1){
		printf("출금하실 금액은?");
		scanf("%d",&Wmoney);

		if(balance<Wmoney)
			printf("잔액부족 현재잔액 %d원\n",balance);
		else{
			balance-=Wmoney;
			printf("출금후 잔액은 %d원\n",balance);
		}	
	}
}
