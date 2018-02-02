#include<stdio.h>
void main()
{ int n,sum,i;
printf("ENTER VALUE");
scanf("%d",&n);
if(n<=100000)
{
for(i=1;i<=n;i++)
sum+=i;
printf("\nSUM IS:\t%d",sum);
}
}
