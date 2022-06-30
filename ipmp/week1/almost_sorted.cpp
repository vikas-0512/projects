# include <bits/stdc++.h>
using namespace std;

    int findCeling(int arr[], int N,int K) {
    int start=0,end=N-1,mid,res=N+1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==K)
          return mid;
        else if(arr[mid]>K)
        {
            res=mid;
            end=mid-1;
        }
        else if(arr[mid]<K)
        {
          
         start=mid+1;
        }
    }
    return res;  
}
int main()
{
    int k,arr[]={1,2,4,7,10,11};
    cout<<"element needed to be searched"<<endl;
    cin>>k;
    if(findCeling(arr,6,k)==7)
     cout<<"element not found"<<endl;
    else 
     cout<<"element found at index "<<findCeling(arr,6,k)<<endl;
}