#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=0;//global declaration
struct node *createNode()
{
    struct node *h;
  h=(struct node *) malloc(sizeof(struct node));
  printf("enter a data:");
  scanf("%d",&h->data);
  h->next=0;
  return h;
}
void insertstart()
{
  struct node *k;
  k= createNode();
  if(start==0)
  {
      start=k;
  }
  else
  {
      k->next=start;
      start=k;
  }
}
void insertlast()
{
    
}
void insertmiddle()
{
    
}
void deletstar()
{
    
}
void deletlast()
{
    
}
void deletmiddle()
{
    
}
void display()
{
    struct node *j;
    j=start;
    while(j!=0)
    {
        printf("%d",j->data);
    j=j->next;
    }
}

int main()
{
   int ch;
    printf("\n1.INSERTTION FROM START:");
    printf("\n2.INSERTTION FROM LAST:");
    printf("\n3.INSERTTION FROM MIDDLE:");
    printf("\n4.DELETION FROM START:");
    printf("\n5.DELETION FROM LAST:");
    printf("\n6.DELETION FROM MIDDLE:");
    printf("\n7.display:");
    printf("\n8.exit:");
    
    while(1)
    {
        printf("ENTER YOUR CHOICE:\n");
        scanf("%d",&ch);
        
    switch(ch)
    {
        case 1:
        {
            insertstart();
            break;
        }
        case 2:
        {
            insertlast();
            break;
        }
        case 3:
        {
            insertmiddle();
            break;
        }
        case 4:
        {
            deletstar();
            break;
        }
        case 5:
        {
            deletlast();
            break;
        }
        case 6:
        {
            deletmiddle();
            break;
        }
        case 7:
        {
            display();
            break;
        }
        case 8:
        {
            exit(0);
        }
        default:
        {
            printf("WRONG CHOICE:");
        }
    }
    }
    
    return 0;
}
