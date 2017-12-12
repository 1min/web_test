#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct employee_info{
	char no[20];
	char name[15];
	int	 children;
	int pay;
	int extra_pay;
	int total;
};

void main1(){
	int i;
	struct employee_info person[5];
	for(i=0;i<5;i++){
		printf("�����ȣ�� �Է��Ͻÿ�");
		scanf("%s",person[i].no);
		printf("�̸��� �Է��Ͻÿ�");
		scanf("%s",person[i].name);
		printf("�ڳ���� �Է��Ͻÿ�");
		scanf("%d",&person[i].children);
		printf("�⺻���� �Է��Ͻÿ�");
		scanf("%d",&person[i].pay);
		if(person[i].children==1)
			person[i].extra_pay=100000;
		else if(person[i].children>=2)
			person[i].extra_pay=200000;
		else if (person[i].children==0)
			person[i].extra_pay=0;
		person[i].total=person[i].pay+person[i].extra_pay;
	}
	printf("�����ȣ   �̸�    �⺻��   �ڳ��   �ڳ����  �����޿�\n");
	printf("=======================================================\n");
	for(int i=0;i<5;i++){
		printf("%s  %s  %d   %d   %d  %d\n",person[i].no,person[i].name,person[i].pay,person[i].children,person[i].extra_pay,person[i].total);
	}
}

int size;

struct employee{
	//�̸�, ����, �߱ٽð�, �⺻ �޿�, ���� �޿�
	char name[10];
	char position[10];
	int night_time;
	int normal_pay;//�⺻�޿�
	int total_pay;//�����޿�
};

void input(struct employee *man){
	
		for(int i=0;i<size;i++){
			printf("�̸��� �Է��Ͻÿ�.");
			scanf("%s",man[i].name);
			printf("������ �Է��Ͻÿ�.");
			scanf("%s",man[i].position);
			printf("�߱ٽð��� �Է��Ͻÿ�.");
			scanf("%d",&man[i].night_time);
		}

}

void basic_pay(struct employee *man){
	for(int i=0; i<size;i++){
		if (strcmp(man[i].position,"����")==0)
			man[i].normal_pay=  3000000;
		else if(strcmp(man[i].position,"�븮")==0)
			man[i].normal_pay= 2000000;
		else
			man[i].normal_pay= 1500000;
	}
}

void total_pay(struct employee *man){
	for(int i=0; i<size;i++){
		if (strcmp(man[i].position,"����")==0)
			man[i].total_pay=man[i].normal_pay*1.1+(20000*man[i].night_time);
		else if(strcmp(man[i].position,"�븮")==0)
			man[i].total_pay=man[i].normal_pay*1.07+(20000*man[i].night_time);
		else
			man[i].total_pay=man[i].normal_pay*1.05+(20000*man[i].night_time);
	}
}

void output(struct employee *man){
	printf("�̸� ���� �߱ٽð� �⺻�޿� �����޿�\n");
	printf("====================================\n");
	for(int i=0;i<size;i++){
		printf("�̸�%s ����%s �߱ٽð�%d �⺻�޿�%d �����޿�%d \n",
			man[i].name,man[i].position,man[i].night_time,man[i].normal_pay,man[i].total_pay);

	}

}

void max_pay(struct employee *man){
	int i,j;
	struct employee temp={"\0"};
	for(i=0;i<size-1;i++)
		for(j=0;j<size-i-j;j++){
			if(man[j].total_pay<man[j+1].total_pay){
				temp=man[j+1];
				man[j+1]=man[j];
				man[j]=temp;}
			
}
		printf("\n�ְ� �޿��ڴ� %s %d",man[0].name,man[0].total_pay);
}

  void main(){
	  printf("����� ����� �Է����� size�� �Է��Ͻÿ�");
	  scanf("%d",&size);
	 typedef struct employee MAN;
	 MAN *man;
	 man = (MAN*)malloc(sizeof(MAN)*size);
	 input(man);
	 basic_pay(man);
	 total_pay(man);
	 output(man);
	 max_pay(man);
	  free(man);
  }