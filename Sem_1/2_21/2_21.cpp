#include <iostream>
using namespace std;

int main()
{
	int i=0,n=0,x;
	int a[999];
	cin>>a[n];
	
	while (a[n]!=0)
	{
		n++;
		cin>>a[n];
	}
	for (i;i<n-1;i++)
	{
		if (a[i]<a[i+1])
		{
			x=1;
			
		}
		else
		{
			x=0;
			break;
		}
	}
	
	if (x!=0)
	{
		cout<<"Ïîðÿäû÷íûé";
	}
	else
	{
		cout<<"ÍÅ Ïîðÿäû÷íûé";
	}
}
