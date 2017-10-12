#include <stdio.h>
#include <math.h>//������ �Լ����� ����
#define N 5



double mean_f(int arr[N]){//��ձ��ϱ�
	int i;
	int sum=0;
	for(i=0;i<N;i++)
		sum+=arr[i];

	return (double)sum/N;
}

double stdv(int arr[N],double m){
	int i;
	double sum=0;

	for(i=0;i<N;i++)
		sum +=(arr[i]-m)*(arr[i]-m);
	return sqrt(sum/N);

}

void print_d(){
	printf("=============================\n");
}

void main(){
	int p_score[N]={93,42,80,75,100};
	int m_score[N]={50,30,50,80,75};
	int i;
	double avg[2]={0};

	printf("  ��ȣ    ���α׷���    �������� \n");
	print_d();
	for(i=0;i < N;i++){
		printf("  %d   %3d   %3d   \n",i+1,p_score[i],m_score[i]);}
	print_d();
	avg[0]=mean_f(p_score);
	avg[1]=mean_f(m_score);
	printf("���     %.2lf  %.2lf \n", avg[0],avg[1]);
	
	printf("ǥ������ %.2lf  %.2lf \n", stdv(p_score,avg[0]), stdv(m_score,avg[1]));
	print_d();

}