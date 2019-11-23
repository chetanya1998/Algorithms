#include<iostream>
using namespace std;
int main()
{
  clrscr();
  int i,j,n,loc,temp,min,a[30];
  cout<<"enter the number of elements:";
  cin>>n;
  cout<<"\n Enter the elements\n";
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  for(i=0;i<n;i++){
    min=a[i];
    loc=i;
    for(j=i+1;j<n;j++){
      if(min>a[j])
      {
        min=a[i];
        loc=j;
      }
    }

   temp=a[i];
   a[i]=a[loc];
   a[loc]=temp;
  }
  cout<<"\nSorted list is as follows\n";
  for(i=0;i<n;i++)
  {
    cout<<a[i]<<"";

  }
  return 0;

}
