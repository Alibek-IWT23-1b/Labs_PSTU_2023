#include <iostream>

using namespace std;

int main ()
{
	int i,n,max;
	cin>>n;
	int a[n];
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	
	}
	max=a[0];
	int min=a[0];
	for (i=1;i<n;i++)
	{
		if (min>a[i])
		{
			min=a[i];
		}
		if (max<a[i])
		{
			max=a[i];
		}
	}
	cout<<"MAX="<<max<<endl;
	cout<<"MIN="<<min<<endl;
	cout<<"SUM="<<min+max<<endl;
	
}
