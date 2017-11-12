#include <stdio.h>
#include <conio.h>	//getch()함수 정의를 위해
#define SIZE 5		// 배열 원소 수 5를 매크로 상수 (전처리기)SIZE로 정의 
#define N 4
/*int main()
{
	int quiz[SIZE]; 		// 정수 SIZE개를 저장할 배열 선언
	int i, count, sum;		// 누적 변수 초기화!
	double avg;

	// 배열의 입력
	printf("%d명의 점수를 순서대로 입력하세요.\n\n", SIZE);
	for (i=0; i<SIZE; i++)
	{
		printf("%d번의 퀴즈 점수는? ", i + 1);
		//scanf("%d", &quiz[i]);
		scanf("%d", (quiz+i));//&quiz[i]=quiz+i, quiz+i 는 주소값
	}

	// 배열 평균 구하기
	sum = 0;
	for (i=0; i<SIZE; i++){
		//sum = sum + quiz[i];
		sum = sum + *(quiz+i);}
	
	avg = (double)sum / SIZE; 	

	// 평균 미만자 수 구하기
	count = 0;
	for (i=0; i<SIZE; i++)
		if (*(quiz+i) < avg)
			count++;

	// 결과 출력
	//printf("============================\n");
	//printf("  번호 점수  평균과의 차이  \n");
	//printf("============================\n");
	//for (i=0; i<SIZE; i++)
	//	printf("   %2d   %2d      %5.1lf\n", i+1, quiz[i], quiz[i] - avg);
	printf("결과를 보려면 아무키나 누르세요\n");
	//아무키나 눌렀을때 동작하도록 문자 하나를 받음
	getch(); //문자를 입력 받을 때 까지 잠시 멈춤
	printf("============================\n");
	printf("평균 : %.1lf점 \n", avg);
	printf("============================\n");
	printf("평균미만 : %d명 \n", count);

	return 0;
}
*/

//포인터와 함수(2)
void sw_ft(int x,int y);///값에의한 호출
void sw_add(int *x,int*y); // 주소에 의한 호출
void main(){
	int x=100,y=200;
	printf("main 함수에서 X=%u,Y=%u \n\n",&x,&y);
	printf("main 함수에서 X=%d,Y=%d \n",x,y);
	sw_ft(x,y);
	printf("sw 실행후 main 함수에서 X=%d,Y=%d \n",x,y);
	sw_add(&x,&y);
	printf("add 실행후 main 함수에서 X=%d,Y=%d \n\n",x,y);
	printf("main 함수에서 X=%u,Y=%u \n\n",&x,&y);
}

void sw_ft(int x,int y){
	int temp;
	temp =x;
	x=y;
	y=temp;
	printf("sw_ft 함수에서 X=%d Y=%d",x,y);
}

void sw_add(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("sw_add 함수에서 X=%d Y=%d\n",*x,*y);

}