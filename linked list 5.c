#include<stdio.h>

    typedef struct nodetype
    {
    	int info;
    	struct nodetype *next;
    }   node ;

    void linked_list(node **,int );
    void delete_at_beg(node **);
    void display(node *);
    void main()
    {
     	node *start;
    	int item,n,i;
    	start=NULL;
    	printf("Enter number of nodes :\n");
    	scanf("%d",&n);

    	for(i=0;i<n;i++)
    	{
    	    printf("Enter item for node %d :\n",i+1);
    		scanf("%d",&item);
    	    linked_list(&start,item) ;
    	}
    	printf("Given List :\n");
    	display(start);

    	delete_at_beg(&start);

    	printf("\nThe list after the deletion at first node is :\n");
    	display(start);
    }


    void linked_list(node **start,int item)
    {
    	node *ptr,*last;
    	ptr =(node*)malloc(sizeof(node));
    	ptr->info = item ;
    	ptr->next = NULL;
    	if(*start == NULL)
    	*start = ptr;
     	else
    	{
      		last = *start;
    		while(last->next !=NULL)
    		{
    			last = last->next;
    		}
    		last->next = ptr ;
    	}
     }


    void delete_at_beg(node **start)
    {
    	node *ptr;
    	int temp;
    	if(*start==NULL)
        {
            printf("List Empty\n");
            return *start;
        }
    	ptr = *start ;
    	temp = ptr->info;
    	*start = ptr->next ;
    	free(ptr);

    }


    void display(node *start)
    {
        int n = 0;
    	while(start !=NULL)
        {
          printf("\t %d",start->info);
          n++;
    	  start = start->next;
        }

    }
