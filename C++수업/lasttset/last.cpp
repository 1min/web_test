#include <stdio.h>
#include <Windows.h> // 색깔입히기위한 헤더파일
#include <string.h>//시스템cls사용을 위해
#include <conio.h>//getch 사용하기위해
//#define food_num 100

void prt_menu();//메뉴
void i_budget();//예산
void calender(); // 달력 정보입력
void p_calender(); // 달력 출력
void output();
               
int budget;//입력예산

int year, dal, month;//년 일 월
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
      printf("\t\t\t\t┌────────────      M     E     N     U     ──────────┐\n");
      printf("\t\t\t\t│                                                    │\n");
      printf("\t\t\t\t│                    1. 날짜와 예산                    │\n");
      printf("\t\t\t\t│                    2. 체크리스트                    │\n");
      printf("\t\t\t\t│                    3. 최종 출력                    │\n");
      printf("\t\t\t\t│                    0. 종     료                    │\n");
      printf("\t\t\t\t│                                                    │\n");
      printf("\t\t\t\t└────────────────────────────────────────────────────┘\n");
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
      printf("아직 일정이 입력되지 않았습니다.\n 메뉴에서 일정을 입력해주십시오.\n");
      return;
   }
   printf("날짜입력에서 입력하신 여행일수는 %d입니다.\n", days);
   printf("예산을 입력하세요: ");
   scanf("%d", &budget);
   printf("여행할 국가와 비행기표 가격을 입력하시오(1인 기준): ");
   scanf("%s %d", country_name, &country_air);
   printf("총 인원수를 입력하시오 : ");
   scanf("%d", &human);
  
   int s_stay = 0;
   struct stay i_stay[100];
   //struct food b[first_day];
   for (i = 0;s_stay != (days-1); i++) { // days 가 일 수 5면 s_stay가 숙박일수 더한거
      printf("숙박할 곳의 이름과 숙박일 수, 가격을 입력하시오 : (1인기준)");
      scanf("%s %d %d", i_stay[i].name, &i_stay[i].h_day, &i_stay[i].price); // stay.hday가 각 숙박일수
      if (s_stay + i_stay[i].h_day > days) {
         printf("호텔의 체류기간이 전체 여행 일정보다 많습니다.\n");
         continue;
      }
      s_stay += i_stay[i].h_day;// 각 숙박일수를 더한수 
      stay_sum += (i_stay[i].price * i_stay[i].h_day);//거주기간이 숙박보다 하루많다.
   }
     i=0;
    do {
      i++;
      printf("%d번째 일정의 이름과 가격을 입력하시오 : (1인기준)", i);
      scanf("%s %d", whe[i].name, &whe[i].price);
      where_sum += whe[i].price*human;
      printf("계속하시려면 1을 입력하시고, 더이상 적지 않으려면 2를 입력하시오.\n");
      scanf("%d", &check);
      

   } while (check!=2);

   total = human * (country_air+ stay_sum)+where_sum;
   printf("총예산은 %d입니다.. \n", total);
   air_f=((double)(human * country_air)/budget)*100;
   stay_f=((double)(human *stay_sum)/budget)*100;
   where_f = ((double)(where_sum)/budget)*100;
   if (total > budget)
      printf("예산초과입니다 %d만큼 부족합니다\n", total - budget);
   else if (total == budget){
	   printf("==========================\n");
		//printf("총예산 대비 예산은 비율은 비행기값%.lf 숙박비%.lf 일정%.lf\n",air_f,stay_f,where_f);
   printf("==========================\n");
   printf("예산과 딱 들어맞습니다.\n");}
   else{
      printf("예산이 %d만큼 남습니다.\n", budget - total);
	 // printf("==========================\n");
	 //printf("총예산 대비 예산은 비율 \n비행기값%.lf%% \n숙박비%.lf%%\n 일정%.lf%% \n",air_f,stay_f,where_f);
   printf("==========================\n");
   }
   //printf("막대 그래프로 나타낸 비율\n");
   printf("비행기값의 총예산대비 비율 : %.lf%%, ",air_f);
   for(int i=0;i<air_f/10;i++)
	   printf("◇");
    printf("\n숙박의 총예산대비 비율 : %.lf%%, ",stay_f);
   for(int i=0;i<stay_f/10;i++)
	   printf("♬");
    printf("\n일정의 총예산대비 비율 : %.lf%%, ",where_f);
   for(int i=0;i<where_f/10;i++)
	   printf("☆");
   printf("\n메뉴로 이동하려면 아무키나 누르시오");
   getch();
   system("cls");
   
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
   printf("예산을 입력하려면 아무키나 누르시오...");
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
   printf("예산출력\n");
   printf("===========================================\n");
   printf(" 예산명        돈      퍼센트\n");
   printf("===========================================\n");
   printf("비행기 예산    %d원      %.lf%% \n",(country_air*human),air_f);
   printf("일정 예산      %d원      %.lf%% \n",(where_sum),where_f);
   printf("숙박 예산      %d원      %.lf%% \n",(stay_sum*human),stay_f);
    //printf("비행기 예산    %d       \n",country_air*human);
    //printf("일정 예산      %d       \n",where_sum);
    //printf("숙박 예산      %d       \n",stay_sum*human);
   printf("===========================================\n");
   printf("여행 예산      %d원      %.lf%% \n",total,(double)(budget/total)*100);
   printf("소유 예산      %d원      \n",budget);

   printf("예산을 입력하려면 아무키나 누르시오...");
   getch();
   system("cls");
}