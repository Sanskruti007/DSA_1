#include<stdio.h>
struct book
{
    char book_name;
    int ISBN;
};

void read(struct book b[2]);
void display(struct book b[2]);
void main()
{
    struct book b[2];
    read(b);
    display(b);
}
 void read(struct book b[2])
 {
            int i;
            for(i=0;i<2;i++)
            {
                scanf("%s",b[i].book_name);
                scanf("%d",&b[i].ISBN);

            }
 }

void display(struct book b[2])
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("%s\n",b[i].book_name);
        printf("%d\n",b[i].ISBN);
    }
}
