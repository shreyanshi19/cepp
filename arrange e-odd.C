#include<stdio.h>
int main()
{
	int m,a[10],i,c[10];
	clrscr();
	scanf("%d",&m);
	for(i=0;i<m;i++)
      		scanf("%d",&a[i]);
      	for(i=0;i<m;i++)
	{
		if(a[i]%2==0)
		printf("%2d",a[i]);
	}
	for(i=0;i<m;i++)
	{
 		if(a[i]%2!=0)
		 printf("%2d",a[i]);
	 }
return 0;
}
