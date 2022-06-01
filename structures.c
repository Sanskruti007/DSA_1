#include<stdio.h>
struct complex
{
    int real,imag;
};
typedef struct complex CLX;
void read(CLX[],int);
void add(CLX[],int);
void main()
{
    int n;
    CLX p[15];
    printf("Enter the number of complex numbers to be added\n");
    scanf("%d",&n);
    read(p,n);
    add(p,n);
}
void read(CLX p[15],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter real part\n");
        scanf("%d",&p[i].real);
        printf("Enter imaginary part\n");
        scanf("%d",&p[i].imag);
    }
}
void add(CLX p[15],int n)
{
    CLX sum;
    sum.real=0;sum.imag=0;
    for(int i=0;i<n;i++)
  {
    sum.real=sum.real+p[i].real;
    sum.imag=sum.imag+p[i].imag;
  }
  printf("sum of complex number is %d+%di",sum.real,sum.imag);
}
