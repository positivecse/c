#include <stdio.h>
void main()
{
int n,k,a[100],i,sum=0;
clrscr();
printf("Enter any number for n:");
scanf("%d",&n);
printf("Enter any number for k:");
scanf("%d",&k);
printf("Enter %d number:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
sum=sum+a[i];}
printf("sum=%d",sum);
getch();
}
