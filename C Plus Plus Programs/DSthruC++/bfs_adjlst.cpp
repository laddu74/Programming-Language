/*******************************************************************
	Program to create a Graph. The graph is represented using
	Adjacency List and traversing the graph in Breadth First Search
	Order.

********************************************************************/

#include<iostream.h>
#include <conio.h>
#include <stdlib.h>

#define     MAX      10
#define		TRUE	 1
#define		FALSE	 0

template <class T>
class Lgraph
{
	 private:
		typedef struct Gnode
		 {
		 T vertex;
		 struct Gnode *next;
		 }node;
		 node *head[MAX];
		 int visited[MAX];
		 T Queue[MAX];
		 int front,rear;
	public:
		void init();
		void create();
		void bfs(T);
};

template <class T>
void Lgraph<T>::init()
		{
		 int V1;
		 for ( V1 = 0; V1 < MAX; V1++)
		 visited[V1] = FALSE;
		 front = rear = -1;
		 for ( V1 = 0; V1 < MAX; V1++)
		 head[V1] = NULL;
		}
/*
--------------------------------------------------------------------------
The create function
It creates the graph using adjacency list
Called By main
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
The bfs Function
It displays the graph in breadth first search manner
Input:Any vertex V1
Called By main
--------------------------------------------------------------------------
*/
template <class T>
void Lgraph<T>::bfs(T V1)
{
	T i;
	node *first;
	Queue[++rear] = V1;
	while ( front != rear)
	{
		i = Queue[++front];
		if ( visited[i] == FALSE )
		{
			cout<<endl<<i;
			visited[i] = TRUE;
		}
		first = head[i];
		while ( first != NULL )
		{
			if ( visited[first->vertex] == FALSE )
				 Queue[++rear] = first->vertex;
			first = first -> next;
		}
	}
}


/*
--------------------------------------------------------------------------
	The main function
	Input :None
	Output:None
	Parameter Passing Method :None
	Called By : The O.S.
	Calls : create(), bfs()
--------------------------------------------------------------------------
*/
void main ( )
{
	 // Local declarations

	char ans;
	Lgraph <int> gr;
	int V1;
	gr.init();
	gr.create();
	clrscr();
	cout<<"Enter the Vertex from which you want to traverse :";
	cin>>V1;
	cout<<"The Breadth First Search of the Graph is \n";
	gr.bfs(V1);
	getch();
}
