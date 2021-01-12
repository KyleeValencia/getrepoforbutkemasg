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

void seeRange()
{
   Node*see = head;
   int max = head->value;
   int min = head->value;
   while(see)
   {
      if(see->value>=max)
      {
         max = see->value;
      }
      if(see->value<=min)
      {
         min = see->value;
      }
      see = see->next;
   }

   printf("range of min and max value is %d\n where max is %d and min is %d",max-min,max,min);
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

   seeRange();
   return 0;
}