#include<stdio.h>
#include<conio.h>
void main()
{
int aa,bb;
clrscr();
printf("\nEnter value of aa");
scanf("%d",&aa);
printf("\nEnter value of bb");
scanf("%d",&bb);
printf("\nValues before swapping");
printf("\naa is %d\nbb is %d",aa,bb);
aa=aa ^ bb;
bb=aa ^ bb;
aa=aa ^ bb;
printf("\nAfter swapping\nValue of aa=%d\nValue of bb=%d",aa,bb);
getch();
}
