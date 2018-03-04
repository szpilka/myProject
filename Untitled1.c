
#include <iostream>
#include <conio.h>
using namespace std;
void print(int P[] , int n)
{
    for(int i=0; i < n ; i++)
    {
        cout<< P[i] ;
    }
}


void  perm(int  n ,int P [])
{
    if (n==1)
        {cout << "\n";
        print(P,3);}
    else for(int i=0; i<n; i++)
            { swap (P[i], P[n-1]);
            perm (n-1, P);
            swap ( P[i], P[n-1]);}
}
int main()
{
    int P[]={1,2,3};
    perm(3, P);
    return 0;
}
