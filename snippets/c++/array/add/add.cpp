#include<iostream>
#include<vector>

using namespace std;

void print(vector <int> const &a) {
   for(int i=0; i < a.size(); i++){
        cout << a.at(i) << ' ';
   }
   cout << endl;
   
}

int main() {
   vector<int> a = {3, 2};
   int item = 1
   cout << "before adding : ";
   print(a);
   a.push_back(item);
   cout << "after adding element : ";
   print(a);
   return 0;
}