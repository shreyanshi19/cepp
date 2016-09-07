#include<stdio.h>
#include<conio.h>

void main()
{
int m,a[10],i,j,c[10]={0},e[10]={0},mum=0,flag=0;
clrscr();
scanf("%d",&m);
for(i=0;i<m;i++)
      scanf("%d",&a[i]);

for(i=0;i<m;i++)
{
  for(j=i+1;j<m;j++)
{
if(a[i]==a[j])
{
c[i]++;
e[i]=a[i];
}
 }
    }
 for(i=0;i<m;i++)
 {
if(c[i]+1>m/2){
	 mum=e[i];
	 flag=1;
	 }  }
	 if(flag==1)
	   printf("%d",mum);
		  else
		   printf("ot");


	 getch();


}