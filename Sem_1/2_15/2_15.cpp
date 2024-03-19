#include <iostream>

using namespace std;

int main()

{
	
	int i,n,sum,s;
	cin>>n>>s;
	sum=0;
	for (i=1;i<=n;i++)
	{
		sum+=i;
	}
	if (sum==s)
	{
		cout<<"Âõîäèò"<<endl;
	}
	else
	{
		cout<<"ÍÅ Âõîäèò"<<endl;
	}
	
}
