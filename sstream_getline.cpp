#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void getline_usage(string s) {
  stringstream ss(s);
  vector<int> vec;
  string component;
  while (getline(ss, component, '.')) {
    vec.push_back(stoi(component));
  }
  for (int &i : vec) {
    std::cout << i << " ";
  }
}

int main() {
  string data = "Bob 42 88.2";
  stringstream ss(data);
  string name;
  int age;
  double score;
  ss >> name >> age >> score;
  std::cout << "Parsed Data ---->" << std::endl;
  std::cout << "Name " << name << '\n'
            << "Age " << age << '\n'
            << "Score " << score;
  std::cout << std::endl;

  int number = 12345;
  stringstream ss_2;
  ss_2 << number;
  string num_to_str = ss_2.str();
  std::cout << num_to_str.length() << '\n';
  std::cout << to_string(number).length() << '\n';

  getline_usage("127.01.04.2003.004.00");
  std::cout << std::endl;
  return 0;
}
