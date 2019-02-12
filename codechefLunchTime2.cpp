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
//#define set set<int>
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

set<pair<int,int>> s;

void moves(int x,int y,int k)
{
  if(k==0) return;
  s.insert(make_pair(x,y));

  if((y+1<=8))
    moves(x,y+1,k-1);
  if(x+1<=8)
    moves(x+1,y,k-1);
  if(x-1>=1)
    moves(x-1,y,k-1);
  if(y-1>=1)
    moves(x,y-1,k-1);
  if(x+1<=8 &&y+1<=8)
    moves(x+1,y+1,k-1);
  if(x-1>=1 && y-1>=1)
    moves(x-1,y-1,k-1);
  if(x-1>=1 && y+1<=8)
    moves(x-1,y+1,k-1);
  if(x+1<=8 && y-1>=1)
    moves(x+1,y-1,k-1);
}


int main()
{
  int T;
  set<pair<int,int>>::iterator it;
  ios_base::sync_with_stdio(false);
  cin>>T;

  while(T--)
  {
    int x,y,k;
    cin>>y>>x>>k;
      //moves(x,y,k+1);
      int x1=x,x2=x,y1=y,y2=y,m=1,n=1;
    while(k--)
    {
      if(x1-1>0 and x2+1<9)
      {
        m+=2;
        x1=x1-1;
        x2=x2+1;
      }
      else  {
        m+=1;
        if(x1-1>0)
        x1=x1-1;
        else if(x2+1<9)
        x2=x2+1;
      }

      if(y1-1>0 and y2+1<9)
      {
        n=n+2;
        y1=y1-1;
        y2=y2+1;
      }
      else {
        n=n+1;
        if(y1-1>0)
        y1=y1-1;
        else if(y2+1<9) y2=y1+1;
      }
    }
    //cout<<s.size()<<endl;
    if(m*n>64)
    {
      cout<<64<<endl;
    }
    else
    cout<<m*n<<endl;
  }
  return 0;
}
