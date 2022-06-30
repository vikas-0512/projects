# include <bits/stdc++.h>
# include <chrono>
# include <cstdlib>
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
 e=mid-1;
else if(key>arr[mid])
 s=mid+1;
}
return -1;
}
int main()
{
int n;
cout<<"enter the number of elements of array"<<endl;
cin>>n;
int arr[n],key,index;
//cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++)
 arr[i]=rand()%n;
cout<<"enter the element to be searched"<<endl;
cin>>key;
sort(arr,arr+n);
auto start=chrono::high_resolution_clock::now();
index=binary_search(arr,n,key);
auto end=chrono::high_resolution_clock::now();
auto run_time=chrono::duration_cast<chrono::microseconds>(end-start);
if(index==-1)
 cout<<"element is not found"<<endl;
else
 cout<<"element is found at index "<<index<<endl;
cout<<"total runtime "<<run_time.count()<<endl;
}
