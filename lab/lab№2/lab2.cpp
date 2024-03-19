#include <iostream>
using namespace std;
int main () {
   
   int i,n,sum;
   sum=0;
   for (i=21; i<100; i++) {
   	n=i % 3;
   	if (n==0) {
     	sum++;
   	    cout<<i<<" ";
   	   }
    }
   cout<<endl<<endl;	
   cout<<"summa="<<sum<<endl;
}
