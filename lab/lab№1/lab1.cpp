#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	double a,b;
	double f;
	
	a=1000;
	b=0.0001;
	

	f=((pow(a,2)+2*a*b+pow(b,2))-(pow(a,2)+2*a*b))/pow(b,2);
	cout<<"f="<<f<<endl;

	
   }

