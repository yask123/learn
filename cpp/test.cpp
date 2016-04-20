#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector <int> arr;
  for(int i=0;i<100;i++){
    arr.push_back(i);
  }

  vector <int> :: iterator i = arr.begin();

  while(i != arr.end()){
    cout << *i<<"\n";
    i+=1;
  }

}
