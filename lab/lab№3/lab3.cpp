#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
   int i=1,n=10,j=1;
   
   double x=0.1,s=1;
   
   for (i;i<=n;i++)
   {
   	cout<<"x="<<x<<" ";
    cout<<"y="<<pow(3,x)<<endl;
   	j=j*i;
   	s=s+( ( (pow(log(3),i)) /j )*pow(x,i));
   	x=x+0.1;
   	
   }
   
   cout<<"S="<<s<<endl;
	
   }
   
   
   
   
