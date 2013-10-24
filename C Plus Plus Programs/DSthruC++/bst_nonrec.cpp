/**********************************************************
Program For Implementation Of Binary Search Tree and
Non recursive inorder,preorder and postorder traversals.
************************************************************/
#include<iostream.h>
#include<conio.h>
#include <stdlib.h>

template <class T>
class bintree
 {
	public:
	typedef struct bst
	{
	 T data;
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
	void insert(node *,node *);
	void inorder(node *);
	void preorder(node *);
	void postorder(node *);
	void push(node *item,int *top,node *s[10]);
	int stempty(int);
	void pop(int *top,node *s[10],node **curent);
 };
 template <class T>
 void bintree <T>::insert(node *root,node *New)
 {
	if(New->data<(root)->data)
	 {
		if((root->left)==NULL)
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
/*

  creattion of binary search tree

 */
template <class T>
void bintree<T>::create()
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
/*
  display of binary search tree
 
*/
template <class T>
void bintree<T>::display()
{
 if(root==NULL)
	 cout<<"Tree Is Not Created";
 else
	 {
		cout<<"\n The Inorder Traversal of Tree is : ";
		inorder(root);
		cout<<"\n The Preoder Traversal of Tree is : ";
		preorder(root);
		cout<<"\n The Preoder Traversal of Tree is : ";
		postorder(root);
	 }
}
/* 
     pushing the element onto the stack
*/
template <class T>
void bintree<T>::push(node *item,int *top,node *s[])
{
 *top=*top+1;
 s[*top]=item;
}
/*
    popping the element from the stack

*/
template <class T>
void bintree<T>::pop(int *top,node *s[],node **current)
{
 *current=s[(*top)--];
}
/*
 Checking for stack empty condition
*/
template <class T>
int bintree<T>::stempty(int top)
{
 if(top==-1)
	 return 1;
 else
	 return 0;
}
/* 
    Inorder display of tree

*/
template <class T>
void bintree<T>::inorder(node  *root)
{
 node *current,*s[10];
 int top=-1;
 if(root==NULL)
 {
	 cout<<"\n Tree is empty"<<endl;
	 return;
 }
 current=root;
 for(;;)
 {
	 while(current!=NULL)
	 {
		 push(current,&top,s);
		 current=current->left;
	 }
	 if(!stempty(top))
	 {
		 pop(&top,s,&current);
		 cout<<"  "<<current->data;
		 current=current->right;
	 }
	 else
		 return;
 }
}

/*
  Preorder display of tree
*/
template <class T>
void bintree<T>::preorder(node *root)
{
 node *current,*s[10];
 int top=-1;
 if(root==NULL)
 {
	cout<<"\n The Tree is empty"<<endl;
	return;
 }
 current=root;
 for(;;)
 {
	while(current!=NULL)
	{
	 cout<<" "<<current->data;
	 push(current,&top,s);
	 current=current->left;
	}
	if(!stempty(top))
	{
	 pop(&top,s,&current);
	 current=current->right;
	}
	else
	 return;
 }
}
/*
      Postorder display of tree
*/
template <class T>
void bintree<T>::postorder(node *root)
{
 struct stack
 {
	node *element;//Here placing the node containing value 
	int check;//check 1 means visiting left subtree
	          //check 0 means visiting right subtree
 }st[10];
 int top=-1;
 node *current;
 if(root==NULL)
 {
	cout<<"\n The Tree is empty"<<endl;
	return;
 }
 current=root;
 for(;;)
 {
	 while(current!=NULL)
	 {
		top++;
		st[top].element=current;
		st[top].check=1;//visiting the left subbranch
		current=current->left;
	 }
	 while(st[top].check==0)
	 {
		current=st[top].element;
		top--;
		cout<<"  "<<current->data;
		if(stempty(top))
		 return;
	 }
	 current=st[top].element;//pushing the element onto the stack
	 current=current->right;
	 st[top].check=0;//visiting right subtree
 }
}
void main()
{
	 int choice;
	 char ans='N';
	 bintree <int> tr;
	 cout<<"\n\t Program For Binary Search Tree ";
	 while(1)
	 {
		cout<<"\n1.Create\n2.Display \n3. Exit";
		cout<<"\n\n Enter your choice :";
		cin>>choice;
		switch(choice)
		{
		 case 1:do
				{
				 tr.create();
				 cout<<"Do u Want To enter More  elements?(y/n)"<<endl;
				 ans=getche();
				}while(ans=='y');
				break;
		 case 2:tr.display();
				break;
		 case 3:exit(0);
		}
	}
return;
}

