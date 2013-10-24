/*********************************************************************************
	Program to create a Graph. The graph is represented using
	Adjacency List and traverse the graph in Depth First Search
	Order.
*********************************************************************************/

// List of include files

#include<iostream.h>
#include <conio.h>
#include <stdlib.h>


#define 	MAX	10
#define	TRUE	   1
#define	FALSE  0
// Declaring an adjacency list for storing the graph

template <class T>
class Lgraph
{
   private:
	   typedef struct Gnode
		{
		  T vertex;
			struct Gnode *next;
		 }node;
	   node  *head[MAX];  //Array Of head nodes
	   int  visited[MAX];
		//visited array for checking whether the array is visited or not
   public:
	 void init(),create(),Dfs(T);
};

template <class T>
void Lgraph<T>::init()
{
 int V1;
 for ( V1 = 0; V1 < MAX; V1++)
   visited[V1] = FALSE;
 for ( V1 = 0; V1 < MAX; V1++)
   head[V1] = NULL;
}
/*
--------------------------------------------------------------------------
The create function
--------------------------------------------------------------------------
*/
template <class T>
void Lgraph<T>::create()
{
	T V1, V2;
	char ans='y';
	node *New,*first;
	cout<<"\n\nEnter the vertices no. beginning with 0";
	do
	{
	   cout<<"\nEnter the Edge of a graph \n";
    	   cin>>V1>>V2;
	   // creating link from V1 to V2
	   New = new node;
	   if ( New == NULL )
	     cout<<"Insufficient Memory\n";
	   New -> vertex = V2;
	   New -> next = NULL;
	   first = head[V1];
	   if ( first == NULL )
	     head[V1] = New;
	   else
			{
		while ( first -> next != NULL )
		   first = first-> next;
		first -> next = New;
	    }
	   // creating link from V2 to V1
	    New = new node;
	    if ( New == NULL )
	 	  cout<<"Insufficient Memory\n";
	    New -> vertex = V1;
	    New -> next = NULL;
	    first = head[V2];
	    if ( first == NULL )
	       head[V2] = New;
	    else
	     {
	       while ( first -> next != NULL )
		 first = first-> next;
	       first -> next = New;
				}
	 cout<<"\nWant to add more edges?(y/n)";
	 ans=getche();
	}while(ans=='y');
}
/*
--------------------------------------------------------------------------
The Dfs function
--------------------------------------------------------------------------
*/
template <class T>
void Lgraph<T>::Dfs(T V1)
{
	T V2;
	node *first;
	cout<<endl<<V1;
	visited[V1] = TRUE;
	first = head[V1];
	while ( first != NULL )
		if ( visited[first->vertex] == FALSE )
			 Dfs(first->vertex);
		else
			first = first -> next;
}

/*
--------------------------------------------------------------------------
	The main function
	Input :None
	Output:None
	Parameter Passing Method :None
	Called By : The O.S.
	Calls : create(), Dfs()
--------------------------------------------------------------------------
*/
void main ( )
{
	// Local declarations
	Lgraph <int> gr;
	int V1, V2;
	gr.init();
	gr.create();
	cout<<endl<<"Enter the Vertex from which you want to traverse :";
	cin>>V1;
	cout<<"The Depth First Search of the Graph is \n";
	gr.Dfs(V1);
	getch();

}
