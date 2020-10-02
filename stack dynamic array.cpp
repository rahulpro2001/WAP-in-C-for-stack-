#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,ch,top=-1,n,*p;
	cout<<"size of the stack";
	cin>>n;
	p=(int*)malloc(n*sizeof(int));
	do
  {
	cout<<"enter 1 for push"<<endl;
	cout<<"enter 2 for pop"<<endl;
	cout<<"enter 3 for traverse"<<endl;
	cout<<"enter 4 for exit"<<endl;
	cin>>ch;
		
	switch(ch) //applying switch case 
	{
	  	case 1:
	  		if(top==n-1)
	  		  cout<<"overflow"<<endl;
	  		else
	  		{
	  		  top++;
	  		  cout<<"enter the element to push"<<endl;
			  cin>>*(p+top);	
			}
			break;
		case 2:
		    if(top==-1)
		      cout<<"underflow"<<endl;
			else
			{
			  cout<<"deleted element is "<<*(p+top)<<endl;
			  top--;
		    }
			break;	  
		case 3:
			if(top==-1)
			cout<<"empty stack"<<endl;
			else
			{
			for(i=0;i<=top;i++)
			cout<<*(p+i)<<endl;}
			break;
		case 4 : break;
		default :cout<<"invalid"<<endl;			
	}
	
  }while(ch!=4);
  return 0;
}
