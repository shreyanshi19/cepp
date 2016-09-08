#include<stdio.h>
#include<math.h>
#define max 100
int main()
{
	int m,a[max],i,j=1,k=2,close=0,ele1=0,ele2=0,ele3=0;
	clrscr();
	scanf("%d",&m);
	for(i=0;i<m;i++)
	 scanf("%d",&a[i]);
      	close=a[i]+a[j]+a[k];
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			for(k=j+1;k<m;k++)
			{
				if(abs(close)>abs(a[i]+a[j]+a[k]))
				 { 
				 	close=a[i]+a[j]+a[k];
					ele1=a[i];
					ele2=a[j];
					ele3=a[k];
				}
			 }
		  }
	}  
	printf("%d%d%d",ele1,ele2,ele3);
return 0;
}
