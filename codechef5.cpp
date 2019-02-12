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
  node*prev;
}*head=NULL,*tail=NULL;

node* create_node(bool val)
{
  node *temp=new node;
  temp->next=NULL;
  temp->prev=NULL;
  temp->item=val;
  return temp;
}

void insert_node(bool val)
{
  node* temp=create_node(val);
  if(head==NULL)
  {
    head=temp;
    tail=temp;
    return;
  }

  temp->prev=tail;
  tail->next=temp;
  tail=temp;
}

void rotate()
{
  node*temp=head;
  head=tail;
  tail=tail->prev;
  head->prev=NULL;
  head->next=temp;
  temp->prev=head;
  tail->next=NULL;
}
void maxk(int k)
{
  int globalmax=0,count=0;
  node*temp=head;
  if(temp->item==1)
  count=1;
  else count=0;
  temp=temp->next;
  for(;temp!=NULL&&count<k;temp=temp->next)
  {
    if(temp->item==1)
    {
      count++;
      if(globalmax<count)
      globalmax=count;
      continue;
    }
    count=0;
  }
  cout<<globalmax<<endl;
}

void traverse()
{
  node*temp=head;
  while(temp!=NULL)
  {
    cout<<temp->item<<"-->";
    temp=temp->next;
  }
  cout<<"NULL";
}


int main()
{
  int T;

  bool x;
  ios_base::sync_with_stdio(false);
  cin>>T;
  while(T--)
  {
    string s;
    int n,q,k;
    cin>>n>>q>>k;
    nloop(n)
    {
      cin>>x;
      insert_node(x);
    }
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
      if(s[i]=='!')
      rotate();
      else maxk(k);
    }
    head=NULL;
    tail=NULL;
  }
  return 0;
}
