#include <stdio.h>

void main1(){
int var = 100;
int *ptr;
ptr=&var;//var�� �ּ���ġ

printf("���� var�� %d\n",var);
printf("���� var��(�����������) %d\n",*ptr);
//�ּ����
printf("���� var�� �ּ� %u(%p)\n",&var,&var);//%u�� (unsign ��ȣ���� ����) ������ ��� %p�� 16���� �ּ�
printf("������ ����  ptr�� ����� �ּ�: %u(%p)\n",ptr,ptr);
printf("������ ���� �ּ�: %u(%p)",&ptr,&ptr);
}

void main2(){
	int a=100,b=200,temp;
	int *pt1,*pt2,*pt_temp;
	
	pt1=&a;// a�� �ּ� ����
	pt2=&b;// b�� �ּ� ����
	printf("a=%d b=%d\n",a,b);
	printf("*pt1=%d, *pt2=%d \n",*pt1,*pt2);
	printf("a,b�� �ּҰ� &a=%p &b=%p \n",pt1,pt2);
	printf("������ ������ �ּҰ� &pt1=%p, &pt2=%p \n\n",&pt1,&pt2);

	//a,b�� ��ȯ
	temp=a; //�����ͷ� a,b�� �ٲٱ�
	a=b;
	b=temp;
	printf("����ȯ�� a=%d b=%d\n",a,b);
	//pt1�� pt2�� ����Ű�� ���� ����� �� ���� �ٲٱ� 
	printf("pt1�� pt2�� ����Ű�� ���� ����� �� ���� �ٲٱ�");
	a=100,b=200;
	temp=*pt1;//�Ϲݺ����� *������
	*pt1=*pt2;
	*pt2=temp;//�ּҰ��� �ٲ۰� �ƴ϶� ���� �����ͷ� �ٲ�
	printf("����ȯ�� a=%d b=%d\n",a,b);
	printf("*pt1=%d, *pt2=%d \n",*pt1,*pt2);
	printf("a,b�� �ּҰ� &a=%p &b=%p \n\n\n",pt1,pt2);
	//printf("������ ������ �ּҰ� &pt1=%p, &pt2=%p \n",&pt1,&pt2);
	//pt1�� pt2�� ����� �ּ� �ٲٱ�
	a=100;b=200;
	printf("pt1�� pt2�� ����� �ּ� �ٲٱ�");
	pt_temp=pt1;//�������� ���� �ٲ㼭 a,b�� ������ �ݴ��
	pt1=pt2;
	pt2=pt_temp;
	printf("����ȯ�� a=%d b=%d\n",a,b);
	printf("*pt1=%d, *pt2=%d \n",*pt1,*pt2);
}

void main(){
	int a=100,b=200;
	int *pt1,*pt2;
	char ch='k', *pt3;
	double ff=0.7,*pt4;

	pt3=&ch;
	pt4=&ff;
	pt1=&a;// a�� �ּ� ����
	pt2=&b;// b�� �ּ� ����
	printf("*pt1=%d, *pt2=%d *pt3=%c *pt4=%lf \n",*pt1,*pt2,*pt3,*pt4);
	printf("a,b ch ff�� �ּҰ� &a=%u &b=%u ch %u ff %u \n\n\n",pt1,pt2,pt3,pt4);
	(*pt1)++;
	(*pt2)++;
	(*pt3)++;
	(*pt4)++;
	printf("pt1 ++������:%d\n",*pt1); // ++��ġ����
	printf("pt2 ++������:%d\n",*pt2);
	printf("pt3 ++������:%c\n\n",*pt3);
	printf("pt4 ++������:%lf\n\n",*pt4);
	
	pt1++;
	pt2++;
	printf("pt1 ++������:%u\n",pt1); // ++��ġ����
	printf("pt2 ++������:%u\n",pt2);
	printf("pt3 ++������:%u\n\n",++pt3);
	printf("pt4 ++������:%u\n\n",++pt4);

	/*
	(*pt1)++;//*pt1++�ϸ�ȵ�
	printf("pt1 ++������:%d\n",++(*pt1)); // ++��ġ����
	printf("pt1 ++������:%u\n",pt1++);
	printf("pt1 ++������:%u\n\n",pt1);
	*/
}