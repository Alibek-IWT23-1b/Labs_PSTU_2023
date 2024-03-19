#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
int n;

cin >> n;


int stars = n;

for (int i = 0; i <=(n); i++)
{
   
    
    for (int j = 0; j < stars+5; j++)
    {
        cout << "*";
    }
    stars -= 2;
    cout << endl;
}

}
