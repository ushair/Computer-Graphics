#include<conio.h>
#include<stdio.h>
main()
{
int a[100],i,n,p;
clrscr();
printf("ENTER NO. OF ELEMENT IN THE ARRAY:-- ");
scanf("%d",&n);
printf("\nENTER ELEMENT IN THE ARRAY:-- ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n\tELEMENT IN THE ARRAY:-- ");
for(i=0;i<n;i++)
{
printf("\n\t%d ",a[i]);
}
printf("\n\t\t\nENTER LOCATION TO DELETE ELEMENT FROM ARRAY :=");
scanf("%d",&p);
for(i=p-1;i<n-1;i++)
{
a[i]=a[i+1];
}
printf("\n\tELEMENT IN THE ARRAY:--  ");
for(i=0;i<n-1;i++)
{
printf("\n%d ",a[i]);
}
getch();
}
