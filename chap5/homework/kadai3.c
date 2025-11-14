#include <stdio.h>

int f(double x){
  x=x+1;
  return x*x;
}

int main(){
  double y=6;
  double z,w,k;
  z=f(y);
  w=f(6);
  k=f(9);
  printf("%f\n",z);
  printf("%f\n",w);
  printf("%f\n",k);
}