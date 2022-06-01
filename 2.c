//chinmay's code

#include<stdio.h>
struct node
{
    int data;
    struct node *next;
}*head;

struct node* rotate(struct node **head,int);
//void rearrange();
void main()
{
    struct node *newnode,*temp;
    head=0;
    int choice,count,n,i,k;
    printf("Enter the value of n :\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data :\t");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    temp=head;
    printf("the linked list is as follows : \t");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\nEnter the value of k: ");
    scanf("%d",&k);
    if(k>n)
    {
        printf("Operation not possible");
        return;

    }
    head=rotate(head,k);
        temp=head;
    printf("the linked list is as follows : \t");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }


}

struct node* rotate(struct node **head,int k)
{
    struct node *last,*temp1,*temp;
    temp=head;
    temp1=temp->next;
    last=head;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    for (int i=0;i<(    k-1);i++)
    {
        temp=temp->next;
        temp1=temp1->next;
    }
    temp->next =NULL;
    last->next=head;
    head=temp1;
}
