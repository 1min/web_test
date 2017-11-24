#include <stdio.h>

void main1(){

	struct professor{
	char name[10];
	int number;
};
struct lecture{
	char name[20];
	int credit;
	int hour;
	professor prof;
};

struct lecture c={"c프로그래밍",1,2,"하하하",3432};

printf("%s %d %d \n",c.name,c.credit,c.hour);
printf("담당교수 : %s %d \n",c.prof.name,c.prof.number);
}

struct student{
	char name[10];
	double gpa;
};

void main2(){
	struct student s[3]={"이윤석",3.6,"권다애",4.5,"최지애",4.2};
	struct student *p=s;

	printf("%s %.1f\n",p->name,p->gpa);
	printf("%s %.1f\n",(*(p+2)).name,(*(p+2)).gpa);

}

struct point{
	int x;
	int y;
};

int equal(struct point a,struct point b){ //struct point a,struct point b
	if(a.x==b.x && a.y==b.y)
		return 1;
	else
		return 0;
}

int quadrant(struct point a){ 
	if(a.x>=0&&a.y>=0)
		return 1;
	else if(a.x<0&&a.y>=0)
		return 2;
	else if(a.x<0&&a.y<0)
		return 3;
	else
		return 4;
}

int equal1(struct point *a,struct point *b){ //struct point a,struct point b
	if((*a).x==(*b).x && (*a).y==(*b).y)
		return 1;
	else
		return 0;
}

int quadrant1(struct point *a){ 
	if((*a).x>=0&&(*a).y>=0)
		return 1;
	else if((*a).x<0&&(*a).y>=0)
		return 2;
	else if(a->x<0 && a->y<0)
		return 3;
	else
		return 4;
}


void main3(){
	struct point shape1;
	struct point shape2;
	printf("첫번째 점의 x,y좌표입력..");
	scanf("%d %d",&shape1.x,&shape1.y);
	printf("두번째 점의 x,y좌표입력..");
	scanf("%d %d",&shape2.x,&shape2.y);
	printf("%d",equal(shape1,shape2));//equal(shape.x,shape.y)
	if(equal(shape1,shape2)==1)
		printf("두점의 좌표가 동일합니다\n");
	else
		printf("두점의 좌표가 동일하지 않습니다.");
	printf("첫번째 점은 %d 사분면\n",quadrant(shape1));
	printf("두번째 점은 %d 사분면\n",quadrant(shape2));
	//포인터사용
	if(equal1(&shape1,&shape2)==1)
		printf("두점의 좌표가 동일합니다\n");
	else
		printf("두점의 좌표가 동일하지 않습니다.");
	printf("첫번째 점은 %d 사분면\n",quadrant1(&shape1));
	printf("두번째 점은 %d 사분면\n",quadrant1(&shape2));
}

struct rectangle{
	point p1;
	point p2;
};

int area(struct rectangle r){
	return (r.p1.x-r.p2.x)*(r.p1.y-r.p2.y);

}

int perimeter(struct rectangle r){
	return 2*((r.p1.x-r.p2.x)+(r.p1.y-r.p2.y));
}

void is_square(struct rectangle r){
	if((r.p1.x-r.p2.x)==(r.p1.y-r.p2.y))
		printf("정사각형 입니다.");
	else
		printf("정사각형이 아닙니다.");
}

void main(){
	struct rectangle r;
	printf("사각형의 오른쪽 위 점의 좌표 입력..");
	scanf("%d %d",&r.p1.x,&r.p1.y);
	printf("사각형의 왼쪽 아래 점의 좌표 입력..");
	scanf("%d %d",&r.p2.x,&r.p2.y);
	printf("사각형의 넓이는 %d\n",area(r));
	printf("사각형의 둘레는 %d\n",perimeter(r));
	is_square(r);
}

