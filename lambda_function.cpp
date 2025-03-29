#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

struct Point {
  double x;
  double y;
};

double distance(const Point &p1, const Point &p2) {
  return std::sqrt(std::pow(p1.x - p2.x, 2) + std::pow(p1.y - p2.y, 2));
}
int main() {
  Point origin = {0.0, 0.0};

  std::vector<Point> vec = {{1.2, 5.6}, {4.5, 6.7}, {2.0, 2.0}, {0.5, 0.5}};
  std::sort(vec.begin(), vec.end(), [&origin](const Point &a, const Point &b) {
    return distance(a, origin) < distance(b, origin);
  });

  for (const auto &p : vec) {
    std::cout << "(" << p.x << "," << p.y << ")" << std::endl;
  }
  std::cout << std::endl;
  return 0;
}
