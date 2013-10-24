#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int l;
struct tnode
{
int dat;
struct tnode*lchild,*rchild;
};
//Routine to create binary tree.
struct tnode*t_insert(struct tnode *ptr,int x)
{
if(ptr==NULL)
  {
  ptr=(struct tnode *)malloc(sizeof(struct tnode));
  ptr->dat=x;
 ptr->lchild=NULL;
 ptr->rchild=NULL;
 return ptr;
 }
 if(x<ptr->dat)
 ptr->lchild=t_insert(ptr->lchild,x);
 else
 ptr->rchild=t_insert(ptr->lchild,x);
 return ptr;
}
//Routine to count number of leaf nodes in the tree;
void count(struct tnode *ptr)
{
 if(ptr)
  {
  if(ptr->lchild==NULL&&ptr->rchild==NULL)
  ++l;
  count(ptr->lchild);
  count(ptr->rchild);
 }
}
//routine to display the tree.
void display(struct tnode *ptr,int lev)
{
 int i;
 if(ptr)
 {
 display(ptr->rchild,lev+1);
 printf("\n");
 for(i=0;i<lev;i++)
 printf("%d",ptr->dat);
 display(ptr->lchild,lev+1);
 }
}
void main()
{
 struct tnode *t=NULL;
 int n;
 l=0;
 clrscr();
 while(1)
 {
 printf("Enter the data value or - 1 to quit:");
 scanf("%d",&n);
 if(n==-1)
 break;
 t=t_insert(t,n);
}
 display(t,n);
 count(t);
 printf("\nThe number of leaf nodes in the created binary tree is : %d",1);
 getch();
}