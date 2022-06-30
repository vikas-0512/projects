 #include <bits/stdc++.h>
 # include <chrono>
 # include <cstdlib>
 using namespace std;
 int linear_search(int arr[],int n,int key)
 {for(int i=0;i<n;i++)
 {if(arr[i]==key) return i;}
 return -1;}
 int main()
 {int n;
 cout<<"enter the number of elements of array"<<endl;
 cin>>n;
 int arr[n],key,index;
 //cout<<"enter the elements"<<endl;
 for(int i=0;i<n;i++) 
  arr[i]=rand()%n;
cout<<"enter the element to be searched"<<endl;
cin>>key;auto start=chrono::high_resolution_clock::now();
index=linear_search(arr,n,key);
auto end=chrono::high_resolution_clock::now();
auto run_time=chrono::duration_cast<chrono::microseconds>(end-start);
if(index==-1) cout<<"element is not found"<<endl;
else 
cout<<"element is found at index "<<index<<endl;
cout<<"total runtime "<<run_time.count()<<endl;
} 