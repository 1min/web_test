#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
	char first[10]= "GilDong", last[10]="Hong";

	printf("�ڸ��� ��ȯ�� �� �̸��� �Է��Ͻʽÿ�\n");
	scanf("%s %s",first,last);
	char temp[10];

	printf("Name:%s %s \n", first,last);

	strcpy(temp,first);
	strcpy(first,last);
	strcpy(last,temp);

	printf("Name:%s %s \n", first, last);
}

void main1(){

	char s[100], *p;
	int i;
	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets(s);

	p=s;
	while (*p !='\0')
	{
		*p = toupper(*p);
		p++;
	}//���� �ȶ㶧����
	printf("�빮�ڷ� ��ȯ�� ��� : %s\n",s);

	for(i=0;i<strlen(s);i++)
	{
		s[i]=tolower(s[i]);
	}
	printf("�ҹ��ڷ� ��ȯ�� ��� : %s\n",s);

}