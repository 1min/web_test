#include <stdio.h>

void main()
{

 //[1]Input
 int intNum[5] = {33,22,11,55,44};
  
 int rankArray[5];
 int i, j;

 int rank =0;     //등수를 저장할 변수

 //[2]Process 
 for(i=0; i<5 ; i++)
 {
  rank = 1;    //모든 데이터를 1등으로 초기화!!

  for(j=0; j<5; j++)
  {
   if(intNum[i] < intNum[j])
   {
    rank++; // 나보다 큰점수 나오면 순위 증가!
   }
   rankArray[i] = rank;   //순위를 기록 
  }
 }

 //[3]Output
 printf("점수\t 등수 \n");
 for(i=0; i<5; i++)
 {
  printf("%7d %7d\n", intNum[i], rankArray[i]);
 }
}