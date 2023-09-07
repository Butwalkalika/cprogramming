#include<stdio.h>
#include<conio.h>
int main(){
	int second;
	printf("enter a second");
	scanf("%d",&second);
	int min = second / 60;
	int hour = min / 60;
	int sec = second /3600;
	
	printf("%d:%d:%d",hour,min,sec);
	return 0;
}