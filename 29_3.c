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

int Addition(PNODE First)
{
    int iSum = 0;
    while(First != NULL)
    {
        if(((First-> data) % 2) == 0)
        {
            iSum = iSum + First -> data;
        
        }
        First = First->next;
    }
    return iSum;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head,11);
    InsertLast(&Head,20);
    InsertLast(&Head,32);
    InsertLast(&Head,41);
    
    
    Display(Head);
    iRet = Addition(Head);
    printf("Addition of All the Element of Linked List is : %d\n",iRet);
    
    return 0;
}