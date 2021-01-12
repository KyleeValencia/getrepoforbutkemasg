#include<stdio.h>
#include<stdlib.h>
// #include<string.h>

struct Student
{
   char id;
   Student *next;
}*head;


Student*newStudent(const char id)
{
   Student*lounge=(Student*)malloc(sizeof(Student));
   lounge->id = id;
   lounge->next = NULL;

   return lounge;
}

void pusHead(const char id,Student**add)
{
   Student*temp=newStudent(id);
   puts("we got the pusHead");
   if(!head)
   {
      puts("we arrange the head\n");
      head = temp;
   }
   else
   {
      puts("we arrange the butt\n");
      temp->next = head;
      head = temp;
   }
   
}

void longResult(Student*mix)
{
   puts("we got the print\n");
   while(mix!=NULL)
   {
      puts("is this walk ?");
      if(mix->next==NULL)
      {
         printf("%c\n",mix->id);
      }
      else
      {
         printf("%c -> ",mix->id);
      }
      mix = mix->next;
   }
}

Student*susun(Student*h1,Student*h2)
{
   Student*res=NULL;
   puts("this function work\n");
   while(h1&&h2)
   {
      puts("see if this work");
      if(h1->id>=h2->id)
      {
         // strcpy(res->name,h2->name);
         res->id = h2->id;
         puts("we got transfer h2");
         h2 = h2->next;
      }
      else if (h1->id <h2->id)
      {
         // strcpy(res->name,h1->name);
         res->id = h1->id;
         puts("we got transfer h1");
         h1 = h1->next;
      }
      res = res->next;
   }

   while(h1)
   {
      res->id= h1->id;
      puts("we got transfer h1 leftover");
      res = res->next;
      h1 = h1->next;

   }

   while(h2)
   {
      res->id = h2->id;
      puts("we got transfer h2 leftover");
      res = res->next;
      h2=h2->next;
   }

puts("we got the end of longreesult\n");
   return res;
}


int main ()
{
   int l1,l2;
   scanf("%d %d",&l1,&l2);
      Student*c1=NULL;
      Student*c2=NULL;
      Student*mix=NULL;

      puts("all name in class k1 is\n");
   for(int y = 0;y<l1;y++)
   {
      char name1;
      scanf("%c",&name1);
      getchar();
      pusHead(name1,&c1);
   }

puts("all name in class k2 is\n");
   for( int u=0;u<l2;u++)
   {
      char name2;
      scanf("%c",&name2);
      getchar();
      pusHead(name2,&c2);
   }
   mix= susun(c1,c2);
   longResult(mix);
   
   return 0;
}


