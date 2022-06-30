#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
void heapify(int arr[],int n,int k)
{
 int left=2*k+1;
 int right=2*k+2;
 int largest=k;
 if(left<n && arr[left]>arr[largest])
 largest=left;
 if(right<n && arr[right]>arr[largest])
 largest=right;
 if(largest!=k)
 {
 swap(arr[largest],arr[k]);
 heapify(arr,n,largest);
 }
}
void heapsort(int arr[],int n)
{
 for(int i=n/2+1;i>=0;i--)
 {
 heapify(arr,n,i);
 }
 for(int i=n-1;i>0;i--)
 {
 swap(arr[0],arr[i]);
 heapify(arr,i,0);
 }
}
int main() {
 int t;
 cin>>t;
 while(t--)
 {
 int n;
 clock_t start,end;
 cout<<"enter the number of elements of array"<<endl;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
 arr[i]=rand()%(2*n);
 }
 cout<<"elements before sorting"<<endl;
 for(int i=0;i<n;i++)
 {
 cout<<arr[i]<<" ";
 }
 cout<<endl;
 start=clock();
 heapsort(arr,n);
 end=clock();
 double runtime=(((double)(end-start))/CLOCKS_PER_SEC)*1000000;
 cout<<"elements after sorting"<<endl;
 for(int i=0;i<n;i++)
 {
 cout<<arr[i]<<" ";
 }
 cout<<endl;
 cout<<"runtime : "<<runtime<<" microseconds"<<endl;
 }
}