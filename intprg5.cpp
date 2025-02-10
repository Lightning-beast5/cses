#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n ,m,i;
    cin>>n;
    if(n>3)
    {
        m=n/2;
        for(i=1;i<n;i++)
        {
            while((i%2!=0))
            {
                cout<<n-i<<" ";
                i++;
            }
        } 
        for(i=1;i<n;i++) 
        {
            while(i==m+1)
            {
                cout << n<<" ";
                i++;
            }
        }
        for(i=1;i<n;i++)
        {    
            while((i%2==0))
            {
                cout<<n-i<<" ";
                i++;
            }
        }    
    }
    else if(n==1)
    {
        cout<<n;
    }
    else{
        cout<<"NO SOLUTION";
    }
}
