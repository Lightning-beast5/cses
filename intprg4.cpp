/*Increasing array */
#include <iostream>
using namespace std;
int main()
{
    long long int n=0,i=0,c=0;
    cin >> n;
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        while(arr[i]>arr[i+1])
        {
            c=c+(arr[i]-arr[i+1]);
            arr[i+1]=arr[i];
    
        }
        
    }
    cout<<c;
    return 0;
}