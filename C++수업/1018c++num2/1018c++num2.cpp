#include<stdio.h> //정적변수 이해하기
//find_pw,find_id 서비스요청 횟수를 세는 프로그램
//do~while문 사용
static int cnt_service;
char name[]="Quize";

void find_pw();
void find_id();
void main(){
	int service;//사용자 요청 서비스 번호
	
	do{//사용자가 그만둘때까지 계속한다 do while문
		//메뉴출력
		printf("\n>>>> 1. ID찾기 2. PW찾기 3.종료<<<<<");
		printf("원하는 메뉴를 선택하시오 (1-3)");
		scanf("%d",&service);
		switch(service){
		case 1:find_id(); break;
		case 2:find_pw();
		}
	}
	while(service !=3);
}

void find_pw(){
	static int cnt_pw=0;//누적시 초기화0
	cnt_pw++;
	cnt_service++;
	printf("\n총 %s게임중 전체서비스 요청 건수 : %d건, 비밀번호 찾기 요청건수 %d 건",name,cnt_service,cnt_pw);

}

void find_id(){
	static int cnt_id=0;//누적시 초기화0
	cnt_id++;
	cnt_service++;
	printf("\n총 %s게임중 서비스 전체요청 건수 : %d건, 아이디 찾기 요청건수 %d 건",name,cnt_service,cnt_id);
}