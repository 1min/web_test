#include <stdio.h>
#include <Windows.h> // �������������� �������
#include <string.h>//�ý���cls����� ����
#include <conio.h>//getch ����ϱ�����
//#define food_num 100

void prt_menu();//�޴�
void i_budget();//����
void calender(); // �޷� �����Է�
void p_calender(); // �޷� ���
void output();
               
int budget;//�Է¿���

int year, dal, month;//�� �� ��
int f_days, l_days;
int days;
char country_name[30];
int country_air;
int human;
int where_sum = 0;
int stay_sum = 0;
int total;
double air_f; 
double stay_f;
double where_f;

struct where {
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
	calender();
	i_budget();
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
      printf("\t\t\t\t��                    1. ��¥�� ����                    ��\n");
      printf("\t\t\t\t��                    2. üũ����Ʈ                    ��\n");
      printf("\t\t\t\t��                    3. ���� ���                    ��\n");
      printf("\t\t\t\t��                    0. ��     ��                    ��\n");
      printf("\t\t\t\t��                                                    ��\n");
      printf("\t\t\t\t������������������������������������������������������������������������������������������������������������\n");
      scanf("%d", &menu);
      system("cls");
      switch (menu)
      {
      case 1: calender();i_budget(); break;
      case 2: calender(); break;
      case 3: output(); break;
      }

   } while (menu != 0);
}

void i_budget()
{
   int i,j= 0;
   int check;
   struct where whe[100];
   if (days == 0) {
      printf("���� ������ �Էµ��� �ʾҽ��ϴ�.\n �޴����� ������ �Է����ֽʽÿ�.\n");
      return;
   }
   printf("��¥�Է¿��� �Է��Ͻ� �����ϼ��� %d�Դϴ�.\n", days);
   printf("������ �Է��ϼ���: ");
   scanf("%d", &budget);
   printf("������ ������ �����ǥ ������ �Է��Ͻÿ�(1�� ����): ");
   scanf("%s %d", country_name, &country_air);
   printf("�� �ο����� �Է��Ͻÿ� : ");
   scanf("%d", &human);
  
   int s_stay = 0;
   struct stay i_stay[100];
   //struct food b[first_day];
   for (i = 0;s_stay != (days-1); i++) { // days �� �� �� 5�� s_stay�� �����ϼ� ���Ѱ�
      printf("������ ���� �̸��� ������ ��, ������ �Է��Ͻÿ� : (1�α���)");
      scanf("%s %d %d", i_stay[i].name, &i_stay[i].h_day, &i_stay[i].price); // stay.hday�� �� �����ϼ�
      if (s_stay + i_stay[i].h_day > days) {
         printf("ȣ���� ü���Ⱓ�� ��ü ���� �������� �����ϴ�.\n");
         continue;
      }
      s_stay += i_stay[i].h_day;// �� �����ϼ��� ���Ѽ� 
      stay_sum += (i_stay[i].price * i_stay[i].h_day);//���ֱⰣ�� ���ں��� �Ϸ縹��.
   }
     i=0;
    do {
      i++;
      printf("%d��° ������ �̸��� ������ �Է��Ͻÿ� : (1�α���)", i);
      scanf("%s %d", whe[i].name, &whe[i].price);
      where_sum += whe[i].price*human;
      printf("����Ͻ÷��� 1�� �Է��Ͻð�, ���̻� ���� �������� 2�� �Է��Ͻÿ�.\n");
      scanf("%d", &check);
      

   } while (check!=2);

   total = human * (country_air+ stay_sum)+where_sum;
   printf("�ѿ����� %d�Դϴ�.. \n", total);
   air_f=((double)(human * country_air)/budget)*100;
   stay_f=((double)(human *stay_sum)/budget)*100;
   where_f = ((double)(where_sum)/budget)*100;
   if (total > budget)
      printf("�����ʰ��Դϴ� %d��ŭ �����մϴ�\n", total - budget);
   else if (total == budget){
	   printf("==========================\n");
		//printf("�ѿ��� ��� ������ ������ ����Ⱚ%.lf ���ں�%.lf ����%.lf\n",air_f,stay_f,where_f);
   printf("==========================\n");
   printf("����� �� ���½��ϴ�.\n");}
   else{
      printf("������ %d��ŭ �����ϴ�.\n", budget - total);
	 // printf("==========================\n");
	 //printf("�ѿ��� ��� ������ ���� \n����Ⱚ%.lf%% \n���ں�%.lf%%\n ����%.lf%% \n",air_f,stay_f,where_f);
   printf("==========================\n");
   }
   //printf("���� �׷����� ��Ÿ�� ����\n");
   printf("����Ⱚ�� �ѿ����� ���� : %.lf%%, ",air_f);
   for(int i=0;i<air_f/10;i++)
	   printf("��");
    printf("\n������ �ѿ����� ���� : %.lf%%, ",stay_f);
   for(int i=0;i<stay_f/10;i++)
	   printf("��");
    printf("\n������ �ѿ����� ���� : %.lf%%, ",where_f);
   for(int i=0;i<where_f/10;i++)
	   printf("��");
   printf("\n�޴��� �̵��Ϸ��� �ƹ�Ű�� �����ÿ�");
   getch();
   system("cls");
   
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
   printf("������ �Է��Ϸ��� �ƹ�Ű�� �����ÿ�...");
   getch();
   system("cls");
}

void output()
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
   printf("�������\n");
   printf("===========================================\n");
   printf(" �����        ��      �ۼ�Ʈ\n");
   printf("===========================================\n");
   printf("����� ����    %d��      %.lf%% \n",(country_air*human),air_f);
   printf("���� ����      %d��      %.lf%% \n",(where_sum),where_f);
   printf("���� ����      %d��      %.lf%% \n",(stay_sum*human),stay_f);
    //printf("����� ����    %d       \n",country_air*human);
    //printf("���� ����      %d       \n",where_sum);
    //printf("���� ����      %d       \n",stay_sum*human);
   printf("===========================================\n");
   printf("���� ����      %d��      %.lf%% \n",total,(double)(budget/total)*100);
   printf("���� ����      %d��      \n",budget);

   printf("������ �Է��Ϸ��� �ƹ�Ű�� �����ÿ�...");
   getch();
   system("cls");
}