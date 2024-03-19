#include <iostream>
using namespace std;

int main ()
{
	cout<<"N % 4=0"<<endl;
	int n;
	cin>>n;
	
	for (int i=0;i<n/2;i++)
	{
		for (int j=0;j<n/2;j++)
		{
			if ((i==0)||(i==n/2-1))
			{
				cout<<"* ";
			}
			else
			{
				for (int p=0;p<n/2;p++)
				{
					if ((p==0)||(p==(n/2-1)))
					{
						cout<<"* ";
					}
					else
					{
						cout<<" ";
					}
				}
			}
		}
		cout<<endl;
		
	}
	
}
