#include <stdio.h>
#include <math.h>

void main0(void){
	int a[10]={5,2 };
	a[0]=5;
	a[1]=2;
	int arr[3]={3,4,5};//4번째부터 쓰레기값이 들어감
	int i;
	int z=4;
	int x=97;
	printf("%.f %c",sqrt((float)z),x);
	printf("하하하\n=============\n");
	for(i=0;i<5;i++){
		printf("%u \t %d \n",&a[i],a[i]);
		printf("%d번째 배열%d \n",i+1, arr[i]);
	}
}

	void main2(void){
	int a[5];
	int i;
	for(i=0;i<5;i++)
		a[i]=i*2;
	for(i=0;i<5;i++)
		printf("a[%d]=%d\n",i,a[i]);
	}

	void main3(){
		int i,j,data[] = {78,55,99,75,84,39,67,98,87,100};
		int temp=0;

	for(i=0;i<9;i++)
		for(j=i+1;j<10;j++){
			if(data[i]>data[j])
			{
			temp=data[i];
			data[i]=data[j];
			data[j]=temp;
			}
		}
	printf("선택정렬배열리스트:");
		for(i=0;i<10;i++)
		printf("%3d",data[i]);
	}

	void main10(){
		int i,j,data[] = {78,55,99,75,84,39,67,98,87,100};
		int temp=0; //생성자 안줘도 딱히 무상관

	for(j=0;j<9-j;j++){
		for(i=0;i<9;i++){
			if(data[i]>data[i+1])
			{
			temp=data[i];
			data[i]=data[i+1];
			data[i+1]=temp;
			}
		}
	}
	printf("버블배열리스트:");
		for(i=0;i<10;i++)
			printf("%3d",data[i]);
	}
	
	void main11(){
		char d[6]="hello";//o끝에 널이란게 감춰져되있음
		char c[6]={'h','e','\0','l','l','o'}; //\0은 여기까지 이외의 배열원소 생략
		char f[9];//한글이름은 한글자당 2비트 그리고 한글이름은  4한글글자 받을수 있고 null한칸
		printf("%s",c);
		printf("이름을 입력하시오");
		scanf("%s",f); //&를 배열을 안써도됨 배열은 배열의 이름이 주소의 역할을함
	//gets(name)gets는 빈칸이 들어갈수 있다. scanf는 빈칸 불가능 
		
		printf("%s %s %s \n",c,d,f);//%s는 ~까지 찍어줘라는 뜻 " "는 네칸

	}