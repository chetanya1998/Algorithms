#include<iostream>
using namespace std;
int lcs(char x[],char y[],int xs,int x1,int ys,int y1){
  int toreturn=0;
  for(int i=xs;i<x1;i++)
  {
    for(int j=ys;j<y1;j++)
    {
      if(x[i]==y[j])
      {
        toreturn=1+lcs(x,y,xs+1,x1,ys+1,y1);
      }
    }
    return toreturn;
    }
  }
     int main(){
     char x[]={'a','b','b','a'};
     char y[]={'a','b','b'};
    int ans=lcs(x,y,0,2,0,3);
    cout<<ans;
  return 0;
  }
