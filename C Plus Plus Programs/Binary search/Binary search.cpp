//Write a program for implementation of binary search tree perform insertion deletion &searching display of tree
#include<iostream.h>
class bintree{type struct bst{int data;struct bst *left *right;}node;
node *root,*new,*temp,*parent;
public:
	bintree(){root = NULL;}
	void create();
	void display();
	void delete();
	void find();
	void insert(node*,node*);
	void inorder(node*);
	void search(node **,int node ** );
	void del(node *,int);
};
void bintree::create()
{
new = new node;
new -> left = NULL;
new -> right = NULL;
cout<<"\n Enter the element:" ;
cin>>new->data;
if(root == NULL)
 root = new;
else
 insert(root,new);
}
void bintree::insert()
{
if(new->data<root->data)
{
if(root->left = NULL)
 root->left = new;
else insert(root->left new);
}
if(new->data>root->data)
{
if(root->right == NULL)
	root->right = new;
else insert(root->right,new)
}

}

void bintree::display()
{
if(root == NULL)
cout<<"Tree is not created:";
else{cout<<"\nThe tree";inorder(root);}
}
}
void bintree::inorder(node *temp)
{
if(temp!= NULL){inorder(temp->left);cout<<" "<<temp->data;inorder(temp->right);}
}
void bintree::find()
{
int key;
cout<<"\nEnter the element which you want to search";
cin>>key;
temp = root;
search(&temp,key,&parent);
if(temp = NULL)cout<<"\nElement is not present";
else cout<<"\nParent is node"<<temp->data<<"is"<<parent->data;
}
void bintree::search(node**temp,int key,node**parent){if(*temp == NULL) cout<<"\nTree is not created"<<endl;else{while(*temp != NULL){if(*temp->data == key){cout<<"\nthe "<<*temp->data<<"element is present";break;}*parent = *temp;if(*temp->data>key)*temp= *temp>left;else *temp=*temp->right;}}}
void bintree::delete(){int key; cout<<"\nEnter the element U wish to delete"; cin>>key; if(key == root->data){bintree();}else del(root,key);}
void bintree::del(node* root,int key){node*temp,succ; if(root == NULL)cout<<"\nTree is not created";else{temp = root;search(&temp,key,&parent);if(temo->left != NULL && temp->right=NULL){parent = temp;temp_succ = temp->right;while(temp->succ->left!=NULL)parent= temp_succ;temp_succ= temp_succ->left;temp_succ->data= temp_succ->data;temp->right= NULL;cout<<"Now delete it";return;}}
void main()
{
int choice;
char ans = N;
bintree tr;
cout<<"\n Program for binary search tree:";
do{cout<<"\n1.create\n2.search\n3.Delete\n4.display\n";cout<<"\nEnter the choice:";cin>>choice;switch(choice){case 1:do{tr.create();cout<<"Do you want to enter more element(y/n):"<<endl;ans=getch();}while(ans="y");break;case 2:tr.find();break; case 3:tr.delete();break; case 4:tr.display();break;}}while(choice != 5);getch();}
}

