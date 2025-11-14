#include <stdio.h>

int f(double x){
  x=x+1;
  return x*x;
}

int main(){
  double y=6;
  double z,w;
  z=f(y);
  w=f(6);
  return 0;
}