// Example program
#include <iostream>
#include <string.h>

using namespace std;
int main()
{
	
	char s1[]="zakaz";
	int k=0;
	
	for (int i=0; i<strlen(s1);i++)
	{
		if (s1[i]== s1[strlen(s1)-1-i])
		{
			k++;
		
		}
	}
	
	if (k==strlen(s1)){
		cout<<"Полиндром";
	}
    else{
    	cout<<"Не Полиндром";
	}
}

