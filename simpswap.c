#include<stdio.h>
#include<conio.h>
void main()
{
int aa,bb,temporary;
printf("\nEnter value of aa");
scanf("%d",&aa);
printf("\nEnter value of bb");
scanf("%d",&bb);
printf("\nThe values before swapping");
printf("\n%d\n%d",aa,bb);
temporary=aa;
aa=bb;
bb=temporary;
printf("\nValues after swapping%d  %d",aa  ,bb);
getch();
}
