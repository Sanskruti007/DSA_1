#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct book
{
    int ISBN;
    char name[40];
    char author[40];
}t;
void read(t det[40],int n)
{
    int i;
    for(i=0;i<n;i++)
    { 
        printf("Input the details of book %d=",i+1);
        scanf("%d %s %s",&det[i].ISBN,det[i].name,det[i].author);
    }
}
void display(t det[40],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("ISBN=%d\n",det[i].ISBN);
        printf("Name=%s\n",det[i].name);
        printf("Author=%s\n",det[i].author);
    }
}
void sort(t det[40],int n)
{
    int i,j;
    t temp;
    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-j-1;i++)
        {
            if(det[i].ISBN>det[i+1].ISBN)
               {
                    temp=det[i];
                    det[i]=det[i+1];
                    det[i+1]=temp;
                }
        }

    }
    display(det,n);
}
void search(t det[40],int n)
{
    int i,key;
    printf("The ISBN to be found=");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(det[i].ISBN==key)
        {
            printf("ISBN=%d\n",det[i].ISBN);
            printf("Name=%s\n",det[i].name);
            printf("Author=%s\n",det[i].author);
        }
    }
}
int main()
{
    t det[40];
    int n;
    printf("input the number of books=");
    scanf("%d",&n);
    read(det,n);
    sort(det,n);
    search(det,n);

}