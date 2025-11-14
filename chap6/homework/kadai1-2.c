#include <stdio.h>

#define N 10
#define R 8

int combination(int,int);

int main(){
  printf("%d\n",combination(N,R));
}

int combination(int n,int r){
  if(r==0 || n==r){
    return 1;
  }else{
    return combination(n-1,r-1) + combination(n-1,r);
  }
}