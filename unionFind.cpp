//Union Find is very important and easy data structure, it enables grouping of different elements in different groups, and taking union of them, moreover path compression is very
//efficient technique, here size variable is used to check which group is smaller so that merging them(UNION) can be calculated efficiently

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class unionFind
{
  vector<int> uf;
  vector<int> size;
  unordered_map<int,int> um;
  int n;

  //Member Function to map the values input to index
  void mapping()
  {
    cout<<"Enter the values\n";
    int count=0,x;
    for(int i=0;i<n;i++)
    {
      cin>>x;
      um[x]=count;
      count++;
    }
  }

//Member function to assign the values
  void assign()
  {
    for(int i=0;i<n;i++)
    {
      uf[i]=i;
      size[i]=1;
    }
    mapping();
  }

public:
  unionFind(int n)
  {
    this->n=n;
    uf.resize(n);
    size.resize(n);
    assign();
  }

//Function to find union
  void unify(int a,int b)
  {
    if(um.find(a)==um.end()||um.find(b)==um.end())return;
    a=um[a];
    b=um[b];
    int temp1=a,temp2=b;
    while(a!=uf[a])
    {
      a=uf[a];
    }
    while(b!=uf[b])
    {
      b=uf[b];
    }
    if(size[a]>size[b])
    {
      while(temp2!=uf[temp2])
      {
        int p=uf[temp2];
        uf[temp2]=a;
        size[temp2]=0;
        temp2=p;
        size[a]++;
      }
      uf[temp2]=a;
      size[a]++;
      size[temp2]=0;
    }
    else
    {
      while(temp1!=uf[temp1])
      {
        int p=uf[temp1];
        uf[temp1]=b;
        size[temp1]=0;
        temp1=p;
        size[a]++;
      }
      uf[temp1]=b;
      size[b]++;
      size[temp1]=0;
    }
  }

//Function to find the the group/parent of particular node
  int find(int a)
  {
    if(um.find(a)!=um.end())
    {
      a=um[a];
      while(a!=uf[a])
      {
        a=uf[a];
      }
      return a;
    }
    else return -1;
  }

};

int main()
{
int n;
cout<<"Enter the number of elements\t";
cin>>n;
unionFind obj(n);
return 0;
}
