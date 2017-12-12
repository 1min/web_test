#include <stdio.h>//fopen,fclose,fprintf
#include <stdlib.h>//exit 함수 
#define SIZE 5
//5명의 정보를 입력받아 출력하기 
int main1(){

FILE *fp;
//char *f_name = "age.txt";
int age,i;
char name[20];
fp= fopen("input.txt","w");

if(fp==NULL){
	printf("input.txt 파일 열기 실패!\n");
	exit(1);//프로그램 종료

}
//데이터 처리하기
//5명의 학생정보 입력
fprintf(fp,"=============================================\n");
fprintf(fp,"     이름                나이  \n");
fprintf(fp,"=============================================\n");
for(i=0;i<SIZE;i++){
	printf("[%2d]번 학생의 이름은?",i+1);
	scanf("%s",name);
	printf("[%2d]번 학생의 나이는?",i+1);
	scanf("%d",&age);
	fprintf(fp,"        %s        %d\n", name,age);//파일에 학생의 이름과 나이 출력하기
}
	printf("%s 파일에 %d명의 학생의 이름과 나이를 저장했습니다\n","input.txt",SIZE);
printf("회원%d명의 나이를 입력하면 파일로 저장합니다.\n", SIZE);
fclose(fp);
}
//파일에서 정보를 읽어 모니터에 출력

void main(){
FILE *fp;
int age,i;
fp=fopen("input.txt","r");
if(fp==NULL){
	printf("input.txt 파일 열기 실패!\n");
	exit(1);//프로그램 종료

}
for(i=0;i<SIZE;i++){
	//printf("[%2d]번 학생의 나이는?",i+1);
	fscanf(fp,"%d",&age);//파일로부터 학생의 나이 입력받기//파일의 정수하나!!!!를 읽어 age에 저장
	//fprintf(fp,"        %s        %d\n", age);//파일에 학생의 이름과 나이 출력하기
	printf("[%2d]번 학생의 나이 : %d세 \n",i+1,age);//모니터에서 학생의 나이를 출력하기

}
printf("=============================================\n");
fclose(fp);
}