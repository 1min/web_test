#include <stdio.h>
#include <string.h>
#include <conio.h>
void printf_auto(){
	int a=5,b=10;
	{int c = 2;
	 printf("�Լ��� ��� ���� �ڵ� ���� a=%d, b=%d, c=%d\n", a, b, c);
      }
      printf("print_auto �Լ����� �ڵ� ���� a=%d, b=%d\n", a, b);
}

void main1(){
	int a=3,b=4;

	printf("main �Լ����� �ڵ� ���� a=%d,b=%d\n",a,b);
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
   int i;   FILE *fp; // ���� ������ ���� ����

   fp = fopen("DATA.txt","w");  //��Ʈ�� ����
   if(fp == NULL)
   {      printf("can not open file DATA\n");
           return;   }
   for(i=0; data[i]; i++)
          fputc(data[i],fp); // ���Ϸ� �� ���ھ� ����
   fclose(fp);
   printf("DATA ���� ����...\n");
} */

void main4()
{
     char ch;  FILE *fp; //���� ������ ���� ����

    fp = fopen("DATA.txt","r");
   if(fp == NULL)
   {      printf("can not open file DATA\n");
           return;   }

   while((ch=fgetc(fp))!=EOF)  //���Ϸ� ���� �� ���ھ� �б�
         putchar(ch);   //ȭ�鿡 �� ���ڸ� ����Ѵ�
   fclose(fp);
} 

void main5()
{
     int i; char ch, data[]="Hello world...";
   
      FILE *fp; // ���� ������ ����
      fp = fopen("DATA.txt","a");   //�߰����� ��Ʈ�� ����
      for(i=0; data[i]; i++)
          fputc(data[i],fp); // ���Ϸ� ���� �߰� ��Ų��
      fclose(fp);
      fp = fopen("DATA.txt","r");  //�б���� ��Ʈ�� ���� 
      while((ch=fgetc(fp))!=EOF) 
           //��Ʈ������ �� ���� �о� ch�� ����, ������ ���� �ƴϸ� ���
            putchar(ch); // ǥ����¿� ���� ���
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
   {      fputs(str[i],fp);          // ���ڿ��� ���Ͽ� ����
           i++;                        }

   fp=freopen("DATA2","rt",fp);  
         //�̹� ���� ������ �б���� �ٽ� �����Ѵ�
   while(fgets(arr,20,fp)) // ���ڿ��� ���Ͽ��� �о� arr �迭�� ����
         printf("%s",arr);    //fgets() �� ���Ͽ��� ���� ���ϸ� NULL ��ȯ
 }

void main7(){
	int salary1=1000, salary2=2000,cn;
   char name1[20]="���޷�", name2[20]="������";
   char name[20]; int  salary;
   FILE *fp;
   fp=fopen("DATA3.txt","w");
   if(fp == NULL)
   {    return;   }
   fprintf(fp, "%10s %10d \n",name1,salary1); 
   fprintf(fp, "%10s %10d \n",name2,salary2); 

   fp=freopen("DATA3.txt","r", fp);  //�б� ���� �ٽ� ����
   while(1)
   {     cn=fscanf(fp,"%s %d",name, &salary);//���Ͼ� 3��° ��ȸ���� cn�� null(EOF��)�� �׷��� break�� ��������
          if(cn==0 || cn==EOF)   // �Է� ���� ������ ��ȯ 
               break;
          printf("name :%10s , salary :%10d \n",name, salary);
   }
}

void main8(){
	FILE *fp;
   int item[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   int i, t_item[10]={0};

   if((fp=fopen("DATA4","wb"))==NULL)  //�������Ϸ� ����
    {    return;    }

    for(i=0;i<10;i++)
         fwrite(&item[i], sizeof(item[i]), 1, fp);  // ���� ����
    fp=freopen("DATA4","rb",fp); //�б� ���� �ٽ� ����
    for(i=0;i<10;i++)
       fread(&t_item[i], sizeof(t_item[i]), 1, fp);  // ���� ����
    fclose(fp);

    puts("t_item �迭 ");
    for(i=0;i<10;i++)
        printf("%5d",t_item[i]);
    printf("\n");
	getch();
}


	struct S{
         char name[20];
         char tel[20];
         int age;
       } emps[3]={{"�質��","111-1111",23},
                  {"�����","222-2222",6},
                  {"������","333-3333",28} };
void main(void)
{
   FILE *fp;   int i;
   struct S temp;

   if((fp=fopen("DATA5","wb"))==NULL)
   {
       printf("file open error. \n");
       return;   }
   fwrite(emps, sizeof(emps), 1, fp);   //����ü ���� ����ü�迭  ��ä��

   fp=freopen("DATA5","rb",fp);
   while(1)
   {
       if(fread(&temp, sizeof(temp), 1, fp)!=1) 
                  break ; // fread�� ����1, ���� 1�� �ƴ� �� ��ȯ
                             // �����̸� �ݺ��� Ż��
      printf("%s, %s, %d \n", temp.name, temp.tel, temp.age);
   }
   fclose(fp);
} 