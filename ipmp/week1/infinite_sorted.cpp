# include <iostream>
using namespace std;
int binary_search(int arr[],long long int start, long long int end,int target)
{
  long long int mid;
  while(start<=end)
  {
      mid=start+(end-start)/2;
      if(arr[mid]==target)
       return mid;
      else if(arr[mid]>target)
       end=mid-1;
      else if(arr[mid]<target)
       start=mid+1;
  }
  return -1;
}
int main(){
    long long int start=0,high=1;
    cin>>target;
    while(arr[high]<target)
    {
        start=end;
        end=end*2;
    }
    binary_search(arr,start,end,target);
}