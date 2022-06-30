# include <iostream>
using namespace std;
int binary_search(int arr[],int n,int key,char mode)
{
    int start=0,end=n-1,mid;
    int index=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
           index=mid;
           if(mode=='l')
           start=mid+1;
           else if(mode=='f')
           end=mid-1;
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
    cout<<"enter the element whose count need to be calculated"<<endl;
    cin>>t;
    int first_occurance=binary_search(arr,8,t,'f');
    int last_occurance=binary_search(arr,8,t,'l');
    if(first_occurance==-1)
       cout<<"element not found, i.e count=0"<<endl;
    else 
       {
        cout<<"count of element in the array: "<<(last_occurance-first_occurance+1)<<endl;
       }
}