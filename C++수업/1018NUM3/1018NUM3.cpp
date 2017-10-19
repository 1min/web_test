#include <stdio.h>
#include <stdlib.h>//cls��
#include <conio.h>//getch�� �ܼ� ��ǲ�ƿ�ǲ ��� 1018

int balance;
void print_menu();
int check_pw();
void display_balance();
void deposit();
void withdraw();

void main(){
	int service;
	printf("������� �ý��� ����");
	do{
		print_menu();
		printf("���ϴ� ���񽺸� �����Ͻÿ�");
		scanf("%d",&service);
		switch(service){
		case 1:display_balance();break;
		case 2:deposit();break;
		case 3:withdraw(); break;
		case 4: exit(0); //�����ϴ� exit(0)
		}
		printf("\n��� ���񽺸� ���Ͻø� �ƹ�Ű�� ��������");
		getch();//conio.h�ʿ�
		system("cls");//stdlib.h�ʿ�
	}
	while(service!=4);
}

void print_menu(){
	printf("==============\n");
	printf(" 1.�ܾ���ȸ\n");
	printf(" 2.�Ա�\n");
	printf(" 3.���\n");
	printf(" 4.����\n");
	printf("==============\n");
} 
//�н����� üũ�Լ�
int check_pw(){
	static int cnt=0;
	int input_pw,system_pw=1018;
	int limit_error=3;

	printf("\n��й�ȣ�� �Է��Ͻÿ�");
	scanf("%d",&input_pw);

	if(input_pw==system_pw) return 1;
	else {
		cnt++;
		if(cnt==limit_error){
			printf("��й�ȣ ����3ȸ!!!!\n");
			printf("���࿡ �湮�Ͻñ� �ٶ��ϴ� \n");
		exit(0);}
		else{
			printf("\n ��й�ȣ ����!!!������� �� %dȸ \n",cnt);
			printf("�ٽýõ��Ͻÿ�\n");
			return 0;
		
		}
	}
}
//�ܾ���ȸ�Լ�
void display_balance(){
	if(check_pw()==1)
		printf("\n�����ܾ� : %d��\n",balance);
}
//�Ա��Լ�
void deposit(){
	int Dmoney;
	printf("�Ա��Ͻ� �ݾ���?");
	scanf("%d",&Dmoney);
	balance +=Dmoney;
	printf("\n�Ա��� �����ܾ� : %d �� \n",balance);
}
//����Լ�
void withdraw(){
	int Wmoney;
	if(check_pw()==1){
		printf("����Ͻ� �ݾ���?");
		scanf("%d",&Wmoney);

		if(balance<Wmoney)
			printf("�ܾ׺��� �����ܾ� %d��\n",balance);
		else{
			balance-=Wmoney;
			printf("����� �ܾ��� %d��\n",balance);
		}	
	}
}
