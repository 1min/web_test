#include <stdio.h>

double V (int r){
double pi=3.141592;

		return (r*r);
}
double V2 (int r){
double pi=3.141592;

		return (4*pi*(r*r*r));
}double V3 (int r){
double pi=3.141592;

		return (4*pi*(r*r*r)/3);
}
void main(){
	int r1;
	int work;
	printf("�������� �Է��Ͻÿ�.(����):");
	scanf("%d",&r1);
	printf("=============�޴�==========\n");
	printf("1. ���ǳ���\n");
		printf("2. ���� �ѳ��� \n");
		printf("3. ���� ���� \n");
		printf("=========================");
		scanf("%d",&work);
		switch(work){
		case 1: printf("\n\n �������� %d�� ���� ���̴� %.3lf �Դϴ� \n",r1,V(r1));
			break;
		case 2: printf("\n\n �������� %d�� ���� �ѳ��̴� %.3lf �Դϴ� \n",r1,V2(r1));
			break;
		case 3: printf("\n\n �������� %d�� ���� ���Ǵ� %.3lf �Դϴ� \n",r1,V3(r1));
			break;
		default : printf("�߸��Է���\n");
			break;
		}
}