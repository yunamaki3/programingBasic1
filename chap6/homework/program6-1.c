#include <stdio.h>
#define N 10

void f(int [],int);
int sum(int x[],int);
int get_max(int x[],int);

int main(){
  int x[N];
  for (int n=0; n<N; n++){
    x[n] = n;
  }
  f(x,N);
  printf("sum=%d\n",sum(x,N));
  printf("max=%d\n",get_max(x,N));
}

void f(int x[], int len){
  for (int n=0; n<len; n++){
    printf("X[%d] = %d\n",n,x[n]);
  }
}

int sum(int x[], int len){
  int s = 0;
  for (int n=0; n<len; n++){
    s += x[n];
  }
  return s;
}

int get_max(int x[],int len){
  int m = 0;
  for (int n=0; n<len; n++){
    if (m<x[n]){
      m = x[n];
    }
  }
  return m;
}