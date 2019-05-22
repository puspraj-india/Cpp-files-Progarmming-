#include<iostream>
#include<limits.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

struct segTree
{
  int *left,*right;
  vector<int> *minimum;
  segTree(int n)
  {
    left=new int[4*n];
    right=new int[4*n];
    minimum=new vector<int>[4*n];
    for(int i=0;i<4*n;i++)
    {
      left[i]=right[i]=0;
    }
    init(0,0,n-1);
  }

  void init(int index,int a,int b)
  {
    if(a==b)
    {
      left[index]=right[index]=a;
      return;
    }
    int mid=(a+b)/2;
    left[index]=a;
    right[index]=b;
    init(2*index+1,a,mid);
    init(2*index+2,mid+1,b);
  }


  vector<int> mergeSort(int index,vector<int> arr,int l,int r)
  {
    if(l<r)
    {
      int mid=(l+r)/2;
      merge(index,mergeSort(2*index+1,arr,l,mid),mergeSort(2*index+2,arr,mid+1,r));
    }
    else minimum[index].push_back(arr[l]);

    return minimum[index];
  }


  void merge(int index,vector<int> arr1,vector<int>arr2)
  {
    int size1=arr1.size(),size2=arr2.size();
    int i=0,j=0;
    while(i<size1 &&j<size2)
    {
      if(arr1[i]<arr2[j])
      {
        minimum[index].push_back(arr1[i]);
        i++;
      }
      else
      {
        minimum[index].push_back(arr2[j]);
        j++;
      }
    }
    while(i<size1)
    {
      minimum[index].push_back(arr1[i]);
      i++;
    }
    while(j<size2)
    {
      minimum[index].push_back(arr2[j]);
      j++;
    }
  }

  int query(int index,int a,int b,int val)
  {
    if(left[index]>b||right[index]<a)
    return 0;
    if(a<=left[index] and b>=right[index])
    {
      return lower_bound(minimum[index].begin(),minimum[index].end(),val)-minimum[index].begin();
    }
    return query(2*index+1,a,b,val)+query(2*index+2,a,b,val);
  }

  //
  // void display(int n)
  // {
  //   for(int i=0;i<4*n;i++)
  //   {
  //     cout<<"["<<left[i]<<","<<right[i]<<"] = ";
  //     for(int j=0;j<minimum[i].size();j++)
  //     cout<<minimum[i][j]<<" ";
  //     cout<<endl;
  //   }
  // }
};

int main()
{
  int n,x,k;
  cin>>n;
  segTree obj(n);
  vector<int> arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  obj.mergeSort(0,arr,0,n-1);
  int q,l,r;
  cin>>q;

  for(int i=0;i<q;i++)
  {
    cin>>l>>r>>k;
    cout<<obj.query(0,l,r,k);
  }


}
