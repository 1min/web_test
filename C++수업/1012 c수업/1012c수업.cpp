#include <stdio.h>
#include <math.h>

void main0(void){
	int a[10]={5,2 };
	a[0]=5;
	a[1]=2;
	int arr[3]={3,4,5};//4��°���� �����Ⱚ�� ��
	int i;
	int z=4;
	int x=97;
	printf("%.f %c",sqrt((float)z),x);
	printf("������\n=============\n");
	for(i=0;i<5;i++){
		printf("%u \t %d \n",&a[i],a[i]);
		printf("%d��° �迭%d \n",i+1, arr[i]);
	}
}

	void main2(void){
	int a[5];
	int i;
	for(i=0;i<5;i++)
		a[i]=i*2;
	for(i=0;i<5;i++)
		printf("a[%d]=%d\n",i,a[i]);
	}

	void main3(){
		int i,j,data[] = {78,55,99,75,84,39,67,98,87,100};
		int temp=0;

	for(i=0;i<9;i++)
		for(j=i+1;j<10;j++){
			if(data[i]>data[j])
			{
			temp=data[i];
			data[i]=data[j];
			data[j]=temp;
			}
		}
	printf("�������Ĺ迭����Ʈ:");
		for(i=0;i<10;i++)
		printf("%3d",data[i]);
	}

	void main10(){
		int i,j,data[] = {78,55,99,75,84,39,67,98,87,100};
		int temp=0; //������ ���൵ ���� �����

	for(j=0;j<9-j;j++){
		for(i=0;i<9;i++){
			if(data[i]>data[i+1])
			{
			temp=data[i];
			data[i]=data[i+1];
			data[i+1]=temp;
			}
		}
	}
	printf("����迭����Ʈ:");
		for(i=0;i<10;i++)
			printf("%3d",data[i]);
	}
	
	void main11(){
		char d[6]="hello";//o���� ���̶��� ������������
		char c[6]={'h','e','\0','l','l','o'}; //\0�� ������� �̿��� �迭���� ����
		char f[9];//�ѱ��̸��� �ѱ��ڴ� 2��Ʈ �׸��� �ѱ��̸���  4�ѱ۱��� ������ �ְ� null��ĭ
		printf("%s",c);
		printf("�̸��� �Է��Ͻÿ�");
		scanf("%s",f); //&�� �迭�� �Ƚᵵ�� �迭�� �迭�� �̸��� �ּ��� ��������
	//gets(name)gets�� ��ĭ�� ���� �ִ�. scanf�� ��ĭ �Ұ��� 
		
		printf("%s %s %s \n",c,d,f);//%s�� ~���� ������� �� " "�� ��ĭ

	}