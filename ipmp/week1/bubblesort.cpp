# include <iostream>
# include <ctime>
# include <cstdlib>
using namespace std;
void bubble_sort(int arr[],int n)
{
    int i;
    for(i=n-1;i>=1;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
  int n;
  cout<<"enter the number of elements in array"<<endl;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      arr[i]=rand()%(2*n);
  }
//   cout<<"elements before sort"<<endl;
//   for(int i=0;i<n;i++)
//   {
//       cout<<arr[i]<<" ";
//   }
//   cout<<endl;
  clock_t start,end;
  start=clock();
  bubble_sort(arr,n);
  end=clock();
//   cout<<"elements after sort"<<endl;
//   for(int i=0;i<n;i++)
//   {
//       cout<<arr[i]<<" ";
//   }
//   cout<<endl;
  double time_taken=double(end-start)/(((double)CLOCKS_PER_SEC))*1000000;
  cout<<"time taken by the program to sort : "<<time_taken<<endl;
}