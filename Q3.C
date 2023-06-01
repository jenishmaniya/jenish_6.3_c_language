#include<stdio.h>
#include<conio.h>

void main(){
int n;
int sum=1;
int i;
clrscr();
printf("Enter the last number :");
scanf("%d",&n);
for(i=1;i<=10;i++){
sum=n*i;
printf("%d * %d = %d\n",n,i,sum);
}

getch();
}