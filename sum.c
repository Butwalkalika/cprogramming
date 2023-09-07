#include <stdio.h>
#include <conio.h>
int main(){
/*
1 wap to calculate area of rectengle
2 wap to swap
3 wap to take 2 input and perfome arthometic operation*/
//1 ans
	float length;
	float breath;
	printf("enter length and breath");
	scanf("%f%f",&length,&breath);
	printf("area of rectangle %f \n",length * breath);
//2 ans
	length = length + breath;
	breath = length - breath;
	length = length - breath;
	printf("%f %f \n",length,breath);
//3ans
	float first,second;
	printf("input any two number \n");
	scanf("%f%f",&first,&second);
	float sum = first + second;
	float diff = first - second;
	float mux = first * second;
	float div = first / second;
	printf("Sum= %f  \ndiffrent= %f \nmultipilication=%f \ndivision= %f ",
	sum , diff,mux,div);
	
	return 0;
}