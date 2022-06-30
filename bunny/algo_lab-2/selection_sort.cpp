# include <iostream>
# include <ctime>
# include <cstdlib>
using namespace std;
void selection_sort(int arr[],int n)
{
 for(int i=n-1;i>=1;i--)
 { 
 int max=0;
 for(int j=0;j<=i;j++)
 {
 if(arr[j]>arr[max])
 max=j;
 }
 if(i!=max)
 swap(arr[i],arr[max]);
 }
}
int main()
{
 int testcases;
 cin>>testcases;
 while(testcases--)
 {
 int n;
 cout<<"enter the number of elements in array"<<endl;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
 arr[i]=rand()%(2*n);
 }
 cout<<"elements before sort"<<endl;
 for(int i=0;i<n;i++)
 {
 cout<<arr[i]<<" ";
 }
 cout<<endl;
 clock_t start,end;
 start=clock();
 selection_sort(arr,n);
 end=clock();
 double time_taken=double(end-start)/(((double)CLOCKS_PER_SEC))*1000000;
 cout<<"elements after sort"<<endl;
 for(int i=0;i<n;i++)
 {
 cout<<arr[i]<<" ";
 }
 cout<<endl;
 cout<<"time taken by the program to sort : "<<time_taken<<" microseconds"<<endl;
 }
}