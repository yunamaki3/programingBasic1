#include <stdio.h>

#define N 10

int fibonacci(int);

int main(){
  printf("%d\n",fibonacci(N));
}

int fibonacci(int n){
  if(n==1 || n==2){
    return 1;
  }else{
    return fibonacci(n-1) + fibonacci(n-2);
  }
}