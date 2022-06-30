# include <bits/stdc++.h>
# include <chrono>
# include <cstdlib>
using namespace std;
void linear_search(int arr[],int n,int key)
{
unordered_set <int> s;
 for(int i=0;i<n;i++)
 {
 s.insert(arr[i]);
 }
 if(s.find(key)!=s.end())
 {
 cout<<"element found"<<endl;
 }
 else
 {
 cout<<"element not found"<<endl;
 }
}
int main()
{
int n;
cout<<"enter the number of elements of array"<<endl;
cin>>n;
int arr[n],key;
//cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++)
 arr[i]=rand()%n;
 for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
cout<<"enter the element to be searched"<<endl;
cin>>key;
auto start=chrono::high_resolution_clock::now();
linear_search(arr,n,key);
auto end=chrono::high_resolution_clock::now();
auto run_time=chrono::duration_cast<chrono::microseconds>(end-start);
cout<<"total runtime "<<run_time.count()<<" microseconds"<<endl;
}
