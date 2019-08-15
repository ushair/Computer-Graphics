#include<conio.h>
#include<stdio.h>
main()
{
int a[100],i,n,p,v;
clrscr();
printf("ENTER NO. OF ELEMENT IN THE ARRAY:--");
scanf("%d",&n);
printf("\nENTER ELEMENT IN THE ARRAY:--");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n\tELEMENT IN THE ARRAY:--");
for(i=0;i<n;i++)
{
printf("\n\t%d ",a[i]);
}
printf("\nENTER ELEMENT TO INSERT IN ARRAY");
scanf("%d",&v);
printf("\nENTER POSITION TO INSERT");
scanf("%d",&p);
for(i=n;i>=p;i--)
{
a[i]=a[i-1];
}
a[p-1]=v;
printf("\n\tELEMENT IN THE ARRAY:--");
for(i=0;i<=n;i++)
{
printf("\n%d ",a[i]);
}
getch();
}
