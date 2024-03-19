#include <iostream>
#include <math.h>

using namespace std;
int main ()
{
	double a,b,c,d,x1=0,x2=0;
	cout<<"a=";
	cin>>a; cout<<endl;
	cout<<"b=";
	cin>>b; cout<<endl;
	cout<<"c=";
	cin>>c; cout<<endl;
	
	d=pow(b,2)-(4*a*c);
	d=sqrt(d);
	if (d<0)
	{
		cout<<"D<0 óðàâíåíèÿ íåò äåéñâèòåëüíûõ êîðíåé"<<endl;
	}
	else
	{
		if (d==0)
		{
			x1=(-b-d)/(2*a);
			cout<<"x1="<<x1<<endl;
		}
		else
		{
			x1=(-b-d)/(2*a);
			cout<<"x1="<<x1<<endl;
			x2=(-b+d)/(2*a);
			cout<<"x2="<<x2<<endl;
		}
	}		
}
