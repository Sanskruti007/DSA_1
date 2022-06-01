#include <stdio.h>

struct distance
{
    int feet;
    int inch;
};

void read(struct distance*);
void display(struct distance);
struct distance add(struct distance, struct distance);

int main()
{
    struct distance d1, d2, d3, d4;
    printf("\nEnter distance 1: \n");
    read(&d1);
    printf("\nEnter distance 2: \n");
    read(&d2);
    printf("\nDistance 1 is: ");
    display(d1);
    printf("\nDistance 2 is: ");
    display(d2);
    d3 = add(d1, d2);
    printf("\nDistace 1 + Distance 2=");
    display(d3);
    printf("%d",sizeof(distance));

    return 0;
}

void read(struct distance *t)
{
    printf("Enter feet: ");
    scanf("%d", &t->feet);
    printf("Enter inch: ");
    scanf("%d", &t->inch);
}

void display(struct distance c)
{
    printf("\n%d\' %d\" ", c.feet, c.inch);
}

struct distance add(struct distance t1, struct distance t2)
{
    struct distance t;
    t.feet = t1.feet + t2.feet;
    t.inch = t1.inch + t2.inch;
    if (t.inch >= 12)
    {
        t.inch -= 12;
        t.feet++;
    }
    return t;
}

