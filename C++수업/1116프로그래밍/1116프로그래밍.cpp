#include <stdio.h>
//����ü ���� �ǹ� ���α׷��� ����



struct score{
	int number;
	char name[10];
	int kor;
	int eng;
	int mat;
}student={1,"ȫ�浿",50,50,50};



void main(){
	struct score *p=&student;//student�� �ּҸ� �����Ϳ� �迭�� ������
	int sum;
	double avg;
	sum=student.kor+student.eng+student.mat;
	avg=(double)sum/5;
	printf("�й�:%d �̸� :%s ����� %d�� ����� %d�� ���м��� %d�� ���� %d ��� %lf \n",student.number,student.name,student.kor,student.eng,student.mat,sum,avg);//.�� ���������
	printf("�й�:%d �̸� :%s ����� %d�� ����� %d�� ���м��� %d�� ���� %d ��� %lf \n",p->number,p->name,p->kor,p->eng,p->mat,sum,avg);//.�� ���������




}