#include <stdio.h>//fopen,fclose,fprintf
#include <stdlib.h>//exit �Լ� 
#define SIZE 5
//5���� ������ �Է¹޾� ����ϱ� 
int main1(){

FILE *fp;
//char *f_name = "age.txt";
int age,i;
char name[20];
fp= fopen("input.txt","w");

if(fp==NULL){
	printf("input.txt ���� ���� ����!\n");
	exit(1);//���α׷� ����

}
//������ ó���ϱ�
//5���� �л����� �Է�
fprintf(fp,"=============================================\n");
fprintf(fp,"     �̸�                ����  \n");
fprintf(fp,"=============================================\n");
for(i=0;i<SIZE;i++){
	printf("[%2d]�� �л��� �̸���?",i+1);
	scanf("%s",name);
	printf("[%2d]�� �л��� ���̴�?",i+1);
	scanf("%d",&age);
	fprintf(fp,"        %s        %d\n", name,age);//���Ͽ� �л��� �̸��� ���� ����ϱ�
}
	printf("%s ���Ͽ� %d���� �л��� �̸��� ���̸� �����߽��ϴ�\n","input.txt",SIZE);
printf("ȸ��%d���� ���̸� �Է��ϸ� ���Ϸ� �����մϴ�.\n", SIZE);
fclose(fp);
}
//���Ͽ��� ������ �о� ����Ϳ� ���

void main(){
FILE *fp;
int age,i;
fp=fopen("input.txt","r");
if(fp==NULL){
	printf("input.txt ���� ���� ����!\n");
	exit(1);//���α׷� ����

}
for(i=0;i<SIZE;i++){
	//printf("[%2d]�� �л��� ���̴�?",i+1);
	fscanf(fp,"%d",&age);//���Ϸκ��� �л��� ���� �Է¹ޱ�//������ �����ϳ�!!!!�� �о� age�� ����
	//fprintf(fp,"        %s        %d\n", age);//���Ͽ� �л��� �̸��� ���� ����ϱ�
	printf("[%2d]�� �л��� ���� : %d�� \n",i+1,age);//����Ϳ��� �л��� ���̸� ����ϱ�

}
printf("=============================================\n");
fclose(fp);
}