/******************************************************************
Implementation of Kruskal's Algorithm
******************************************************************/
#include<iostream.h>
#define INFINITY 999
template <class T>
class KRUSKAL
{
 private:
	 typedef struct Graph
	 {
       	   int v1;
	   int v2;
	   T cost;
	 }GR;
	 GR G[20];
 public:
	 int tot_edges,tot_nodes;
	 void create();
	 void spanning_tree();
	 void get_input();
	 int Minimum(int);
};
int Find(int v2,int parent[])
{
 while(parent[v2]!=v2)
 {
	v2=parent[v2];
 }
 return v2;
}
void Union(int i,int j,int parent[])
{
 if(i<j)
	 parent[j]=i;
 else
	 parent[i]=j;
}
template <class T>
void KRUSKAL<T>::get_input()
{
 cout<<"\n Enter Total number of nodes: ";
 cin>>tot_nodes;
 cout<<"\n Enter Total number of edges: ";
 cin>>tot_edges;
}

template <class T>
void KRUSKAL<T>::create()
{
 for(int k=0;k<tot_edges;k++)
 {
	cout<<"\n Enter Edge in (V1 V2)form ";
	cin>>G[k].v1>>G[k].v2;
	cout<<"\n Enter Corresponding Cost ";
	cin>>G[k].cost;
 }
}

template <class T>
int KRUSKAL<T>::Minimum(int n)
{
 int i,small,pos;
 small=INFINITY;
 pos=-1;
 for(i=0;i<n;i++)
 {
	if(G[i].cost<small)
	{
		small=G[i].cost;
		pos=i;
	}
 }
 return pos;
}

template <class T>
void KRUSKAL<T>::spanning_tree()
{
	int count,k,v1,v2,i,j,tree[10][10],pos,parent[10];
	T sum;
	count=0;
	k=0;
	sum=0;
	for(i=0;i<tot_nodes;i++)
	 parent[i]=i;
	while(count!=tot_nodes-1)
	{
	 pos=Minimum(tot_edges);//finding the minimum cost edge
	 if(pos==-1)//Perhaps no node in the graph
		break;
	 v1=G[pos].v1;
	 v2=G[pos].v2;
	 i=Find(v1,parent);
	 j=Find(v2,parent);
	 if(i!=j)
	 {
		tree[k][0]=v1;//storing the minimum edege in array tree[]
		tree[k][1]=v2;
		k++;
		count++;
		sum+=G[pos].cost;//accumulating the total cost of MST
		Union(i,j,parent);
	 }
	 G[pos].cost=INFINITY;
	}
	if(count==tot_nodes-1)
	{
	 cout<<"\n Spanning tree is..."<<endl;
	 cout<<"\n------------------------"<<endl;
	 for(i=0;i<tot_nodes-1;i++)
	 {
		cout<<"["<<tree[i][0];
		cout<<" - ";
		cout<<tree[i][1]<<"]"<<endl;
	 }
	 cout<<"\n------------------------"<<endl;
	 cout<<"Cost of Spanning Tree is = "<<sum<<endl;
	}
	else
	{
	 cout<<"There is no Spanning Tree"<<endl;
	}
}

void main()
{
 KRUSKAL <int> obj;
 cout<<"\n\t Graph Creation ";
 obj.get_input();
 obj.create();
 obj.spanning_tree();
}
