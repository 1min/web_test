#include <stdio.h>
int a=4;
int x=5;
struct rectangle
{
	int width,height,area;
};

int main1(){
	rectangle r1 = {3,7},r2={2,5};
	int larger;
	r1.area= r1.width * r1.height;
	r2.area= r2.width * r2.height;
	printf("더큰 사각형의 면적은 %d 입니다.",r1.area);
	return 0;
}
void z(){
	x=3;
}
void main(){
	a=3;
	z();
	printf("%d %d",a,x);
}