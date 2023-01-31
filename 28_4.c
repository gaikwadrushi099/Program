#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node 
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE First , int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    PNODE temp = *First;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void Display(PNODE First)
{
    printf("Element of LinkedList is : \n");

    while(First != NULL)
    {
        printf("|%d|->",First -> data);
        First = First -> next;
    }
    printf("NULL\n");
}

int Maximum(PNODE First)
{
    int iMax = 0;
    iMax = First -> data;

    while(First!= NULL)
    {
        if((First -> data) > iMax)
        {
            iMax = (First -> data);
        }
        First = First -> next;
    }
    return iMax;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head,10);
    InsertLast(&Head,202);
    InsertLast(&Head,30);
    InsertLast(&Head,40);
    
    Display(Head);
    iRet = Maximum(Head);
    printf("Maximum element is : %d \n",iRet);
    
    return 0;
}