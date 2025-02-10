#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(6);
    int i,n,p=0,d=0;
    for(i=0;i<6;i++)
    {
        cin>>v[i];
    }
    cout<<"Enter the number whose last occurence you want to check:"<<endl;
    cin>>n;
    for(i=0;i<v.size();i++)
    {
        if(v[i]>n)
        {
            p++;
    }
    }
    cout<<p;

}
