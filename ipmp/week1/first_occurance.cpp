#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    long long ans=(long long)arr[n-1]-(long long)arr[n-2];
    int l=1;
    for(int i=n-4;i>=0;i--)
    {
        ans+=(long long)l*arr[i];
        l++;
    }
    if(ans==k)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
}