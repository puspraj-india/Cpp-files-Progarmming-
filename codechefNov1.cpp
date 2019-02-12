#include<bits/stdc++.h>
#define nloop(n) for(int i=0;i<n;i++)
#define rloop(n) for(int i=n-1;i>=0;i--)
#define kloop(k,n) for(int i=k;i<=n;i++)
#define rkloop(n,k) for(int i=n;i>=k;i--)
#define loop(v) for(auto &i:v)
#define pb push_back
#define ull unsigned long long
#define ll long long
#define um unordered_map<int,int>
#define vec vector<int>
#define us unordered_set<int>
#define line cout<<endl
#define viter vector<int>::iterator
#define umiter unordered_map<int,int>::iterator
#define usiter unordered_set<int>::iterator
#define mode 1000000007
using namespace std;
int main()
{
  int T;
  ull n,a,sum=0;
  ios_base::sync_with_stdio(false);
  cin>>T;
  while(T--)
  {
    sum=0;
    int arr[2001]={0};
    cin>>n;
    int a[n];
    um map;
    umiter iter;
    nloop(n)
    {
      cin>>a[i];
      if(map.find(a[i])==map.end())
      {
        map[a[i]]=1;
      }
      else map[a[i]]+=1;
      arr[a[i]]++;
    }
    sort(a,a+n);
    loop(map)
    {
      sum=sum+(i.second*(i.second+1))/2;
      sum=sum%mode;
    }
    for(int i=0;i<n-1;i++)
    {
      for(int j=i+2;j<n;j++)
      {
        if(a[i]!=a[j])
        {
          int temp=i-j;
          if((temp)%2!=0)
          {
            temp=(i+j)/2;
            if(a[temp]==a[temp+1])
            {
              sum=sum+1;
              //cout<<"1"<<"  ";
            }
          }
          else {
            sum=sum+1;
            //cout<<"1"<<"  ";
          }
          sum=sum%mode;
        }
      }//cout<<endl;
    }
    map.clear();
    cout<<sum<<endl;

  }
  return 0;
}
