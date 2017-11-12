#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
	char first[10]= "GilDong", last[10]="Hong";

	printf("자리를 변환할 두 이름을 입력하십시오\n");
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
	printf("문자열을 입력하시오 : ");
	gets(s);

	p=s;
	while (*p !='\0')
	{
		*p = toupper(*p);
		p++;
	}//널이 안뜰때까지
	printf("대문자로 변환한 결과 : %s\n",s);

	for(i=0;i<strlen(s);i++)
	{
		s[i]=tolower(s[i]);
	}
	printf("소문자로 변환한 결고 : %s\n",s);

}