#include <stdio.h>
int b;


int sum(){
	b=3;
	printf("hahahaha");
	return b;
}

void main(){
	b=2;
	sum();
	printf("%d",b);
}