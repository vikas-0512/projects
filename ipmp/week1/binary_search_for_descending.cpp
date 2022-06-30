# include <iostream>
using namespace std;
int binary_search(int arr[],int n,int key)
{
    int s=0,e=n-1,mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]==key)
         return mid;
        else if(key<arr[mid])
         s=mid+1;
        else if(key>arr[mid])
         e=mid-1;
    }
    return -1;
}
int main()
{
    int arr[]={9,7,5,3,2};
    int t;
    cout<<"enter the element need to be searched"<<endl;
    cin>>t;
    int k=binary_search(arr,5,t);
    if(k==-1)
       cout<<"element not found"<<endl;
    else 
       {
        cout<<"element found at index: "<<k<<endl;
       }
}