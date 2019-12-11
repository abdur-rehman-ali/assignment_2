#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int arr[3][3];
	int final_state[3][3];
	int opt;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			static int k=0;
			final_state[i][j]=k;
			k++;
		}
		
	}
	cout<<"Displaying final state..."<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			
			cout<<setw(4)<<final_state[i][j];
		}
		cout<<endl;
		
	}
	
	cout<<"Taking inputs..."<<endl;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			
			arr[i][j]=0;
		}
		
	}
	
	for(int i=0;i<3;i++)
	{
		
		for(int j=0;j<3;j++)
		{
			cout<<"Press 0 if u want to keep that slot empty or any other number if u want to allot it value ;";
			cin>>opt;
			
			if(opt==0)
			{
				continue;
			}
			else{
			
			cout<<"Enter value :";
			cin>>arr[i][j];
			}
			
		}
	}
	cout<<"DISPLAYING VALUES..."<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			
			cout<<arr[i][j]<<setw(4);
		}
		cout<<endl;
	}
}
