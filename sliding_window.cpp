#include <iostream>
#include <unordered_set>
#include <vector>
#include <unordered_map>
using namespace std;
bool sliding_window(vector<int> v,int k){ //k -> sliding window size
  unordered_set<int> window;
  int L=0;
  for(int R=0;R<v.size();R++){
    if(R-L+1>k){
      window.erase(v[L]);
      L++;
    }
    if(window.count(v[R])>0){
      return true;
    }
    window.insert(v[R]);
  }
  return false;
}

int main(){

  std::cout << std::endl;
  return 0;
}
