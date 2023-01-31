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

int SearchLastOccrance(PNODE First, int iNo)
{
    int iCnt = 0;

    for(iCnt =(First -> data)-1;iCnt >= 0;iCnt--)
    {
        if((First -> data )== iNo)
        {
            break;
        }
        First = First -> next;
    }

    if(iCnt == -1)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head,10);
    InsertLast(&Head,20);
    InsertLast(&Head,30);
    InsertLast(&Head,40);
    InsertLast(&Head,50);
    InsertLast(&Head,60);
    InsertLast(&Head,70);
    
    Display(Head);
    iRet = SearchLastOccrance(Head,30);
    printf(" %d \n",iRet);
    
    return 0;
}