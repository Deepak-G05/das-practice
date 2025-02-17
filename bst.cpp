#include<iostresm>
using namespace std;

class node
{
	int data;
	node *left ;
	node *right;
	
	public:
		node()
		{ 
		left =null;
		right=null;
		data=0;
		}
		
}:
	
class binarysearch_tree()
{
	public:
		node *root;
		binarysearch_tree()
		{
			root =null;
			
		}
		
		node *creatnode();
		void displaytree();
		
		
}:
	node*binarysearch_tree::creatnode() 
	{
		node *temp;
		temp= new node;
		cout<<"Enter data- "<<endl;
		cin>>temp->data;
		temp->left=null;
		temp->right=null;
		return temp;
		 	
	}
	
	void binarysearch_tree::displaytree()
	{
		if (root==null)
		cout<<"tree is empty"<<endl;
		else
		{
			
		}
		
		}
	}
