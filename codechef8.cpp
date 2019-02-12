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
int main()
{
  int T,n,k,q;

  ios_base::sync_with_stdio(false);
  cin>>T;
  while(T--)
  {
    int max1=-0,max2=0,max3=0,tempmax1=0,tempmax2=0,tempmax3,temp,max,tempindex,aa,bb,cc;
    int index1=-1,index2=-1,index3=-1,i=0,j=0,k=0,count=0,tempindex1=-1,tempindex2=-1,tempindex3=-1,kite;
    char ch;
    string s;
    cin>>n>>q>>kite;
    bool a[n];
    nloop(n)
    {
      cin>>a[i];
    }


    i=0;
    j=n-1;
    while(i<n&&a[i]==1)
    {
      i++;
    }
    while(j>=0&&a[j]==1)
    {
      j--;
    }
    max3=i+n-j-1;
    index3=i-1;

    for(k=i+1;k<=j;k++)
    {
      if(a[k]==1)
      {
        count++;
        continue;
      }
      else
      {
        if(max1<count)
        {
          temp=max1;
          tempindex=index1;
          max1=count;
          index1=k-1;
          max2=temp;
          index2=tempindex;
        }
        else if(max2<count)
        {
          max2=count;
          index2=k-1;
        }

      }
      count=0;
    }

    if(kite<=max1)
    answer++;
    if(kite<=max2);
    answer++;
    if(kite<=max3)
    answer++;

    /*
cout<<"Max1 "<<max1<<" index1  "<<index1<<endl;
cout<<"Max2 "<<max2<<" index2  "<<index2<<endl;
cout<<"max3 "<<max3<<" index3 "<<index3<<endl;
  */
    for(i=0;i<q;i++)
    {
      ch=getchar();
      if(ch=='!')
    {
    if(index1!=-1)
      index1=(index1+1)%n;
    if(index2!=-1)
      index2=(index2+1)%n;
    if(index3!=-1)
      index3=(index3+1)%n;
  }
    else
    {
      if(answer>1)
      {
        cout<<kite<<endl;
        continue;
      }
      aa=max1;
      bb=max2;
      cc=max3;

      if(index1!=-1 && index1<(max1-1) )
      {

          temp=index1+1;
          aa=(max1-temp)>temp?(max1-temp):temp;
      }
     else if(index2!=-1 && index2<(max2-1))
      {
          temp=index2+1;
          bb=(max2-temp)>temp?(max2-temp):temp;
      }
     else if(index3!=-1 && index3 < (max3-1))
      {

          temp=index3+1;
          //cout<<"here"<<index3<<endl;
          cc=(max3-temp)>temp?(max3-temp):temp;
        }



      if(aa>=bb &&aa>=cc)
      {
        max=aa;
      }
      else if(bb>=cc && bb>=aa)
      {
        max=bb;
      }
      else
      max=cc;



      if(max>kite)
      {
        cout<<kite<<endl;
      }
      else
      {
        cout<<max<<endl;
      }
/*
      if(index1!=-1 && index1<(max1-1))
      {
        tempmax1=(max1-index1-1)>(index1+1)?(max1-index1-1):(index1+1);
      }
      else if(index2!=-1 && index2<(max2-1))
      {
        tempmax2=(max2-index2-1)>(index2+1)?(max2-index2-1):(index2+1);
      }
      else if(extindex > -1 &&  extindex < (extmax-1))
      {
        tempextmax=(extmax-extindex-1)>(extindex+1)?(extmax-extindex-1):(extindex+1);

      }
      aa=tempmax1;
      bb=tempmax2;
      cc=tempextmax;

      if(aa>=bb && aa>=cc)
      max=aa;
      else if(bb>=aa && bb>=cc)
      max=bb;
      else
      max=cc;
      //if(max>k) cout<<k<<endl;
      //else cout<<max<<endl;
    //  cout<<"  "<<extindex<<" ";
    //cout<<max<<endl;


    */
    }
    max=0;
    }
  }
  return 0;
}
