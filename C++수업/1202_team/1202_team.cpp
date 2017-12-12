#include <stdio.h>
#include <Windows.h> // 색깔입히기위한 헤더파일
#include <string.h>
#include <conio.h>

void prt_menu();
void i_budget();
void calender(); // 달력 정보입력
void p_calender(); // 달력 출력

               //예산 함수
int budget;
// 달력 함수들
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
      printf("\t\t\t\t┌────────────      M     E     N     U     ──────────┐\n");
      printf("\t\t\t\t│                                                    │\n");
      printf("\t\t\t\t│                    1. 예산 입력                    │\n");
      printf("\t\t\t\t│                    2. 날짜 입력                    │\n");
      printf("\t\t\t\t│                    6. 최종 출력                    │\n");
      printf("\t\t\t\t│                    0. 종     료                    │\n");
      printf("\t\t\t\t│                                                    │\n");
      printf("\t\t\t\t└────────────────────────────────────────────────────┘\n");
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
      printf("아직 일정이 입력되지 않았습니다.\n 메뉴에서 일정을 입력해주십시오.\n");
      return;
   }
   printf("날짜입력에서 입력하신 여행 기간의 일수는 %d입니다.\n", days);
   printf("총 예산을 입력하시오 : ");
   scanf("%d", &budget);
   printf("여행할 국가와 비행기표 가격을 입력하시오.: ");
   scanf("%s %d", country_name, &country_air);
   printf("총 인원수를 입력하시오 : ");
   scanf("%d", &human);
   /*printf("출발날짜를 입력하시오");
   scanf("%d",&first_day);
   printf("도착날짜를 입력하시오");
   scanf("%d",&last_day);*/
  // printf("맛집의 수를 입력하시오 : ");
  // scanf("%d", &food_num);
   //printf("최대 %d만큼 맛집을 넣을수 있습니다\n",food_num);
   typedef struct food FOOD;
   FOOD *foods;
   foods = (FOOD *)malloc(sizeof(FOOD)*food_num);
   int check;
   for (i = 0; i<food_num; i++) {
      printf("맛집의 이름과 가격을 입력하시오 : ");
      scanf("%s %d", foods[i].name, &foods[i].price);
      food_sum += foods[i].price;
	  food_cnt++;
	  printf("계속하시려면 아무키나 입력하시고, 더이상 적지 않으려면 2를 입력하시오.\n");
	  scanf("%d",&check);
	  if(check==2)
		  break;
   }
   typedef struct stay STAY;
   STAY *stays;
   stays = (STAY *)malloc(sizeof(STAY)*days);
   //struct food b[first_day];
   for (i = 0; h_sum != days; i++) {
      printf("숙박할 곳의 이름과 거주일 수, 가격을 입력하시오 : ");
      scanf("%s %d %d", stays[i].name, &stays[i].h_day, &stays[i].price);
      if (h_sum + stays[i].h_day>days) {
         printf("호텔의 체류기간이 전체 여행 일정보다 많습니다.\n");
         continue;
      }
      h_sum += stays[i].h_day;
      stay_sum += (stays[i].price*stays[i].h_day);
   }
   printf("간식비를 입력하시오 : ");
   scanf("%d", &cookies);
   printf("기념품비를 입력하시오 : ");
   scanf("%d", &goods);
   int total = human*country_air + cookies + goods + (food_sum*human) + (stay_sum*human);
   printf("총예산은 %d입니다.. \n", total);
   if (total>budget)
      printf("예산초과입니다 %d만큼 부족합니다\n", total - budget);
   else if (total == budget)
      printf("예산과 딱 들어맞습니다.\n");
   else
      printf("예산이 %d만큼 남습니다.\n", budget - total);

   /*printf("예산을 입력하시오...");
   scanf("%d", &budget);
   for(i=0;i<10;i++){
   for(j=0;j<10;j++){
   printf("■");
   }
   printf("\n");
   }*/
}

void calender()
{
   printf("년,월을 입력하세요: ");
   scanf("%d %d", &year, &month);
   printf("가는날짜와 오는날짜 입력하세요: ");
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
   for (i = 0; i < year - 1; i++) // 알고리즘 1
   {
      if ((((i + 1) % 4) == 0 && (((i + 1) % 100) != 0)) || (((i + 1) % 400) == 0))
         dal = 366;
      else
      {
         dal = 365;
      }
      total_1 += dal;
   }

   for (i = 0; i < month - 1; i++) // 알고리즘 2

   {
      if (((year % 4) == 0 && ((year % 100) != 0)) || ((year % 400) == 0))
         months[1] = 29;
      else
      {
         months[1] = 28;
      }
      total_2 += months[i];
   }

   total_day = total_1 + total_2; // 총일수
   printf("\n");
   printf("총 %d일 여행입니다.\n", days);
   printf("             %d년 %d월\n", year, month);
   printf("------------------------------------\n");
   printf("   SUN  MON  TUE  WED  THU  FRI  SAT\n");
   printf("------------------------------------\n");

   for (i = 1; i <= (((total_day % 7) % 7)); i++) // 공백 추가
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
   printf("메뉴로 돌아가려면 아무키나 누르시오...");
   getch();
   system("cls");
}