#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int m,a[10],i,j,mi=0,e=0,e2=0;
clrscr();
scanf("%d",&m);
for(i=0;i<m;i++)
      scanf("%d",&a[i]);

for(i=0;i<m;i++)
{
  for(j=i+1;j<m;j++)
{
if(mi<abs(a[i]-a[j])&&(a[j]>a[i]))
{
mi=abs(a[i]-a[j]);
e=a[i];
e2=a[j];
}
}
}
 printf("%d%2d",e,e2);

	 getch();
         }
