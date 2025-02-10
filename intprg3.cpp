/*Repetitions*/
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
    int s=1,t=1,i,n;
    string a;
    cin>>a;
    n=a.length();
    if(n>0&&n<=pow(10,6)){
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            t++;
            
        if(s<=t)
        {
            s=t;
        }
        }
        else
        {
            t=1;
        }
        }

    }
    cout<<s;
    return 0;
    
}