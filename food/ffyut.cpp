# include <iostream>
using namespace std;
typedef struct node{
    int x;
    struct node *next;
}node;

int main()
{
   int n,i;
   cout<<"enter the number of nodes"<<end;
   cin>>n;
   node *head=NULL,*temp=NULL,*p=NULL;
   for(i=1;i<=n;i++)
   {
       temp=(node*)malloc(sizeof(node));
       cout<<"enter the"<<i<<" node element"<<endl;
       cin>>temp->x;
       temp->next=NULL;
       if(i=1){
          head=temp;
          p=head;
          }
        else
        {
         p->next=temp;
         p=p->next; 
        }
   }
   p=head;
   while(p!=NULL)
   {
       cout<<p->x<<" ";
   }
   
   return 0;
}