#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
  int data;
  struct node *next;
};
int max(int x, int y)
{
    return (x>y)?x:y;
}
struct Node
{
    int data;
    struct Node *left, *right;
};
struct Node* allocateNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
int height(struct Node* node)
{
    if (node == NULL)
        return 0;
    if ((node->left && node->left->right == node) &&
           (node->right && node->right->left == node))
        return 1;
    return 1 + max(height(node->left), height(node->right));
}
struct node *head=NULL;
struct node *head_1=NULL;
struct node *head_2=NULL;
struct node *head_3=NULL;
struct node *head_4=NULL;
struct node *head_5=NULL;
struct node *head_6=NULL;
struct node *head_7=NULL;

struct node* new_node(int k)
{
  struct node* newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=k;
  newnode->next=NULL;
  return newnode;
}
void print_list()
{
  struct node* p=head;
  printf("List 1\n");
  while(p)
  {
    if(p->next==NULL)
    printf("%d",p->data);
    else
    printf("%d->",p->data);
    p=p->next;
  }
  printf("\n");
  printf("List 2\n");
  p=head_1;
  while(p)
  {
    if(p->next==NULL)
    printf("%d",p->data);
    else
    printf("%d->",p->data);
    p=p->next;
  }
  printf("\n");
  printf("List 3\n");
  p=head_2;
  while(p)
  {
    if(p->next==NULL)
    printf("%d",p->data);
    else
    printf("%d->",p->data);
    p=p->next;
  }
  printf("\n");
  printf("List 4\n");
  p=head_3;
  while(p)
  {
    if(p->next==NULL)
    printf("%d",p->data);
    else
    printf("%d->",p->data);
    p=p->next;
  }
  printf("\n");
  printf("List 5\n");
  p=head_4;
  while(p)
  {
    if(p->next==NULL)
    printf("%d",p->data);
    else
    printf("%d->",p->data);
    p=p->next;
  }
  printf("\n");
  p=head_5;
  printf("List 6\n");
  while(p)
  {
    if(p->next==NULL)
    printf("%d",p->data);
    else
    printf("%d->",p->data);
    p=p->next;
  }
  printf("\n");
  printf("List 7\n");
  p=head_6;
  while(p)
  {
    if(p->next==NULL)
    printf("%d",p->data);
    else
    printf("%d->",p->data);
    p=p->next;
  }
  printf("\n");
  printf("List 8\n");
  p=head_7;
  while(p)
  {
    if(p->next==NULL)
    printf("%d",p->data);
    else
    printf("%d->",p->data);
    p=p->next;
  }
  printf("\n");
  printf("\n");
}
void append_node(int key)
{
    struct node* p=head;
    struct node* newnode=new_node(key);
    if(p==NULL)
    {
      head=newnode;
    }
    else
    {
      while(p->next!=NULL)
      {
        p=p->next;
      }
      p->next=newnode;
    }

}
void append_node_5(int key)
{
    struct node* p=head_5;
    struct node* newnode=new_node(key);
    if(p==NULL)
    {
      head_5=newnode;
    }
    else
    {
      while(p->next!=NULL)
      {
        p=p->next;
      }
      p->next=newnode;
    }
}
void insert_sortedlist(int key)
{
  struct node* p=head;
  struct node* q=head->next;
  struct node* newnode=new_node(key);
  if(p->data>=key)
  {
    newnode->next=p;
    head=newnode;
  }
  else
  {
    while(q!=NULL and q->data<key )
    {
      q=q->next;
      p=p->next;
    //  printf("%d %d",p->data,q->data);
    }
    p->next=newnode;
    newnode->next=q;
  }
}
void bubble_sort()
{
  struct node* p;
  struct node* q;
  for(p=head;p->next!=NULL;p=p->next)
  {
    for(q=p->next;q!=NULL;q=q->next)
    {
      if(p->data > q->data)
      {
        int t=p->data;
        p->data=q->data;
        q->data=t;
      }
    }
  }
}
void remove_duplicate()
{
  struct node*p = head;
  while(p->next!=NULL)
  {
    if(p->data==p->next->data)
    {
      p->next=p->next->next;
    }
    else
    {
      p=p->next;
    }
  }

}
int length()
{
  struct node* p=head_4;
  int c=0;
  while(p!=NULL)
  {
    c++;
    p=p->next;
  }
  return c;
}
void even_end()
{
  int l=length();
  struct node*p = head;
  struct node*q = head;
  while(q->next!=NULL)
  {
    q=q->next;
  }
//  printf("%d",q->data);
  for(int i=0;i<l;i+=2)
  {
      struct node* n=new_node(p->next->data);
      if(i==0)
      q->next=n;
      else
      {
        n->next=q->next;
        q->next=n;
      }
      p->next=p->next->next;
      p=p->next;
    //  print_list();
  }
}
void alt_element()
{
  int l=length();
  struct node*p = head;
  for(int i=0;i<l-1;i+=2)
  {
      struct node* newnode=new_node(p->next->data);
      struct node*q = head_1;
      if(q==NULL)
      {
        head_1=newnode;
      }
      else
      {
        while(q->next!=NULL)
        {
          q=q->next;
        }
        q->next=newnode;
      }

      p->next=p->next->next;
      p=p->next;
  }
}
void merge_alt()
{
  struct node* p=head;
  struct node* q=head_1;
  struct node* r=head_2;
  int c=0;
  while(p!=NULL || q!=NULL)
  {
    struct node* newnode;
    if(c%2==0)
    {
    newnode=new_node(p->data);
    p=p->next;
    }
    else
    {
    newnode=new_node(q->data);
    q=q->next;
    }
    c++;
    struct node* r= head_2;
    if(r==NULL)
    {
      head_2=newnode;
    }
    else
    {
      while(r->next!=NULL)
      {
        r=r->next;
      }
      r->next=newnode;
    }

  }
}
void kth(int k)
{
  int n=length();
  struct node* p=head;
  for(int i=0;i<n-k+1;i++)
  {
    p=p->next;
  }
  printf("%d",p->data);
}
void only_even()
{
  struct node *p=head;
  p=p->next;
  int n=length();
  for(int i=1;i<n/2;i++)
  {
    p->next=p->next->next;
    p=p->next;
  }
  head=head->next;
}
void alt_hl()
{
  struct node* p;
  struct node* q;
  for(p=head_2;p->next!=NULL;p=p->next)
  {
    for(q=p->next;q!=NULL;q=q->next)
    {
      if(p->data > q->data)
      {
        int t=p->data;
        p->data=q->data;
        q->data=t;
      }
    }
  }
  p=head;
  q=head->next;
  int n=length();
  for(int i=1;i<n/2;i++)
  {
    q->next=q->next->next;
    p->next=p->next->next;
    p->next->next=q;
  }
}
struct node* sortedmerge(struct node* a,struct node* b)
{
  if(a==NULL)
    return b;
  else if(b==NULL)
    return a;
  struct node* result=NULL;
  if(a->data <= b->data)
  {
    result=a;
    result->next=sortedmerge(a->next,b);
  }
  else
  {
    result=b;
    result->next=sortedmerge(a,b->next);
  }
  return result;
}
void frontbacksplit(struct node* s,struct node** f,struct node** b)
{
  if(s==NULL || s->next==NULL)
  {
    *f=s;
    *b=NULL;
    return;
  }
  struct node* slow=s;
  struct node* fast=s->next;
  while(fast!=NULL)
  {
    fast=fast->next;
    if(fast!=NULL)
    {
      fast=fast->next;
      slow=slow->next;
    }
  }
  *f=s;
  *b=slow->next;
  slow->next=NULL;

}
void merge_sort(struct node** headd)
{
  if(*headd ==NULL || (*headd)->next==NULL)return;
  struct node* a;
  struct node* b;
  frontbacksplit(*headd,&a,&b);
  merge_sort(&a);
  merge_sort(&b);
  *headd=sortedmerge(a,b);
}
void intersection()
{
    struct node *p=head_1;
    struct node *q=head_2;
    while(p != NULL)
    {
      q=head_2;
      while(q != NULL)
      {
        if(p->data==q->data)
        {
          struct node* pp=head_3;
          struct node* newnode=new_node(p->data);
          if(pp==NULL)
          {
            head_3=newnode;
          }
          else
          {
            while(pp->next!=NULL)
            {
              pp=pp->next;
            }
            pp->next=newnode;
          }
          p=p->next;
        }
        q=q->next;
      }
      p=p->next;
    }
}
void reverse()
{
  struct node* p=head_4;
  int c=0;
  while(p!=NULL)
  {
    c++;
    p=p->next;
  }
  p=head_2;
  for(int i=0;i<c-1;i++)
  {
    struct node* a=p->next;
    p->next=p->next->next;
    if(i==0)
    {a->next=p;}
    else
    {
      a->next=head_2;
    }
    head_2=a;
  }
}
void reverse_kth(int k)
{
  struct node* p=head_4;
  int z=ceil(length()/k);
  printf("%d\n",z);
  for(int j=0;j<z;j++)
  {
    struct node* q=NULL;
    struct node* start=p;
    struct node* end;
    for(int i=0;i<k;i++)
    {
      struct node* pp=q;
      struct node* newnode=new_node(p->data);
      if(pp==NULL)
      {
        q=newnode;
      }
      else
      {
        while(pp->next!=NULL)
        {
          pp=pp->next;
        }
        pp->next=newnode;
      }
      p=p->next;
      if(i<=k-2)
        start=p;

    }
    end=p;

    struct node* ppp=q;
    int c=0;
    while(ppp!=NULL)
    {
      c++;
      ppp=ppp->next;
    }
    ppp=q;
    for(int i=0;i<c-1;i++)
    {
      struct node* a=ppp->next;
      ppp->next=ppp->next->next;
      if(i==0)
      {a->next=ppp;}
      else
      {
        a->next=q;
      }
      q=a;
    }

    if(j==0)
    {
      head_4=q;
    }
    else
    {
      struct node* o=head_4;
      for(int ii=0;ii<j*k-1;ii++)
      {
        o=o->next;
      }
      o->next=q;
    }
    struct node* qq=q;
    while(qq->next!=NULL)
    {
      qq=qq->next;
    }
    qq->next=end;

  }

}

void merge_alt_2()
{
  struct node* p=head;
  struct node* q=head_2;
  while(p->next!=NULL)
  {
    struct node* d=p->next;
    struct node* c=q->next;
    p->next=q;
    q->next=d;
    p=p->next->next;
    q=c;
  }
  p->next=q;
}
void merge_end()
{
  struct node* p=head;
  struct node* q=head_2;


  while(p!=NULL && q!=NULL)
  {
    int k,flag=0;
    if(p->data >= q->data)
    {
      k=q->data;
      q=q->next;
    }
    else
    {
      k=p->data;
      p=p->next;
    }
  //  printf("111111");
    struct node* pp=head_4;
    struct node* newnode=new_node(k);
    if(pp==NULL)
    {
      head_4=newnode;
    }
    else
    {
      while(pp->next!=NULL)
      {
        pp=pp->next;
      }
      pp->next=newnode;
    }
  //  printf("%d\n",pp->data);
  }
  if(p!=NULL)
  while(p!=NULL)
  {
    struct node* pp=head_4;
    struct node* newnode=new_node(p->data);
    if(pp==NULL)
    {
      head_4=newnode;
    }
    else
    {
      while(pp->next!=NULL)
      {
        pp=pp->next;
      }
        pp->next=newnode;
    }
  //  printf("111111");
    p=p->next;

  }

  while(q!=NULL)
  {
  //  printf("111111");
    struct node* pp=head_4;
    struct node* newnode=new_node(q->data);
    if(pp==NULL)
    {
      head_4=newnode;
    }
    else
    {
      while(pp->next!=NULL)
      {
        pp=pp->next;
      }
      pp->next=newnode;
    }
    q=q->next;
  }

}
void dele_m(int n,int m)
{
  struct node* p=head_2;
  while(p!=NULL)
  {
    for(int i=0;i<n-1;i++)
    {
      p=p->next;
    }
    struct node* q=p->next;
    for(int j=0;j<m;j++)
    {
      q=q->next;
      if(q==NULL)
        break;
    }
    p->next=q;
    p=p->next;
  }
}
void rearrange()
{
  struct node* f;
  struct node* b;
  struct node* slow=head_4;
  struct node* fast=slow->next;
  while(fast!=NULL)
  {
    fast=fast->next;
    if(fast!=NULL)
    {
      fast=fast->next;
      slow=slow->next;
    }
  }
  f=head_4;
  b=slow->next;
  slow->next=NULL;
  printf("%d\n",b->data );
  struct node* p=b;
  int c=0;
  while(p!=NULL)
  {
    c++;
    p=p->next;
  }
  p=b;
  for(int i=0;i<c-1;i++)
  {
    struct node* a=p->next;
    p->next=p->next->next;
    if(i==0)
    {a->next=p;}
    else
    {
      a->next=b;
    }
    b=a;
  }


  struct node* qp=f;
  struct node* qq=b;
  while(qp->next!=NULL)
  {
    struct node* qd=qp->next;
    struct node* qc=qq->next;
    qp->next=qq;
    qq->next=qd;
    qp=qp->next->next;
    qq=qc;
  }
  qp->next=qq;
}
void last_front()
{
  struct node* slow=head_4;
  struct node* fast=slow->next;
  while(fast->next!=NULL)
  {
    fast=fast->next;
    slow=slow->next;

  }
  slow->next=NULL;
  fast->next=head_2;
  head_2=fast;

}
void sort012()
{
  struct node* pp=head_5;
  struct node* p=NULL;
  struct node* q=NULL;
  struct node* s=NULL;
  struct node* p_end;
  struct node* q_end;
  while(pp!=NULL)
  {
      if(pp->data==0)
      {
        struct node* ppp=p;
        struct node* newnode=new_node(pp->data);
        if(ppp==NULL)
        {
          p=newnode;
        }
        else
        {
          while(ppp->next!=NULL)
          {
            ppp=ppp->next;
          }
          ppp->next=newnode;
          p_end=newnode;
        }
      }
      else if(pp->data==1)
      {
        struct node* ppp=q;
        struct node* newnode=new_node(pp->data);
        if(ppp==NULL)
        {
          q=newnode;
        }
        else
        {
          while(ppp->next!=NULL)
          {
            ppp=ppp->next;
          }
          ppp->next=newnode;
          q_end=newnode;
        }
      }
      else
      {
        struct node* ppp=s;
        struct node* newnode=new_node(pp->data);
        if(ppp==NULL)
        {
          s=newnode;
        }
        else
        {
          while(ppp->next!=NULL)
          {
            ppp=ppp->next;
          }
          ppp->next=newnode;
        }
      }
      pp=pp->next;
  }
 p_end->next=q;
 q_end->next=s;
 head_5=p;
}
void remove_duplicate_1()
{
  struct node* p=head_5;
  struct node* q=NULL;
  int a[3];
  a[0]=0;a[1]=0;a[2]=0;
  while(p!=NULL)
  {
    if(a[p->data]!=0)
    {
      q->next=p->next;
    }
    else
    {
      a[p->data]=1;;
      q=p;
    }
    p=q->next;
  }
}
void rearrange_eo()
{
  struct node* p=head_2;
  struct node* e=NULL;
  struct node* o=NULL;
  int c=0;
  while(p!=NULL)
  {
    c++;
    p=p->next;
  }
  p=head_2;
  struct node* p_end;
  for(int i=0;i<c;i++)
  {
    if(i%2!=0)
    {
      struct node* ppp=o;
      struct node* newnode=new_node(p->data);
      if(ppp==NULL)
      {
        o=newnode;
      }
      else
      {
        while(ppp->next!=NULL)
        {
          ppp=ppp->next;
        }
        ppp->next=newnode;
          p_end=newnode;
      }
    }
    else
    {
      struct node* ppp=e;
      struct node* newnode=new_node(p->data);
      if(ppp==NULL)
      {
        e=newnode;
      }
      else
      {
        while(ppp->next!=NULL)
        {
          ppp=ppp->next;
        }
        ppp->next=newnode;

      }
    }

  p=p->next;
  }
  p_end->next=o;
  head_2=e;
}
void palindrome()
{
  struct node* q=head_5;
  struct node* r=NULL;
  while(q != NULL)
  {

    struct node* pp=head_6;
    struct node* newnode=new_node(q->data);
    if(pp==NULL)
    {
      head_6=newnode;
    }
    else
    {
      while(pp->next!=NULL)
      {
        pp=pp->next;
      }
      pp->next=newnode;
    }
    q=q->next;
  }

  struct node* p=head_6;
  int c=0;
  while(p!=NULL)
  {
    c++;
    p=p->next;
  }
  p=head_6;
  for(int i=0;i<c-1;i++)
  {
    struct node* a=p->next;
    p->next=p->next->next;
    if(i==0)
    {a->next=p;}
    else
    {
      a->next=head_6;
    }
    head_6=a;
  }

  q=head_5;
  p=head_6;
  int flag=0;
  while(q!=NULL)
  {
    if(q->data!=p->data)
    {
      flag=1;
      break;
    }
    q=q->next;
    p=p->next;
  }
  if(flag==0)
  printf("%s\n","palindrome" );
  else
  printf("%s\n","not palindrome" );
}

void push(int k)
{

  struct node* newnode=new_node(k);
  if(head_7==NULL)
  {
    head_7=newnode;
  }
  else
  {
    newnode->next=head_7;
    head_7=newnode;
  }
}
void pop()
{
  struct node* p=head_7;
  while(p->next->next!=NULL)
  {
    p=p->next;
  }
  p->next=NULL;
}
void top()
{
  if(head_7!=NULL)
  {
    printf("%d\n",head_7->data);
  }
  else
  {
    printf("Stack is empty\n");
  }
}


int main()
{
  int k[]={10,20,30,46,33,12,45,122,45,13,3,31,169,76,11,311,9,34,56};
  for(int i=0;i<19;i++)
  {
    append_node(k[i]);
  }
  int kk[]={0,1,2,2,1,0,0,2,0,1,1,0};
  for(int i=0;i<12;i++)
  {
    append_node_5(kk[i]);
    push(kk[i]+1);
  }
  insert_sortedlist(4);
  // print_list();
  insert_sortedlist(11);
  //  print_list();
  insert_sortedlist(4);
  //  print_list();
  insert_sortedlist(54);
  //  print_list();
  insert_sortedlist(16);
  insert_sortedlist(16);
  //bubble_sort();
  //  print_list();
  int leng=length();
  struct node* p=head;
  struct node* q=head;
  /*for(int i=0;i<(leng/2)+(leng%2);i++)
  {
    printf("%d ",p->data);
    p=p->next;
    if(i!=0)
    {
      q=q->next;
    }
  }
  head_1=p;
  q->next=NULL;
  printf("\n");*/
  print_list();
  remove_duplicate();
  print_list();
  even_end();
  print_list();
  alt_element();
  print_list();
//  merge_alt();
//  print_list();
  kth(3);
  printf("\n");
  only_even();
  print_list();
  merge_sort(&head_2);
  print_list();
  intersection();
  print_list();
  reverse();
  print_list();
//  merge_alt_2();
//  print_list();
  bubble_sort();
  merge_end();
  print_list();
  dele_m(2,2);
  print_list();
//  rearrange();
//  print_list();
//  last_front();
//  print_list();
  sort012();
  print_list();
  remove_duplicate_1();
  print_list();
//  rearrange_eo();
//  print_list();
  palindrome();
  print_list();
  top();
  pop();
  print_list();
  struct Node* root = NULL;
  root = allocateNode(1);
  root->left = allocateNode(2);
  root->right = allocateNode(3);
  root->left->left = allocateNode(4);
  root->left->right = allocateNode(5);
  root->right->right = allocateNode(6);
  root->left->left->left = allocateNode(7);
  struct Node *L1 = root->left->left->left;
  struct Node *L2 = root->left->right;
  struct Node *L3 = root->right->right;
  L1->left = L3;
  L1->right = L2;
  L2->left = L1;
  L2->right = L3;
  L3->left = L2;
  L3->right = L1;
	printf("height%d\n", height(root));
  print_list();
  printf("Reverse kth\n");
  reverse_kth(5);
  print_list();
  return 0;
}
