#include<bits/stdc++.h>
#define nloop(s,n) for(int i=s;i<=n;i++)
#define rloop(n,s) for(int i=n;i>=s;i--)
#define loop(v) for(auto &i:v)
#define pb push_back
#define ull unsigned long long
#define ll long long
#define um unordered_map<int,int>
//#define m map<int,int>
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
  int T;
  ios_base::sync_with_stdio(false);
  cin>>T;
  long n,m;
  while(T--)
  {
    string s[3];
    s[0]="";
    s[1]="";
    s[2]="";
    cin>>n>>m;
    if(n==1&&m==1)
    {
      cout<<1<<endl<<1<<endl;
      continue;
    }
    else if(n==2&&m==2)
    {
      cout<<2<<endl<<1<<" "<<2<<endl<<1<<" "<<2<<endl;
      continue;
    }
    else if(n==1||m==1)
    {
      if(n+m==3)
      cout<<1<<endl;
      else cout<<2<<endl;
      int k=0;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(j%2==0)
          {
            k=(k%2);
            k++;
          }
          cout<<k<<" ";
        }
        cout<<endl;
      }
      continue;
    }
    else if(n==2||m==2)
    {
      cout<<3<<endl;
      int k=0;
          for(int j=0;j<m;j++)
          {
            if(j%2==0)
            {
              k=(k%3);
              k++;
            }
            s[0]+=(k-48)+" ";
          }
          k=2;
          s[1]+="2";
          for(int i=0;i<n-1;i++)
          {
            if(i%2==0)
            {
              k=k%3;
              k++;
            }
            s[1]+=(k-48)+" ";
          }
          if(n==2)
          cout<<s[0]<<endl<<s[1]<<endl;
          else
          {
            for(int i=0;i<s[0].length();i+=2)
            {
              cout<<s[0][i]<<" "<<s[1][i]<<endl;
            }
          }
          continue;
      }


  }
  return 0;
}
