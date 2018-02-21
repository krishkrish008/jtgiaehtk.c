#include<stdio.h>
#include<conio.h>
void main()
{
int aa,bb=0,cc=1,i,dd;
clrscr();
printf("\nEnter value upto n terms");
scanf("%d",&aa);
printf("\nFIBONACCI SERIES");
for(i=0;i<=aa;++i)
{
printf("\n%d",bb);
dd=bb+cc;
bb=cc;
cc=dd;
}
getch();
}
