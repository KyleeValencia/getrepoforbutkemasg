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

void seeNth(int many)
{
   Node*see = head;
   Node*me = head;
   printf("your link list is\n");

   while(me!=NULL)
   {
      if(me->next==NULL)
      {
         printf("%d\n",me->value);
      }
      else
      {
         printf("%d ->",me->value);
      }
      me = me->next;
   }
   int is;
   printf("which node do you want from 1 till %d in backward?\n",many);
   scanf("%d",&is);
   int you = many-is;
  
   // printf("you is %d\n",you);
   int get=1;
   int Nth = 0;
   while(get<=you)
   {
      see = see->next;
      get++;
   }
   
   Nth = see ->value;
   printf("Nth value of link is %d\n",Nth);
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
  
   seeNth(many);
   return 0;
}