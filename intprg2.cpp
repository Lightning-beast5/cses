/*Missing number*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n=0,i,s=0,ts,k=0,m;
    cin>>n;
    long long int a[n-1];
    for(i=0;i<n-1;i++){
    cin >> a[i];
    }
    for(i=0;i<n-1;i++)
    {
        s=s+a[i];
    }
    for(ts=1;ts<=n;ts++)
    {
    k=k+ts;
    }
    m=k-s;
    cout<<m;

    
}