#include <stdio.h>
#include <conio.h>	//getch()�Լ� ���Ǹ� ����
#define SIZE 5		// �迭 ���� �� 5�� ��ũ�� ��� (��ó����)SIZE�� ���� 
#define N 4
/*int main()
{
	int quiz[SIZE]; 		// ���� SIZE���� ������ �迭 ����
	int i, count, sum;		// ���� ���� �ʱ�ȭ!
	double avg;

	// �迭�� �Է�
	printf("%d���� ������ ������� �Է��ϼ���.\n\n", SIZE);
	for (i=0; i<SIZE; i++)
	{
		printf("%d���� ���� ������? ", i + 1);
		//scanf("%d", &quiz[i]);
		scanf("%d", (quiz+i));//&quiz[i]=quiz+i, quiz+i �� �ּҰ�
	}

	// �迭 ��� ���ϱ�
	sum = 0;
	for (i=0; i<SIZE; i++){
		//sum = sum + quiz[i];
		sum = sum + *(quiz+i);}
	
	avg = (double)sum / SIZE; 	

	// ��� �̸��� �� ���ϱ�
	count = 0;
	for (i=0; i<SIZE; i++)
		if (*(quiz+i) < avg)
			count++;

	// ��� ���
	//printf("============================\n");
	//printf("  ��ȣ ����  ��հ��� ����  \n");
	//printf("============================\n");
	//for (i=0; i<SIZE; i++)
	//	printf("   %2d   %2d      %5.1lf\n", i+1, quiz[i], quiz[i] - avg);
	printf("����� ������ �ƹ�Ű�� ��������\n");
	//�ƹ�Ű�� �������� �����ϵ��� ���� �ϳ��� ����
	getch(); //���ڸ� �Է� ���� �� ���� ��� ����
	printf("============================\n");
	printf("��� : %.1lf�� \n", avg);
	printf("============================\n");
	printf("��չ̸� : %d�� \n", count);

	return 0;
}
*/

//�����Ϳ� �Լ�(2)
void sw_ft(int x,int y);///�������� ȣ��
void sw_add(int *x,int*y); // �ּҿ� ���� ȣ��
void main(){
	int x=100,y=200;
	printf("main �Լ����� X=%u,Y=%u \n\n",&x,&y);
	printf("main �Լ����� X=%d,Y=%d \n",x,y);
	sw_ft(x,y);
	printf("sw ������ main �Լ����� X=%d,Y=%d \n",x,y);
	sw_add(&x,&y);
	printf("add ������ main �Լ����� X=%d,Y=%d \n\n",x,y);
	printf("main �Լ����� X=%u,Y=%u \n\n",&x,&y);
}

void sw_ft(int x,int y){
	int temp;
	temp =x;
	x=y;
	y=temp;
	printf("sw_ft �Լ����� X=%d Y=%d",x,y);
}

void sw_add(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("sw_add �Լ����� X=%d Y=%d\n",*x,*y);

}