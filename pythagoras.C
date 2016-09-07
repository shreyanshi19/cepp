#include<stdio.h>
#include<conio.h>
void main()
{
int m,a[10],i,j,k,flag=0;
clrscr();
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
for(k=j+1;k<m;k++)
{

if(((a[i]*a[i]+a[j]*a[j])==(a[k]*a[k]))||((a[j]*a[j]+a[k]*a[k])==(a[i]*a[i])))
      {  flag=1;
	 break;    }
	 }
	 if(flag==1)
	 break;
	 }
	 if(flag==1)
	 break;
	 }
	 printf("%d%d%d",i,j,k);



getch();
}