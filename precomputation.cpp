#include<bits/stdc++.h>
using namespace std;
const int N=10e5;
long long fact [N];
int main()
{
   fact[0]=fact[1]=1;
   for(int i=2;i<N;i++)
   {
     fact[i]=fact[i-1] * i;
   }
   int n;
   cin>>n;
   cout << fact[n] << endl;
   }
