#include <stdio.h>
#include <Windows.h> // �������������� �������
#include <string.h>
#include <conio.h>

void prt_menu();
void i_budget();
void calender(); // �޷� �����Է�
void p_calender(); // �޷� ���

               //���� �Լ�
int budget;
// �޷� �Լ���
int year, dal, month, a_month;
int f_days, l_days;
int days;
char country_name[10];
int country_air;
int human;
int cookies;
int goods;
int food_sum = 0, stay_sum = 0;
int h_sum = 0;
int food_cnt=0;
int food_num=100;

struct food {
   char name[10];
   int  price;
};
struct stay {
   char name[10];
   int  price;
   int h_day;
};
void main()
{
   prt_menu();
}
void prt_menu()
{
   int menu;
   do
   {
      printf("\n\n");
      printf("\t\t\t\t��������������������������      M     E     N     U     ����������������������\n");
      printf("\t\t\t\t��                                                    ��\n");
      printf("\t\t\t\t��                    1. ���� �Է�                    ��\n");
      printf("\t\t\t\t��                    2. ��¥ �Է�                    ��\n");
      printf("\t\t\t\t��                    6. ���� ���                    ��\n");
      printf("\t\t\t\t��                    0. ��     ��                    ��\n");
      printf("\t\t\t\t��                                                    ��\n");
      printf("\t\t\t\t������������������������������������������������������������������������������������������������������������\n");
      scanf("%d", &menu);
      system("cls");
      switch (menu)
      {
      case 1: i_budget(); break;
      case 2: calender(); break;
         //case 3: p_calender(); break;
      }

   } while (menu != 0);
}

void i_budget()
{
   int i, j;
   if (days == 0) {
      printf("���� ������ �Էµ��� �ʾҽ��ϴ�.\n �޴����� ������ �Է����ֽʽÿ�.\n");
      return;
   }
   printf("��¥�Է¿��� �Է��Ͻ� ���� �Ⱓ�� �ϼ��� %d�Դϴ�.\n", days);
   printf("�� ������ �Է��Ͻÿ� : ");
   scanf("%d", &budget);
   printf("������ ������ �����ǥ ������ �Է��Ͻÿ�.: ");
   scanf("%s %d", country_name, &country_air);
   printf("�� �ο����� �Է��Ͻÿ� : ");
   scanf("%d", &human);
   /*printf("��߳�¥�� �Է��Ͻÿ�");
   scanf("%d",&first_day);
   printf("������¥�� �Է��Ͻÿ�");
   scanf("%d",&last_day);*/
  // printf("������ ���� �Է��Ͻÿ� : ");
  // scanf("%d", &food_num);
   //printf("�ִ� %d��ŭ ������ ������ �ֽ��ϴ�\n",food_num);
   typedef struct food FOOD;
   FOOD *foods;
   foods = (FOOD *)malloc(sizeof(FOOD)*food_num);
   int check;
   for (i = 0; i<food_num; i++) {
      printf("������ �̸��� ������ �Է��Ͻÿ� : ");
      scanf("%s %d", foods[i].name, &foods[i].price);
      food_sum += foods[i].price;
	  food_cnt++;
	  printf("����Ͻ÷��� �ƹ�Ű�� �Է��Ͻð�, ���̻� ���� �������� 2�� �Է��Ͻÿ�.\n");
	  scanf("%d",&check);
	  if(check==2)
		  break;
   }
   typedef struct stay STAY;
   STAY *stays;
   stays = (STAY *)malloc(sizeof(STAY)*days);
   //struct food b[first_day];
   for (i = 0; h_sum != days; i++) {
      printf("������ ���� �̸��� ������ ��, ������ �Է��Ͻÿ� : ");
      scanf("%s %d %d", stays[i].name, &stays[i].h_day, &stays[i].price);
      if (h_sum + stays[i].h_day>days) {
         printf("ȣ���� ü���Ⱓ�� ��ü ���� �������� �����ϴ�.\n");
         continue;
      }
      h_sum += stays[i].h_day;
      stay_sum += (stays[i].price*stays[i].h_day);
   }
   printf("���ĺ� �Է��Ͻÿ� : ");
   scanf("%d", &cookies);
   printf("���ǰ�� �Է��Ͻÿ� : ");
   scanf("%d", &goods);
   int total = human*country_air + cookies + goods + (food_sum*human) + (stay_sum*human);
   printf("�ѿ����� %d�Դϴ�.. \n", total);
   if (total>budget)
      printf("�����ʰ��Դϴ� %d��ŭ �����մϴ�\n", total - budget);
   else if (total == budget)
      printf("����� �� ���½��ϴ�.\n");
   else
      printf("������ %d��ŭ �����ϴ�.\n", budget - total);

   /*printf("������ �Է��Ͻÿ�...");
   scanf("%d", &budget);
   for(i=0;i<10;i++){
   for(j=0;j<10;j++){
   printf("��");
   }
   printf("\n");
   }*/
}

void calender()
{
   printf("��,���� �Է��ϼ���: ");
   scanf("%d %d", &year, &month);
   printf("���³�¥�� ���³�¥ �Է��ϼ���: ");
   scanf("%d %d", &f_days, &l_days);
  days = l_days - f_days + 1;
   p_calender();

}

void p_calender()
{
   int i, j, dal;
   int total_day = 0, total_1, total_2;
   total_1 = 0;
   total_2 = 1;
   int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
   int next, back;
   for (i = 0; i < year - 1; i++) // �˰��� 1
   {
      if ((((i + 1) % 4) == 0 && (((i + 1) % 100) != 0)) || (((i + 1) % 400) == 0))
         dal = 366;
      else
      {
         dal = 365;
      }
      total_1 += dal;
   }

   for (i = 0; i < month - 1; i++) // �˰��� 2

   {
      if (((year % 4) == 0 && ((year % 100) != 0)) || ((year % 400) == 0))
         months[1] = 29;
      else
      {
         months[1] = 28;
      }
      total_2 += months[i];
   }

   total_day = total_1 + total_2; // ���ϼ�
   printf("\n");
   printf("�� %d�� �����Դϴ�.\n", days);
   printf("             %d�� %d��\n", year, month);
   printf("------------------------------------\n");
   printf("   SUN  MON  TUE  WED  THU  FRI  SAT\n");
   printf("------------------------------------\n");

   for (i = 1; i <= (((total_day % 7) % 7)); i++) // ���� �߰�
      printf("     ");

   for (i = 1; i <= months[month - 1]; i++)
   {
      if (f_days == i) {
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
      }
      else if (l_days + 1 == i) {
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
      }
      printf("%5d", i);
      if ((i + (total_day % 7)) % 7 == 0)
         printf("\n");
   }
   printf("\n");
   printf("\n");
   printf("�޴��� ���ư����� �ƹ�Ű�� �����ÿ�...");
   getch();
   system("cls");
}