#include <stdio.h>

#define a 8177
#define b 3315

int gcd(int,int);

int main(){
  printf("%d\n",gcd(a,b));
}

int gcd(int x,int y){
  if(x%y==0){
    return y;
  }else{
    return gcd(y,x%y);
  }
}