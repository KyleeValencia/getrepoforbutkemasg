#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int value;
   Node*next;
}*head;

Node*makevalue(int value)
{
   Node*makeNode = (Node*)malloc(sizeof(Node));

   makeNode->value = value;

   makeNode->next = NULL;

   return makeNode;
}

void pusHead(int value)
{
   Node*get = makevalue(value);
   if(!head)
   {
      head = get;
   }
   else
   {
      get->next = head;
      head = get;
   }
   
}

void seeMid(int many)
{
   Node*see = head;
   int get=1;
   int mid = 0;
   if(many%2==0)
   {
      while(get<=many/2)
      {
         see = see->next;
         get++;
      }
      mid = ((see->value)+(see->next->value))/2;
   }
   else
   {
      while(get<many/2)
      {
         see = see->next;
         get++;
      }
      mid = see->value;
   }
   

   printf("middle value of link is %d\n",mid);
}

int main ()
{
   int many;
   puts("how many value of link do you want ??");
   scanf("%d",&many);
   puts("i want value of:");
   for(int i = 0;i<many;i++)
   {
      int inlink=0;
      scanf("%d",&inlink);
      pusHead(inlink);
   }

   seeMid(many);
   return 0;
}