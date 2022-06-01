
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct cricketer
{
    char name[20];
    char nationality[20];
    int rank;
    float average;
}c[50];

void read(struct cricketer *p,int n);
void display(struct cricketer *p,int n);

main()
{
    struct cricketer c[50],*p;
    int n;

    printf ("enter number of cricketers\n");
    scanf ("%d",&n);
    read (c,n);
    display(c,n);

}
void read ( struct cricketer *p,int n)
{
int i;
for (i=0;i<n;i++)
{
    printf ("enter name \n");
    scanf ("%s",p->name);

    printf ("enter nationality\n");
    scanf ("%s",p->nationality);

    printf ("enter rank\n");
    scanf ("%d",&p->rank);

    printf ("enter average\n");
    scanf ("%f",&p->average);

}

}

void display(struct cricketer *p,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf ("%s is name\n",p[i]->name);
        printf ("%s is nationality\n",p[i]->nationality);
        printf ("%d is rank\n",p[i]->rank);
        printf ("%f is average\n",p->average);
    }
}

