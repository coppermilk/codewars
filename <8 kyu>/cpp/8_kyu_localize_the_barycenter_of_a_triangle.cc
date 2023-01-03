// [Kata] https://www.codewars.com/kata/5601c5f6ba804403c7000004/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Localize The Barycenter of a Triangle

#include <utility>
#include <cmath>
using point = const std::pair<double, double>;
std::pair<double, double> barTriang(point p1, point p2, point p3) {
  double x1 = (p1.first + p2.first + p3.first)/3.0;
  double y1 = (p1.second + p2.second + p3.second)/3.0;
  x1 = round(x1 * 10000.0) / 10000.0;
  y1 = round(y1 * 10000.0) / 10000.0;
  return {x1, y1}; 
}
