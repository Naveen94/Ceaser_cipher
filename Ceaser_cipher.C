#include<stdio.h>
#include<conio.h>
#include<string.h>
char a[100];
void getString();
void Ceaser();
void printString();
int main()
{
clrscr();
getString();
printf("The Entered String is %s\n",a);
Ceaser();
printString();
getch();
return 0;
}
void getString()
{
printf("Enter the String\n");
gets(a);
}
void Ceaser()
{
int k,t,i;
printf("Enter Key Value..\n");
scanf("%d",&k);
for (i=0;i<strlen(a);i++)
{
int temp=a[i]+k;
if(a[i]==32)
continue;
else if(temp<=122)
{
a[i]=a[i]+k;
}
else
{
t=k;
while(t>0)
{
if(a[i]<122)
{
a[i]=a[i]+1;
t--;
}
else
a[i]=97;
}
}
}
}
void printString()
{
printf(" \n The Encrypted String %s ",a);
}
