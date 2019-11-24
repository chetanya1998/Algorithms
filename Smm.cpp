//Strassen's Matrix Multiplication
#include<iostream>
using namespace std;
int main(){
  int a[2][2],b[2][2],c[2][2],p1,p2,p3,p4,p5,p6,p7;
  int i=0;
  int j=0;
  int k=0;
std::cout << "enter 1st matrix" << '\n';
  for ( i = 0; i < 2; i++) {


    for (j = 0; j < 2 ; j++) {



      cin>>a[i][j];
    }
  }
  std::cout << "enter 2nd matrix" << '\n';
  for ( i = 0; i < 2; i++) {


    for (j = 0; j < 2 ; j++) {


      cin>>b[i][j];
    }
  }
  p1=a[0][0]*(b[0][1]-b[1][1]);
  p2=b[1][1]*(a[0][0]+a[0][1]);
  p3=b[0][0]*(a[1][0]+a[1][1]);
  p4=a[1][1]*(b[1][0]-b[0][0]);
  p5=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
  p6=(a[0][1]+a[1][1])*(b[1][0]+b[1][1]);
  p7=(a[0][0]+a[1][0])*(b[0][0]+b[0][1]);

  c[0][0]=p6+p5+p4-p2;
  c[0][1]=p1+p2;
  c[1][0]=p3+p4;
  c[1][1]=p1-p3+p5-p7;

  cout<<"\n result";
  for ( i = 0; i < 2; i++) {


    for (j = 0; j < 2 ; j++) {


      cout << c[i][j] << " ";
    }
    cout << '\n';
  }
  return 0;

}
