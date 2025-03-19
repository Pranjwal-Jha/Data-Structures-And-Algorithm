#include <iostream>
#include <vector>
#include <stack>
using namespace std;
//maintans a specific order of the elements

vector<int> monotonic_stack(vector<int>& v){
  stack<int> s;
  vector<int> ans(v.size(),-1);
  for(int i=0;i<v.size();i++){
    while(!s.empty() && v[s.top()]<v[i]){
      ans[s.top()]=v[i]; //found the next greater element for the current element
      s.pop();
    }
    s.push(i);
  }
  return ans;
}

int main(){
  vector<int> s={2,1,5,3,6,4,8,7};
  for(auto& c:monotonic_stack(s)){
    std::cout << c << " ";
  }
  std::cout << std::endl;
  return 0;
}
