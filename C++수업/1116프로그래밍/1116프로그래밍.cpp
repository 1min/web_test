#include <stdio.h>
//구조체 없는 실무 프로그램은 없음



struct score{
	int number;
	char name[10];
	int kor;
	int eng;
	int mat;
}student={1,"홍길동",50,50,50};



void main(){
	struct score *p=&student;//student의 주소를 포인터에 배열의 포인터
	int sum;
	double avg;
	sum=student.kor+student.eng+student.mat;
	avg=(double)sum/5;
	printf("학번:%d 이름 :%s 국어성적 %d점 영어성적 %d점 수학성적 %d점 총점 %d 평균 %lf \n",student.number,student.name,student.kor,student.eng,student.mat,sum,avg);//.은 멤버연산자
	printf("학번:%d 이름 :%s 국어성적 %d점 영어성적 %d점 수학성적 %d점 총점 %d 평균 %lf \n",p->number,p->name,p->kor,p->eng,p->mat,sum,avg);//.은 멤버연산자




}