#include <stdio.h>
#include <string.h>
#include <conio.h>
void printf_auto(){
	int a=5,b=10;
	{int c = 2;
	 printf("함수와 블록 내의 자동 변수 a=%d, b=%d, c=%d\n", a, b, c);
      }
      printf("print_auto 함수에서 자동 변수 a=%d, b=%d\n", a, b);
}

void main1(){
	int a=3,b=4;

	printf("main 함수에서 자동 변수 a=%d,b=%d\n",a,b);
	printf_auto();
}

int n;

void ex(){
	int n=1;
	printf("n=%d\n",n);
}

void main2(){
	printf("n=%d\n",n);
	ex();
}

/*void main3() {
   char ch, data[]="This is a file system test.";
   int i;   FILE *fp; // 파일 포인터 변수 선언

   fp = fopen("DATA.txt","w");  //스트림 연결
   if(fp == NULL)
   {      printf("can not open file DATA\n");
           return;   }
   for(i=0; data[i]; i++)
          fputc(data[i],fp); // 파일로 한 문자씩 저장
   fclose(fp);
   printf("DATA 파일 저장...\n");
} */

void main4()
{
     char ch;  FILE *fp; //파일 포인터 변수 선언

    fp = fopen("DATA.txt","r");
   if(fp == NULL)
   {      printf("can not open file DATA\n");
           return;   }

   while((ch=fgetc(fp))!=EOF)  //파일로 부터 한 문자씩 읽기
         putchar(ch);   //화면에 한 문자를 출력한다
   fclose(fp);
} 

void main5()
{
     int i; char ch, data[]="Hello world...";
   
      FILE *fp; // 파일 포인터 선언
      fp = fopen("DATA.txt","a");   //추가모드로 스트림 연결
      for(i=0; data[i]; i++)
          fputc(data[i],fp); // 파일로 문자 추가 시킨다
      fclose(fp);
      fp = fopen("DATA.txt","r");  //읽기모드로 스트림 연결 
      while((ch=fgetc(fp))!=EOF) 
           //스트림에서 한 문자 읽어 ch에 저장, 파일의 끝이 아니면 출력
            putchar(ch); // 표준출력에 문자 출력
   printf("\n");
   fclose(fp);
}

void main6(){
  char *str[]={"kingdom\n", "king\n","queen\n",
                     "prince\n","princess\n", NULL };
   char arr[20];   FILE *fp;   int i=0;

   if((fp=fopen("DATA2","wt"))==NULL)
   {   return;   } 

   while(str[i])
   {      fputs(str[i],fp);          // 문자열을 파일에 저장
           i++;                        }

   fp=freopen("DATA2","rt",fp);  
         //이미 열린 파일을 읽기모드로 다시 오픈한다
   while(fgets(arr,20,fp)) // 문자열을 파일에서 읽어 arr 배열에 저장
         printf("%s",arr);    //fgets() 는 파일에서 읽지 못하면 NULL 반환
 }

void main7(){
	int salary1=1000, salary2=2000,cn;
   char name1[20]="진달래", name2[20]="개나리";
   char name[20]; int  salary;
   FILE *fp;
   fp=fopen("DATA3.txt","w");
   if(fp == NULL)
   {    return;   }
   fprintf(fp, "%10s %10d \n",name1,salary1); 
   fprintf(fp, "%10s %10d \n",name2,salary2); 

   fp=freopen("DATA3.txt","r", fp);  //읽기 모드로 다시 연다
   while(1)
   {     cn=fscanf(fp,"%s %d",name, &salary);//와일안 3번째 순회에서 cn이 null(EOF가)됨 그래서 break로 빠져나옴
          if(cn==0 || cn==EOF)   // 입력 값의 개수를 반환 
               break;
          printf("name :%10s , salary :%10d \n",name, salary);
   }
}

void main8(){
	FILE *fp;
   int item[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   int i, t_item[10]={0};

   if((fp=fopen("DATA4","wb"))==NULL)  //이진파일로 연다
    {    return;    }

    for(i=0;i<10;i++)
         fwrite(&item[i], sizeof(item[i]), 1, fp);  // 파일 저장
    fp=freopen("DATA4","rb",fp); //읽기 모드로 다시 연다
    for(i=0;i<10;i++)
       fread(&t_item[i], sizeof(t_item[i]), 1, fp);  // 파일 읽음
    fclose(fp);

    puts("t_item 배열 ");
    for(i=0;i<10;i++)
        printf("%5d",t_item[i]);
    printf("\n");
	getch();
}


	struct S{
         char name[20];
         char tel[20];
         int age;
       } emps[3]={{"김나리","111-1111",23},
                  {"까꿍이","222-2222",6},
                  {"개나리","333-3333",28} };
void main(void)
{
   FILE *fp;   int i;
   struct S temp;

   if((fp=fopen("DATA5","wb"))==NULL)
   {
       printf("file open error. \n");
       return;   }
   fwrite(emps, sizeof(emps), 1, fp);   //구조체 저장 구조체배열  통채로

   fp=freopen("DATA5","rb",fp);
   while(1)
   {
       if(fread(&temp, sizeof(temp), 1, fp)!=1) 
                  break ; // fread는 성공1, 실패 1이 아닌 값 반환
                             // 실패이면 반복문 탈출
      printf("%s, %s, %d \n", temp.name, temp.tel, temp.age);
   }
   fclose(fp);
} 