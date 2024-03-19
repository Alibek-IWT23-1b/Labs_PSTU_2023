#include <iostream>
#include <math.h>
using namespace std;

int main()

{
	int i,n,sum;
	cin>>n;
	sum=0;
	for (i=1;i<=n;i++)
	{
		if ((i%2)==0)
		{
			sum+=i;
		}
		else
		{
			sum-=i;
		}
	}
	cout<<"sum="<<sum<<endl;
}
