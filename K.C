#include<stdio.h>
#include<math.h>
#define max 100
int main()
{
	int m,a[max],i,j,min=0,element1=0,element2=0;
	clrscr();
	scanf("%d",&m);
	for(i=0;i<m;i++)
      	scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	{
		 for(j=i+1;j<m;j++)
		{
			if(min<abs(a[i]-a[j])&&(a[j]>a[i]))
			{
				min=abs(a[i]-a[j]);
				element1=a[i];
				element2=a[j];
			}
		}
	}
	 printf("%d%2d",element1,element2);
return 0;
}
