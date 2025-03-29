#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;
// mostly use lambda -> c++11 and later
struct Person {
  std::string name;
  int age;
};

int main() {
  vector<int> numbers = {5, 2, 8, 1, 9, 4};

  std::sort(numbers.begin(), numbers.end(), [](int a, int b) { return a > b; });

  vector<Person> people = {
      {"Jane", 50}, {"Alice", 20}, {"George", 42}, {"Charlie", 30}};
  std::sort(people.begin(), people.end(), [](const Person &a, const Person &b) {
    if (a.age != b.age) {
      return a.age < b.age;
    }
    return a.name < b.name;
  });

  std::cout << "Sorted People ---->\n";
  for (const auto &p : people) {
    std::cout << " " << p.name << " Age " << p.age << std::endl;
  }
  std::cout << std::endl;
  return 0;
}
