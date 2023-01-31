#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE First, int iNo)
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
    printf("Element of LinkedList is : ");

    while(First != NULL)
    {
        printf("|%d|->",First -> data);
        First = First -> next;
    }
    printf("NULL\n");
}


int Minimum(PNODE First)
{
    int iMin = 0, iDigit = 0;
    iMin = First ->data;
    int iNo = First -> data;
    while(First != NULL)
    {
        iDigit = iNo % 10;
        if(First->data < iMin)
       {
        iMin = First->data;
       } 
       First = First -> next;
        iNo = iNo / 10;
    }
    iDigit = iMin % 10;
    iNo = iMin / 10;
    return iMin;
}


int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head, 10);
    InsertLast(&Head, 20);
    InsertLast(&Head, 32);
    InsertLast(&Head, 42);

    Display(Head);
    iRet = Minimum(Head);
    printf("%d\n",iRet);
    return 0;
}