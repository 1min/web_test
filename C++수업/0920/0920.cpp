#include <stdio.h>
#define size 5//size 5�� �ʱ�ȭ
void main(){
int kor[size]={95,85,70,90,95}; //��������
int math[size]={70,90,85,80,100};//��������
int rank[size],i,j;//��ũ
double avg[size]; //����� double �� �Ǽ�
for(i=0;i<size;i++){//��ձ��ϱ�
	avg[i]=(double)(kor[i]+math[i])/2;
}
for(i=0;i<size;i++)//�������ϱ� ���� 1������ �ʱ�ȭ ������� avg[i] ģ���� ��� avg[j]
{rank[i]=1; //���Ƿ�ũ�� 1������ �ʱ�ȭ
for(j=0;j<size;j++)
{if(avg[j]>avg[i]) 
rank[i]++;
}
}
printf("====================\n");
printf("��ȣ ���� ���� ��� ����\n");
for(i=0;i<size;i++)
{
	printf("%3d  %3d   %3d  %.1lf %3d\n",i+1,kor[i],math[i],avg[i],rank[i]);
printf("====================\n");

}
}
#define row 2
#define col 3

void main1(){ //��� ���� 2���� �迭 �ǽ�
	int matA[row][col]={{9,4,7},{2,8,4}};
	int matB[][col]={3,7,1,8,4,-5};
	int matC[row][col],i,j;
	for(i=0;i<row;i++){
	for(j=0;j<col;j++)
	{matC[i][j]=matA[i][j]+matB[i][j];
	}
}
	//A������
	printf("======��Ʈ����A=====\n");
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				printf(" %3d ", matA[i][j]);}
		printf("\n");}
	printf("\n======��Ʈ����B=====\n");//B���
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				printf(" %3d ", matB[i][j]);}
				printf("\n");}
		printf("\n======��Ʈ����C=====\n");
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				printf(" %3d ", matC[i][j]);}
			printf("\n");}//C���

}