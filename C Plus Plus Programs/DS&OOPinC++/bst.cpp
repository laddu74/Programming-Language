
/******************************************************************
Program For Implementation Of Binary Search Tree and perform insertion deletion,searching,display of tree.
******************************************************************/
#include<iostream.h>
#include <conio.h>
class bintree
 {
	typedef struct bst
	{
	 int data;
	 struct bst *left,*right;
	}node;
	node  *root,*New,*temp,*parent;
   public:
  bintree()
  {
	root=NULL;
  }
  void create();
  void display();
  void delet();
  void find();
  void insert(node *,node *);
  void inorder(node *);
  void search(node **,int,node **);
  void del(node *,int);


};
void bintree::create()
{
	New=new node;
	New->left=NULL;
	New->right=NULL;
	cout<<"\n Enter The Element ";
	cin>>New->data;
	if(root==NULL)
		root=New;
	else
		insert(root,New);
}
void bintree::insert(node  *root,node *New)
{
	if(New->data<root->data)
	 {
		if(root->left==NULL)
		 root->left=New;
		else
		 insert(root->left,New);
	 }
	if(New->data>root->data)
	{
	 if(root->right==NULL)
			root->right=New;
	 else
			insert(root->right,New);
	}
}

void bintree::display()
{
 if(root==NULL)
	 cout<<"Tree Is Not Created";
 else
	 {
	cout<<"\n The Tree is : ";
	inorder(root);
	 }
}

void bintree::inorder(node  *temp)
{
 if(temp!=NULL)
 {
	inorder(temp->left);
	cout<<"  "<<temp->data;
	inorder(temp->right);
 }
}
void bintree::find()
{
  int key;
  cout<<"\n Enter The Element Which You Want To Search";
  cin>>key;
  temp=root;
  search(&temp,key,&parent);
  if(temp==NULL)
   cout<<"\n Element is not present";
  else
  cout<<"\nParent of node "<<temp->data<<"is "<<parent->data;
}
void bintree::search(node **temp,int key,node **parent)
{
  if(*temp==NULL)
   cout<<endl<<"Tree is Not Created"<<endl;
  else
  {
   while(*temp!=NULL)
   {
	if((*temp)->data==key)
	{
	  cout<<"\nThe"<<(*temp)->data<<"Element is Present";
	  break;
	}
   *parent=*temp;//stores the parent value
   if((*temp)->data>key)
	*temp=(*temp)->left;
   else
	*temp=(*temp)->right;
  }
 }
 return;
}

void bintree::delet()
{
 int key;
 cout<<"\n Enter The Element U wish to Delete";
 cin>>key;
 if(key==root->data)
 {
  bintree();//assigning a value NULL to root
 }
 else
 del(root,key);
}
/*
______________________________________________________________________________________
This function is for deleting a node from binary search tree There exist three possible cases for deletion of a node
______________________________________________________________________________________
*/
void bintree::del(node *root,int key)
{
 node *temp_succ;
  if(root==NULL)
   cout<<"Tree is not Created!";
  else
  {
   temp=root;
   search(&temp,key,&parent);
  //temp node is to be deleted
  /*deleting a node with two children*/
  if(temp->left!=NULL&&temp->right!=NULL)
  {
   parent=temp;
   temp_succ=temp->right;
   while(temp_succ->left!=NULL)
   {
	parent=temp_succ;
	temp_succ=temp_succ->left;
   }
   temp->data=temp_succ->data;
             //copying the immediate successor
   temp->right=NULL;
   cout<<" Now Deleted it!";
   return;
  }
  /*deleting a node having only one child*/
  /*The node to be deleted has left child*/
  if(temp->left!=NULL &&temp->right==NULL)
  {
   if(parent->left==temp)
	parent->left=temp->left;
   else
	parent->right=temp->left;
   temp=NULL;
   delete temp;
   cout<<" Now Deleted it!";
   return;
  }

  /*The node to be deleted has right child*/
  if(temp->left==NULL &&temp->right!=NULL)
  {
   if(parent->left==temp)
	parent->left=temp->right;
   else
	parent->right=temp->right;
   temp=NULL;
   delete temp;
	cout<<" Now Deleted it!";
   return;
  }
  /*deleting a node which is having no child*/
  if(temp->left==NULL &&temp->right==NULL)
  {
	if(parent->left==temp)
	 parent->left=NULL;
	else
	 parent->right=NULL;
   cout<<" Now Deleted it!";
   return;
  }
 }
 }
void main()
{
	 int choice;
	 char ans='N';
	 bintree tr;
	 cout<<"\n\t Program For Binary Search Tree ";
	 do
	 {
	  cout<<"\n1.Create\n2.Search\n3.Delete\n4.Display";
	  cout<<"\n\n Enter your choice :";
	  cin>>choice;
	  switch(choice)
	  {
	   case 1:do
		     {
			 tr.create();
			 cout<<"Do u Want To enter More elements?(y/n)"<<endl;
			 ans=getche();
			}while(ans=='y');
			break;
	   case 2:tr.find();
		     break;
	   case 3:tr.delet();
		  break;
	   case 4:tr.display();
			break;
	}
    }while(choice!=5);
}


