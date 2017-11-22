#include <stdio.h>

#define N 5
//GPA는 학점
struct school{
	char name[10];
	char number[9];
	double GPA;
};


void main(){
	struct school student[N]={{"박남준","13110017",4.12},{"조진우","13110038",3.98},{"송봉근","14110020",3.75},{"정영웅","13110035",4.2},{"서승민","16110021",3.38}};
	int good=0;
	double GPA_sum=0,sum_avg=0;
	int i;
	printf("이름    학번    GPA\n");
	printf("-------------------\n");
	for(i=0;i<N;i++)
	{
		printf("%s      %s    %.2lf\n",student[i].name,student[i].number,student[i].GPA);
		GPA_sum+=student[i].GPA;
	}
	printf("-------------------\n");
	printf("전체 학생의 평균 학점\n");
	sum_avg=(double)GPA_sum/N;
	printf("%.2lf\n",sum_avg);
	
	for(i=0;i<N;i++){
		if(student[i].GPA>4){
		good++;
		}
}
printf("4.0이상인 학생수 %d명\n",good);
printf("성적우수자\n");
printf("-------------\n");
for(i=0;i<N;i++)
{
if (student[i].GPA>4)
	printf("%s %s %.2lf점\n",student[i].name,student[i].number,student[i].GPA);
}
}