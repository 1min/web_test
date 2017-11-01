#include <stdio.h>
#define size 5//size 5로 초기화
void main(){
int kor[size]={95,85,70,90,95}; //국어점수
int math[size]={70,90,85,80,100};//수학점수
int rank[size],i,j;//랭크
double avg[size]; //평균은 double 즉 실수
for(i=0;i<size;i++){//평균구하기
	avg[i]=(double)(kor[i]+math[i])/2;
}
for(i=0;i<size;i++)//석차구하기 나를 1등으로 초기화 나의평균 avg[i] 친구의 평균 avg[j]
{rank[i]=1; //나의랭크를 1등으로 초기화
for(j=0;j<size;j++)
{if(avg[j]>avg[i]) 
rank[i]++;
}
}
printf("====================\n");
printf("번호 국어 수학 평균 석차\n");
for(i=0;i<size;i++)
{
	printf("%3d  %3d   %3d  %.1lf %3d\n",i+1,kor[i],math[i],avg[i],rank[i]);
printf("====================\n");

}
}
#define row 2
#define col 3

void main1(){ //행렬 덧셈 2차원 배열 실습
	int matA[row][col]={{9,4,7},{2,8,4}};
	int matB[][col]={3,7,1,8,4,-5};
	int matC[row][col],i,j;
	for(i=0;i<row;i++){
	for(j=0;j<col;j++)
	{matC[i][j]=matA[i][j]+matB[i][j];
	}
}
	//A행렬출력
	printf("======매트릭스A=====\n");
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				printf(" %3d ", matA[i][j]);}
		printf("\n");}
	printf("\n======매트릭스B=====\n");//B행렬
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				printf(" %3d ", matB[i][j]);}
				printf("\n");}
		printf("\n======매트릭스C=====\n");
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				printf(" %3d ", matC[i][j]);}
			printf("\n");}//C행렬

}