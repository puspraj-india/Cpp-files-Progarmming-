#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
vector<int> sieve(100001);
vector<int>prime;

void computesieve()
{
  for(int i=2;i<=sqrt(100000);i++)
  {
    if(sieve[i]==0)
    {
      for(int j=i*i;j<=100000;j+=i)
      {
        sieve[j]=1;
      }
    }
  }

  for(int i=2;i<=100000;i++)
  {
    if(sieve[i]==0)
    prime.push_back(i);
  }
}
int main()
{
  computesieve();
  int size1=prime.size();

  int l,r;
  cin>>l>>r;
  int temp=sqrt(r);
  int index=lower_bound(prime.begin(),prime.end(),temp)-prime.begin();
  int arr[r-l+1]={0};
  for(int i=0;i<=index;i++)
  {
    for(int j=ceil(l/prime[i])*prime[i];j<=r;j+=prime[i])
    {
      arr[j-l]=1;
    }
  }
  for(int i=0;i<=r-l;i++)
  {
    if(arr[i]==0)
    cout<<i+l<<" ";
  }

  return 0;

}
