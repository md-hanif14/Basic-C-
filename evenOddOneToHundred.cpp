#include<iostream>
using namespace std;

int main()
{
    int i;
    for(i=1; i<=100; i+=2) //for odd
    {
        cout<< i << endl;
    }
     for(i=2; i<=100; i+=2) //for even
    {
        cout<< i << endl;
    }
    cout<< "Revers"<< endl;
     for(i=99; i>=1; i-=2) //for odd
    {
        cout<< i << endl;
    }
}
