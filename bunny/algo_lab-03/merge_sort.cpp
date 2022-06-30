# include <iostream>
# include <ctime>
# include <stdlib.h>
using namespace std;
void merge(int arr[],int start,int mid,int end)
{
 int left_size=mid-start+1,left[left_size];
 int right_size=end-mid ,right[right_size];
 for(int i=0;i<left_size;i++)
 {
 left[i]=arr[start+i];
 }
 for(int i=0;i<right_size;i++)
 {
 right[i]=arr[mid+i+1];
 }
 int i=0,j=0,k=start;
 while(i<left_size && j<right_size)
 {
 if(left[i]<=right[j])
 {
 arr[k++]=left[i++];
 }
 else if(left[i]>right[j])
 {
 arr[k++]=right[j++];
 }
 }
 while(i<left_size)
 {
 arr[k++]=left[i++];
 }
 while(j<right_size)
 {
 arr[k++]=right[j++];
 }
}
void merge_sort(int arr[],int start,int end)
{
 int length=end-start+1;
 if(length<=1)
 return;
 else
 {
 int mid=start+(end-start)/2;
 merge_sort(arr,start,mid);
 merge_sort(arr,mid+1,end);
 merge(arr,start,mid,end);
 }
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
 int n;
 clock_t start,end;
 cout<<"enter the number of elements in an array"<<endl;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 arr[i]=rand()%(2*n);
 cout<<"the elements of array before sorting: "<<endl;
 for(int i=0;i<n;i++)
 {
 cout<<arr[i]<<" ";
 }
 cout<<endl;
 start=clock();
 merge_sort(arr,0,n-1);
 end=clock();
 double runtime=((double)(end-start)/CLOCKS_PER_SEC)*1000000;
 cout<<"the elements of array after sorting: "<<endl;
 for(int i=0;i<n;i++)
 {
 cout<<arr[i]<<" ";
 }
 cout<<endl;
 cout<<"total runtime for merge sort "<<runtime<<" microseconds"<<endl;
 }
}
