#include<stdio.h>
 int sum(int a[100],int);
 void read(int a[100],int);
 void main()
 {
     int a[100],n,sum1;
     printf("Enter the value of n :\n");
     scanf("%d",&n);
     read(a,n);
     sum1=sum(a,n);
     printf("Sum=%d",sum1);
 }

 void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int sum(int a[100],int n)
{
    int sum1=0,i;
    for (i=0;i<n;i++)
    {
        sum1=sum1+a[i];
    }
    return sum1;
}
