#include<iostream>

using namespace std;
void print_optimal(int s[10][10], int i , int j){
  if(i=j){
    std::cout << "A" << '\n';
  }
  else{
    std::cout << "(";
    print_optimal(s,i,s[i][j]);
    print_optimal(s,(s[i][j]+1),j);
    std::cout << ")";
  }

}
void matrixchain(int p[],int n) {
  /* code */
  int m[10][10],i,j,k,l,s[10][10];
  for(i=1;i<=n;i++){
    for ( j = 1; j <= n; j++) {
      /* code */
      s[i][j]=0;
      m[i][j]=0;
    }
  }
  for ( l = 2; l <= n; l++) {
    /* code */
    for ( i = 0; i <= n-l+1; i++) {
      /* code */
      j=i+l-1;
      for (k = i; k <=j-1; k++) {
        /* code */
        //m[i][j]=INT_MAX;
        int q = (m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]));
        if(q<m[i][j]){
          m[i][j]=q;
          s[i][j]=k;
        }
      }
    }
  }
  print_optimal(s,1,n);
}
int main()
{
  int p[10],n,i;

  std::cout << "enter the no.of matricies:" <<'\n';
  cin>>n;
  std::cout << "enter the dimension" << '\n';
  for (i = 0; i < n; i++) {
    /* code */
    std::cin >> p[i];
  }
  matrixchain(p,n);
  return 0;
}
