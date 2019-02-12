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
  int T;
  char ch;
  cin>>T;
  ch=getchar();
  int n;
  while(T--)
  {
    string s;
    int flag=0;
    getline(cin,s);
    if(s.length()<3)
    {
      cout<<"regularly fancy\n";
      continue;
    }
    if(s.length()==3)
    {
      if(s[0]=='n'&&s[1]=='o'&&s[2]=='t')
      {
        cout<<"Real Fancy\n";

      }
      else cout<<"regularly fancy\n";
      continue;
    }
    if(s[0]=='n'&&s[1]=='o'&&s[2]=='t'&&s[3]==' ')
    {
      cout<<"Real Fancy\n";
      continue;
    }
    int l=s.length();

    if(s[l-1]=='t' &&s[l-2]=='o' &&s[l-3]=='n' && s[l-4]==' ')
    {
      cout<<"Real Fancy\n";
      continue;
    }
    for(int i=0;i<=l-4;i++)
    {
        if(s[i]==' ' && s[i+1]=='n'&& s[i+2]=='o'&& s[i+3]=='t' && s[i+4]==' ')
        {
          flag=1;
          break;
        }
      }
    if(flag==0)
    {
      cout<<"regularly fancy\n";
    }
    else cout<<"Real Fancy\n";

  }
  return 0;
}
