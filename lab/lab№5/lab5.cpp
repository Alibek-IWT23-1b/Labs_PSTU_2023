#include <iostream>
#include <stdlib.h>

using namespace std;


void min (int arr[5][5])
{
	int i,j,minn;
	minn=arr[1][1];
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			if (minn> arr[i][j])
			{
				minn=arr[i][j];
				
			}
		
		}
		
	}
	cout<<endl;
	cout<<"min="<<minn<<endl;
}

int main ()
{
	
	int i,j;
	int arr[5][5];
	
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			arr[i][j]=rand()%10+1;
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	min(arr);
	
}
