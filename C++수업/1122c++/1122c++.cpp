#include<stdio.h>
#define SIZE 5
#define MAX 100
#include <conio.h>
/*
struct employee_info{//����ü����
	char name[10];
	char id[10];
	int salary;
};

void main1(){
	struct employee_info person[SIZE];//����ü�迭����
	int sum=0,i,avg_salary;
	printf("������ ���� (�̸�,id,�޿�)�� �Է��Ͻÿ�\n");
	printf("(����)����� soo1004 5000\n");

	for(i=0;i<SIZE;i++){//���� 5���� �����Է�
		printf("%d�� �������� : ",i+1);
		scanf("%s %s %d",person[i].name, person[i].id, &person[i].salary);
		sum += person[i].salary;
	}
	avg_salary=sum/SIZE;//��ձ޿����

	printf("--------------------------------\n");
	printf("�޿��� ���(%d����)�̻��� ��������\n",avg_salary);//�޿��� ��� �̻��� �������� ���
	for(i=0;i<SIZE;i++){
		if(person[i].salary>avg_salary){
			printf("%s %d����\n",person[i].id,person[i].salary);
		}

	}
	printf("--------------------------------\n");
	getch();
}

struct person{
	char name[10],gender[4];
	int age;
};

void main2(){
	int i;
	struct person *ptr;//����ü �����ͼ���
	//5���� ����� ���� �Է� ���� ����ü ���� ����
	struct person user[SIZE]={{"������","��",},{"����","��"},{"����","��"},
	{"���޼�","��"},{"������","��"}};
	ptr=user;//�����Ͱ� �迭�� ù��°�� ����Ű���� ��
	//����� ���� �Է�
	for(i=0;i<SIZE;i++){
		printf("%s�� �����Է� : ",ptr->name);
		scanf("%d",&ptr->age);// &ptr->age==(*ptr).age
		ptr++;
	}
	//����� ���� ���
	printf("=======================\n");
	printf(" �̸�   ����   ����   \n");
	printf("=======================\n");
	ptr=user;//ptr+5�� ���¿��� ptr�� ���󺹱� �ʱ�ȭ
	for(i=0;i<SIZE;i++){
		printf("%s   %s   %d\n",ptr->name,ptr->gender,ptr->age);
		ptr++;//�����Ͱ� ���� �迭�� ����Ű���� ��
	}
	printf("=======================\n");
}

void main3(){//������ ��� ����ü �迭 ������
	int i;
	struct person user[SIZE]={{"������","��",},{"����","��"},{"����","��"},
	{"���޼�","��"},{"������","��"}};
	for(i=0;i<SIZE;i++){
		printf("%s�� �����Է� : ",user[i].name);
		scanf("%d",&user[i].age);// &ptr->age==(*ptr).age
	}
	//����� ���� ���
	printf("=======================\n");
	printf(" �̸�   ����   ����   \n");
	printf("=======================\n");
	for(i=0;i<SIZE;i++){
		printf("%s   %s   %d\n",user[i].name,user[i].gender,user[i].age);
	}
	printf("=======================\n");
}

*/
struct person{
	char name[10];
	char gender[4];
	int age;
};

int cnt_data;//cnt_data=0���� ����� ����������

void inputData(struct person info[]){ //�ڷ��Է��Լ�
	int work=1;
	do{
	printf("%d.  �̸�: ",cnt_data+1);
	scanf("%s",info[cnt_data].name);
	printf("���� (�� �Ǵ� ��) : ");
	scanf("%s",info[cnt_data].gender);
	printf(" ����: ");
	scanf("%d",&info[cnt_data].age);
	cnt_data++;
	if(cnt_data==MAX){
		printf("���̻� �ڷḦ ������ ������ �����ϴ�.\n");
		break;//while�� ������ ��������
	}
	printf("��� �Է��Ϸ��� 1,�׸��Ϸ��� 0�� �Է��Ͻÿ�");
	scanf("%d",&work);
	}
	while(work!=0);
}
void outputData(struct person *arr){ //�ڷ� ����Լ�
	int i;
	printf("=======================\n");
	printf(" �̸�   ����   ����   \n");
	printf("=======================\n");
	for(i=0;i<cnt_data;i++){
		printf("%s   %s   %d\n",arr[i].name,arr[i].gender,arr[i].age);
	}
	printf("=======================\n");
}

void main(){
	struct person user[MAX];
	printf("����� ������ �ִ� %d����� �Է¹ް� ����մϴ�.\n;",MAX);
	
	inputData(user);//�Է� �Լ� ȣ��
	outputData(user);//����Լ� ȣ��
	
}



void main5(){
	int i;
	struct person user[MAX];
	printf("����� ������ �ִ� %d����� �Է¹ް� ����մϴ�.\n;",MAX);
	int work=1;
	do{
	printf("%d.  �̸�: ",cnt_data+1);
	scanf("%s",user[cnt_data].name);
	printf("���� (�� �Ǵ� ��) : ");
	scanf("%s",user[cnt_data].gender);
	printf(" ����: ");
	scanf("%d",&user[cnt_data].age);
	cnt_data++;
	if(cnt_data==MAX){
		printf("���̻� �ڷḦ ������ ������ �����ϴ�.\n");
		break;//while�� ������ ��������
	}
	printf("��� �Է��Ϸ��� 1,�׸��Ϸ��� 0�� �Է��Ͻÿ�");
	scanf("%d",&work);
	}
	while(work!=0);

	//�������
	printf("=======================\n");
	printf(" �̸�   ����   ����   \n");
	printf("=======================\n");
	for(i=0;i<cnt_data;i++){
		printf("%s   %s   %d\n",user[i].name,user[i].gender,user[i].age);
	}
	printf("=======================\n");
}
