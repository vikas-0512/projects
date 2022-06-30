#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int partition(int arr[],int l,int r)
{
 int pivot=arr[r];
 int pIndex=l,k=0;
 for(int i=l;i<r;i++)
 {
 if(arr[i]<=pivot)
 {
 swap(arr[pIndex++],arr[i]);
 }
 }
 swap(arr[pIndex],arr[r]);
 return pIndex;
}
void quicksort(int arr[],int l,int r)
{
 if(l>=r)
 return;
 else
 {
 int pIndex=partition(arr,l,r);
 quicksort(arr,l,pIndex-1);
 quicksort(arr,pIndex+1,r);
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
 cout<<"enter the number of elements in the array"<<endl;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 arr[i]=rand()%(2*n);
 cout<<"elements of the array before sorting"<<endl;
 for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
 start=clock();
 quicksort(arr,0,n-1);
 end=clock();
 double runtime=(((double)(end-start))/CLOCKS_PER_SEC)*1000000;
 cout<<"elements of the array before sorting"<<endl;
 for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
 cout<<"runtime for quicksort: "<<runtime<<" microseconds"<<endl;
 }
}
