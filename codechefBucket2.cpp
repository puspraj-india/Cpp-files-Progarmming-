#include<bits/stdc++.h>
#define nloop(s,n) for(int i=s;i<=n;i++)
#define rloop(n,s) for(int i=n;i>=s;i--)
#define loop(v) for(auto &i:v)
#define pb push_back
#define ull unsigned long long
#define ll long long
#define um unordered_map<int,int>
#define m map<int,int>
#define vec vector<int>
#define us unordered_set<int>
#define set set<int>
#define mset multiset<int>
#define line cout<<endl
#define viter vector<int>::iterator
#define umiter unordered_map<int,int>::iterator
#define usiter unordered_set<int>::iterator
#define siter set<int>::iterator;
#define miter map<int,int>::iterator
#define mode 1000000007
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  int n,k,x;
    cin>>n>>k;
    float **a= new float*[n];
    float b[k]={0};
    float sum[n]={0};
    for(int i=0;i<n;i++)
    a[i]= new float[k];

    for(int i=0;i<n;i++)
    {
      x=0;
      for(int j=0;j<k;j++)
      {
        cin>>a[i][j];
        x=x+a[i][j];
      }
      sum[i]=x;
    }
    /*
    for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<k;j++)
      {
        if(a[i][j]==0)
        continue;
        else
        {
          float temp=a[i][j]/sum[i];
          if(b[j]==0)
          b[j]=temp;
          else b[j]*=temp;
          {
            a[i+1][j]=a[i+1][j]+1;
          }
        }
      }
      sum[i+1]=sum[i+1]+1;
    }
    for(int i=0;i<k;i++)
    {
      if(a[n-1][i]==0)
      cout<<"0.000000"<<" ";
      else if(b[i]!=0)
      {
        cout<<std::setprecision(6)<<b[i]*a[n-1][i]/sum[n-1]<<" ";
      }
      else cout<<std::setprecision(6)<<a[n-1][i]/sum[n-1]<<" ";
    }
  return 0;
}
