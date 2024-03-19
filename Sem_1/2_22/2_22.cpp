#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	int i,n;
	cin>>n;
	double a[n],max;
	for (i=1;i<=n;i++)
	{
		a[i]=sin(n+(i/n));
		cout<<a[i]<<" ";
	}
	cout<<endl;
	max=a[1];
	for (i=2;i<=n;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<"MAX="<<max<<endl;
	
}
