#include<stdio.h>
#include<conio.h>

void main(){
int n;
int sum =0;
int i;
clrscr();
printf("Enter the last number :");
scanf("%d",&n);
for(i=1;i<=n;i++){
sum+=i;
}
printf("%d\n",sum);

getch();
}