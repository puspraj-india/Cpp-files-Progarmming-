#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  vector<int> v;
  int x,l,r,k;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    v.push_back(x);
  }
  for(int i=0;i<m;i++)
  {
    cin>>l>>r>>k;
    int count1=0,it=l+1,lt;
    int temp=v[l];
    while(it<=r and count1<k and v[lt]==temp)
    {
      it++;
      count1++;
    }
    if(count1==k)
    {
      cout<<v[lt-1]<<endl;
      break;
    }
    temp=v[(l+r)/2];
    it=(l+r)/2+1;
    lt=(l+r)/2-1;
    count1=0;
    while(lt>=l and count1<k and temp==v[lt])
    {
      lt--;
      count1++;
    }
    while(it<=r && count1<k and temp==v[it])
    {
      it++;
      count1++;
    }
    if(count1==k)
    {
      cout<<v[lt+1]<<endl;
      break;
    }
    cout<<-1;
  }
return 0;
}
