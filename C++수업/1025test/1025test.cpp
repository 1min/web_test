#include <stdio.h>

void main()
{

 //[1]Input
 int intNum[5] = {33,22,11,55,44};
  
 int rankArray[5];
 int i, j;

 int rank =0;     //����� ������ ����

 //[2]Process 
 for(i=0; i<5 ; i++)
 {
  rank = 1;    //��� �����͸� 1������ �ʱ�ȭ!!

  for(j=0; j<5; j++)
  {
   if(intNum[i] < intNum[j])
   {
    rank++; // ������ ū���� ������ ���� ����!
   }
   rankArray[i] = rank;   //������ ��� 
  }
 }

 //[3]Output
 printf("����\t ��� \n");
 for(i=0; i<5; i++)
 {
  printf("%7d %7d\n", intNum[i], rankArray[i]);
 }
}