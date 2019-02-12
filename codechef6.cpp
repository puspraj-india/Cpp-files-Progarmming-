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

struct node
{
  bool item;
  node*next;
}*head=NULL,*tail=NULL;

void insert_node(bool val)
{
  node*temp=new node;
  temp->item=val;
  if(head==NULL)
  {
    head=temp;
    tail=temp;
    temp->next=head;
    return;
  }
  tail->next=temp;
  tail=temp;
  temp->next=head;
}
/*
void traverse(int n)
{
  node*temp=head;
  nloop(n)
  {
    cout<<temp->item<<"-->";
    temp=temp->next;
  }
  cout<<"NULL";
}
*/
void maxk(int k,int n)
{
  int globalmax=0;
  int count=0;
  node*temp=head;
  nloop(n)
  {
    if(temp->item==1)
    {
      count++;
      if(globalmax<count)
      {
        globalmax=count;
      }
    }
    else
    count=0;
    if(globalmax==k)
    break;
    temp=temp->next;
  }
  cout<<globalmax<<endl;
}

void rotate()
{
  head=head->next;
}

int main()
{
  int T,n,k,q;
  bool x;
  ios_base::sync_with_stdio(false);
  cin>>T;
  while(T--)
  {
    string s;
    cin>>n>>q>>k;
    nloop(n)
    {
      cin>>x;
      insert_node(x);
    }
    cin>>s;
    nloop(s.length())
    {
      if(s[i]=='!')
      rotate();
      else
      maxk(k,n);
    }
head=NULL;
  }
  return 0;
}
