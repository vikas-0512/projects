# include <iostream>
# include <set>
using namespace std;
int mex(vector <int>::iteration begin, vector <int>:: iterator end)
{
    set <int> s;
    int max=INT_MIN;
    while(begin!=end)
    {
        if(*begin>max)
          max=*begin;
        s.insert(*begin);
        begin++;
    }
    for(int i=0;i<=max;i++)
    {
        if(s.find(i)==s.end())
          return i;
    }
    return max+1;
}
int main()
{
    int t;
    cin>>t;
    vector<int> a;
    while(t--)
    {
      int n,k,max=INT_MIN;
      cin>>n;
      for(int i=0;i<n;i++)
       {cin>>k;
       if(k>max)
        max=k;
        a.push_back(k);
       }
       int m=mex(a.begin(),a.end());
       if(m<mex)
        cout<<"1"<<endl<<m<<endl;
       else
       {
           int z=0;
           vector <int> ans;
       auto it=a.begin(),it1=a.begin();
       for(;it!=a.end();it++)
       {
           int l=mex(it1,it);
           if(l==m)
           {
             z++;
             v.push_back(l);
           }
           m=mex(++it,a.end());
       }
       cout<<z<<endl;
       for(int i=0;i<z;i++)
       {
           cout<<v[i]<<" ";
       }
       cout<<endl;
       }
    }
}