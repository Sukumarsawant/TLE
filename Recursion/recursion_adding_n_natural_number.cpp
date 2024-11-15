#include<bits/stdc++.h>
using namespace std;
 
int sum(int n ){
   //think about minimal task u need to do 
   if(n>0)
      return n+sum(n-1);
   else return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int n ; 
 cin>>n;  
cout<<sum(n);
}

