#include <iostream>
#include <map>
using namespace std;

int power(int a,int b){
  if (b==0){
    return 1;
  }
  if (b%2 == 0){
    int x =  power(a,b/2);
    return x*x;
  }
  else{
    int x =  power(a,b/2);
    return a * x*x;
  }
}

int main(){

cout << power(10,10);
return 0;
}
