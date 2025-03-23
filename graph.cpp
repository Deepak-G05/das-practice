#include<iostream>
#include<queue>
using namespace std;

class Graph
{
	string city[10];
	int a[10][10];
	int n;
	public:
		void input ();
		void output();
		void BFS();
				
};

void Graph::input()
{
	cout <<"Enyer the no of city- "<<endl;
	cin>>n;
	
	cout <<"Enter names of city"<<endl;
	for (int i=0;i<n;i++)
	cin>>city[i];
	
	cout <<"Enter the distance- "<<endl;
	for (int i=0;i<n;i++)
		for (int j=i;j<n;j++)
		{
			if (i==j)
			{
				a[i][j]=0;
				continue;
			
			}
			
			cout <<"Enter the distance between "<<a[i]<<"and"<<a[j] <<endl;
			cin >>a[i][j];
			a[j][i]=a[i][j];
				
			
		}
}

void Graph::output()
{
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		fot(int j=0;j<n;j++)
		(
			cout<<a[i][j]<<endll;
		)
	}
}

void Graph::BFS()
{
	queue<int> q;
	int visit [n];
	for (int i=0;i,n ;i++)
		visit[i]=0;
		
	string start;
	int index;
	
	cout <<"Enter starting city- "<<endl;
	cin>>start;
	
	for(int i=0;i<n;i++)
		if (start == city[i])
			index =i;
			
	visit [index] =1;
	cout <<city[index]<<endl;
	int current =index ;
	while(1)
	{
		for (int i =0;i<n;i++)
		{
			if (a[current][i]!=0 && visit[i]==o)
			{
				visit [i]=1;
				q.add(i);
				cout<<city[i]<<endl;
			}
		}
		
		if (q.empty()!=0)
		{
			cout<<"inside Empty block"<<q.empty()<<"before break"<<endl;
			break;
		}
		else 
		{
			current=q.front() ;
			q.pop();
		}
	}
	
}

int main ()
{
	Graph g1;
	int choice;
	cout<<"1. input \n 2. diaplay\n 3. bfs"<<endl;
	cout <<"enter your choice"
	cin>>choice;
	switch(choice)
	{
		case 1:
			g1.input();
			break;
		case 2:
			g1.output();
			break;
		case 3:
			g1.BFS();
			break;
		default :
			cout<<"invalid choice"
	}
}




















