#include<stdio.h>
#include<stdlib.h>
#include<string.h>



struct dll

{

int data;

struct dll *next;

struct dll *previous;

};

typedef struct dll *NODE;



NODE function(NODE head)

{

if(head == NULL)

{

            printf("List is Empty!!!");

return head;

}

else

{

NODE temp = head;

if(temp -> previous == temp -> next)

{

            head = NULL;

free(temp);

return head;

}

else

{

head = temp -> next;

head -> previous = NULL;

free(temp);

return head;

}

}

}
