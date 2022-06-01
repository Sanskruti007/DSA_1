#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} *NODE;

NODE getNODE(int d)
{
    NODE n = (NODE)malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("Node is not created.\n");
        exit(0);
    }
    n->data = d;
    n->next = NULL;
    return n;
}

NODE insert_end(NODE head, int data)
{
    NODE temp = getNODE(data);
    if(head==NULL)
        return temp;
    NODE cur = head;
    while(cur->next != NULL)
        cur = cur->next;
    cur->next = temp;
    return head;
}

void apple_select(NODE head)
{
    NODE cur = head;
    int sum = 0;
    while(cur!=NULL)
    {
        if(cur->next==NULL)
        {
            if(cur->data%2==0||cur->data%5==0)
            {
                printf("%d ", cur->data);
                sum += cur->data;
            }
            break;
        }
        if((cur->data%2==0||cur->data%5==0)&&cur->next->data%3==0)
        {
            printf("%d ", cur->data);
            sum += cur->data;
        }
        cur = cur->next;
    }
    printf("\n%d", sum);
}

void main()
{
    NODE head = NULL;
    int n, a_weight;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a_weight);
        head = insert_end(head,a_weight);
    }
    apple_select(head);
}
