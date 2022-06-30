# include <iostream>
using namespace std;
int binary_search(int arr[],int n,int key)
{
    int start=0,end=n-1,mid;
    int index=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
           index=mid;
           start=mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
    }
    return index;
}
int main()
{
    int arr[]={1,3,3,5,6,6,6,7};
    int t;
    cout<<"enter the element whose last occurance need to be searched"<<endl;
    cin>>t;
    int k=binary_search(arr,8,t);
    if(k==-1)
       cout<<"element not found"<<endl;
    else 
       {
        cout<<"last occurance of element is at index: "<<k<<endl;
       }
}