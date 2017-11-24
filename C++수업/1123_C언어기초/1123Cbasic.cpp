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

struct lecture c={"c���α׷���",1,2,"������",3432};

printf("%s %d %d \n",c.name,c.credit,c.hour);
printf("��米�� : %s %d \n",c.prof.name,c.prof.number);
}

struct student{
	char name[10];
	double gpa;
};

void main2(){
	struct student s[3]={"������",3.6,"�Ǵپ�",4.5,"������",4.2};
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
	printf("ù��° ���� x,y��ǥ�Է�..");
	scanf("%d %d",&shape1.x,&shape1.y);
	printf("�ι�° ���� x,y��ǥ�Է�..");
	scanf("%d %d",&shape2.x,&shape2.y);
	printf("%d",equal(shape1,shape2));//equal(shape.x,shape.y)
	if(equal(shape1,shape2)==1)
		printf("������ ��ǥ�� �����մϴ�\n");
	else
		printf("������ ��ǥ�� �������� �ʽ��ϴ�.");
	printf("ù��° ���� %d ��и�\n",quadrant(shape1));
	printf("�ι�° ���� %d ��и�\n",quadrant(shape2));
	//�����ͻ��
	if(equal1(&shape1,&shape2)==1)
		printf("������ ��ǥ�� �����մϴ�\n");
	else
		printf("������ ��ǥ�� �������� �ʽ��ϴ�.");
	printf("ù��° ���� %d ��и�\n",quadrant1(&shape1));
	printf("�ι�° ���� %d ��и�\n",quadrant1(&shape2));
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
		printf("���簢�� �Դϴ�.");
	else
		printf("���簢���� �ƴմϴ�.");
}

void main(){
	struct rectangle r;
	printf("�簢���� ������ �� ���� ��ǥ �Է�..");
	scanf("%d %d",&r.p1.x,&r.p1.y);
	printf("�簢���� ���� �Ʒ� ���� ��ǥ �Է�..");
	scanf("%d %d",&r.p2.x,&r.p2.y);
	printf("�簢���� ���̴� %d\n",area(r));
	printf("�簢���� �ѷ��� %d\n",perimeter(r));
	is_square(r);
}

