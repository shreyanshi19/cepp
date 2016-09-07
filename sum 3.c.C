#include<stdio.h>
#include<conio.h>

void main()
{
int m,a[10],i,j,k,l;
clrscr();
scanf("%d",&k);
scanf("%d",&m);
for(i=0;i<m;i++)
      scanf("%d",&a[i]);
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
for(l=j+1;l<m;l++)
{
if(a[i]+a[j]+a[l]==k)
      {
      printf("%d%d%d",a[i],a[j],a[l]);
	}
	 }
	   } }

	 getch();
}