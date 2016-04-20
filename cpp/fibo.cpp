// 0 1 1 2 3 5 ...

#include <iostream>
using namespace std;

void printfib(int n){
  if (n >= 1){
    cout << 0;
  }
  if (n >= 2){
    cout << 1;
  }
  int a,b;
  a=0,b=1;
  for(int i=3;i<=n;i++){
    int c = a+b;
    cout << c;
    a = b;
    b = c;
  }
}

int main(){
  int n = 100;
  printfib(n);

  return 0;
}
