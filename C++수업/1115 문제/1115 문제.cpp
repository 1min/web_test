#include <stdio.h>

#define N 5
//GPA�� ����
struct school{
	char name[10];
	char number[9];
	double GPA;
};


void main(){
	struct school student[N]={{"�ڳ���","13110017",4.12},{"������","13110038",3.98},{"�ۺ���","14110020",3.75},{"������","13110035",4.2},{"���¹�","16110021",3.38}};
	int good=0;
	double GPA_sum=0,sum_avg=0;
	int i;
	printf("�̸�    �й�    GPA\n");
	printf("-------------------\n");
	for(i=0;i<N;i++)
	{
		printf("%s      %s    %.2lf\n",student[i].name,student[i].number,student[i].GPA);
		GPA_sum+=student[i].GPA;
	}
	printf("-------------------\n");
	printf("��ü �л��� ��� ����\n");
	sum_avg=(double)GPA_sum/N;
	printf("%.2lf\n",sum_avg);
	
	for(i=0;i<N;i++){
		if(student[i].GPA>4){
		good++;
		}
}
printf("4.0�̻��� �л��� %d��\n",good);
printf("���������\n");
printf("-------------\n");
for(i=0;i<N;i++)
{
if (student[i].GPA>4)
	printf("%s %s %.2lf��\n",student[i].name,student[i].number,student[i].GPA);
}
}