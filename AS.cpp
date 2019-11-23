#include<iostream>
int printmax(int s[],int f[],int n)
{
  int i,j;
  cout<<"Following Activities are selected";
  i=0;
  cout<<j;
  for(j=1;j<n;j++)
  {
    if(s[j]>f[i])
    {
      cout<<i;
      i=j;
    }
  }
}
int main()
{
  int s[]={1,3,10,6,4,6,7,9,12,15,8};
  int f[] ={4,5,6,7,9,9,10,1,12,15,14,11,16};
 int n=sizeof(s)/sizeof(s[0]);
  printmax(s,f,n);
  return 0;
}
