#include<stdio.h>
#include<string.h>
typedef struct student
{
    char name[20];
    int marks;
}*e;

int main()
{
    FILE *fp;
    e ptr;
    scanf("%s",ptr->name);
    scanf("%d",ptr->marks);
    fp=fopen("text.txt","w+");
    fprintf(fp,"name : %s\n Marks :%d\n",ptr->name,ptr->marks );
    return 0;
}
