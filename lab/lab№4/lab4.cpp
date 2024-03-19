#include <iostream>
#include <time.h>
#include<math.h>
#include <stdlib.h>
using namespace std;

int main() 
{
int j=0,i,size=9;
int k=6;
	
int arr[size],arr2[size];
  for ( i=0;i<size;i++)
      {
     	arr[i]=rand()%10+1;
       	cout<< arr[i]<<" ";
      }
  cout<<endl;
  for(i=0; i<size;i++)
  {
  	if (i!=k)
  	{
  		arr2[j]=arr[i];
  		j++;
	  }
	  
  }
  for(i=0;i<j;i++)
  cout<<arr2[i]<<" ";
cout <<endl;


j=0;

int sum=size+(size/2);
int arr3[sum];
i=0;
while (j<size)
{
   	if ((((j+1)%2)!=0))
   	{
   		arr3[i]=arr2[j];
   		j++;i++;
   	
	   }
	   else
	   {
	   	arr3[i]=arr2[j];
	   	j++;i++;
	   	arr3[i]=0;
		i++;
	
	   }
}
for (i=0;i<sum-1;i++)
cout<<arr3[i]<<" ";

}
