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

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iTemp = iNo;

    for(iCnt = 1; iCnt<=(iNo/2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
           iSum = iSum + iCnt;
        }
       
    }
    return (iSum == iTemp);
}

void DisplayPerfect(PNODE First)
{
    while(First != NULL)
    {
        if(CheckPerfect(First -> data) == true)
        {
            printf("%d is a perfect Number \n",First->data);
        }
        First = First -> next;   
    }
}

int main()
{
    PNODE Head = NULL;

    InsertLast(&Head,11);
    InsertLast(&Head,28);
    InsertLast(&Head,17);
    InsertLast(&Head,41);
    InsertLast(&Head,6);
    InsertLast(&Head,89);
    
    Display(Head);
    DisplayPerfect(Head);
    
    return 0;
}