#include<bits/stdc++.h>
#define nloop(s,n) for(int i=s;i<=n;i++)
#define rloop(n,s) for(int i=n;i>=s;i--)
#define loop(v) for(auto &i:v)
#define pb push_back
#define ull unsigned long long
#define ll long long
#define um unordered_map<int,int>
#define map map<int,int>
#define vec vector<int>
#define us unordered_set<int>
#define set set<int>
#define mset multiset<int>
#define line putchar_unlocked('\n');
#define viter vector<int>::iterator
#define umiter unordered_map<int,int>::iterator
#define usiter unordered_set<int>::iterator
#define siter set<int>::iterator;
#define miter map<int,int>::iterator
#define mode 1000000007
#define gc getchar_unlocked()
#define pc(x) putchar_unlocked(x);
using namespace std;

inline int rint()
{
  char ch=gc;
  /*
  bool flag=0;
  if(ch=='-')
  {
    flag=1;
    ch=getchar_unlocked();
  }
  */

  int x=0;
  while(ch>='0'&&ch<='9')
  {
    x=x*10+ch-48;
    ch=gc;
  }
  /*
  if(flag==1)
  return -x;

  else return x;
  */
  return x;
}


inline void pint(int c)
{
  if(c<0)
  {
    pc('-');
    c=-c;
  }

  char ch[10];
  short int i=0;
  do
  {
    ch[i++]=(c%10)+48;
    c=c/10;
  }while(c);
  while(i--)
  {
    pc(ch[i]);
  }
  pc(' ');
}





int main()
{
  int T;
  ios_base::sync_with_stdio(false);
  cin>>T;
  int n,x,y;
  while(T--)
  {
    cin>>x>>y;
    if(x%2==0 ||y%2==0)
    {
      cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
  }
  return 0;
}
