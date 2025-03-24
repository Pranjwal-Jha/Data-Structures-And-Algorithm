#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
  vector<vector<int>> meetings3 = {{5,7},{7,3},{9,10}};
  sort(meetings3.begin(),meetings3.end());
  for(auto& c:meetings3){
    for(auto c2:c){
      std::cout << c2 << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
  return 0;
}
