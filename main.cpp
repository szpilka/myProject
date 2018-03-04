#include <iostream>
#include <string.h>


using namespace std;
void print(int P[] , int n, string tab[])
{
    for(int i=0; i < n ; i++)
    {
        cout<< tab[P[i]]<<" " ;
    }
}

Perm(int A[], int Wolne[],int m, int n, string tab[])
{
    for(int j=0; j<n; j++)
    if(Wolne[j]==1)
    {
        A[m]=j;
        Wolne[j]=0;
        if(m==n-1)
            {
                print( A ,3, tab);
            cout<<"\n";}
        else
            Perm(A,Wolne, m+1, n, tab);
        Wolne[j]=1;

    }
}


int main()
{ int n=3;

int  *Wolne= new int[n];
  for (int i=0; i<n; i++)
   Wolne[i]=1;
string C[]={"1","b","a"};
int A[]={1,2,3};
Perm (A,Wolne, 0,n, C);

cout<<C[0];

    return 0;
}
