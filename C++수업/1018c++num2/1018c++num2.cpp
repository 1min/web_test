#include<stdio.h> //�������� �����ϱ�
//find_pw,find_id ���񽺿�û Ƚ���� ���� ���α׷�
//do~while�� ���
static int cnt_service;
char name[]="Quize";

void find_pw();
void find_id();
void main(){
	int service;//����� ��û ���� ��ȣ
	
	do{//����ڰ� �׸��Ѷ����� ����Ѵ� do while��
		//�޴����
		printf("\n>>>> 1. IDã�� 2. PWã�� 3.����<<<<<");
		printf("���ϴ� �޴��� �����Ͻÿ� (1-3)");
		scanf("%d",&service);
		switch(service){
		case 1:find_id(); break;
		case 2:find_pw();
		}
	}
	while(service !=3);
}

void find_pw(){
	static int cnt_pw=0;//������ �ʱ�ȭ0
	cnt_pw++;
	cnt_service++;
	printf("\n�� %s������ ��ü���� ��û �Ǽ� : %d��, ��й�ȣ ã�� ��û�Ǽ� %d ��",name,cnt_service,cnt_pw);

}

void find_id(){
	static int cnt_id=0;//������ �ʱ�ȭ0
	cnt_id++;
	cnt_service++;
	printf("\n�� %s������ ���� ��ü��û �Ǽ� : %d��, ���̵� ã�� ��û�Ǽ� %d ��",name,cnt_service,cnt_id);
}