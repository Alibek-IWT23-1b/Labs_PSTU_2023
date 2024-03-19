#include <iostream>
using namespace std;

int main ()
{
	int n,i,j,p;
	cin>>n;
	
	for (i=0;i<n/2;i++)
	{
		
		if ((i==0)||(i==(n/2-1)))
		{
		  for (j=0;j<n/2;j++)
		    {
				cout<<"* ";
			}
			
		 }
		 else 
		 {
		 	for (p=0;p<n/2;p++)
		 	{
		 		if ((p==0)||(p==(n/2-1)))
		 		{
		 			cout<<"* ";
				 }
				 else 
				 {
				 	cout<<"  ";
				 }
			 }
				 }		cout<<endl; 
		
		
	}
	
	
}
