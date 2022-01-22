#include <iostream>       
#include <algorithm>      
#include <array>         
#include <random>         
#include <chrono>       
  
using namespace std;  
  
int main () {  
  array<int,5> array {1,2,3,4,5};  
  unsigned time_seed = chrono::system_clock::now().time_since_epoch().count();  
  
  shuffle (array.begin(), array.end(), default_random_engine(time_seed));  

  for (int& el: array){ 
      cout << ' ' << el;
  }  
  cout << endl;  
  
  return 0;  
}  