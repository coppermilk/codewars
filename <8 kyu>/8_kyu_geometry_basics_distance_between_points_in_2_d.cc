// [Kata] https://www.codewars.com/kata/58dced7b702b805b200000be/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Geometry Basics: Distance between points in 2D.

#include <cmath>

class Point {
public:
    int x;
    int y;

    Point(int x, int y) : x(x), y(y) {
    }
};

// First solution.
double distance_between_two_points(const Point &a, const Point &b) {
    /*Calculating distance between Point a and Point b.*/

    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

//Second solution
double distance_between_two_points2(const Point &a, const Point &b) {
    /*Calculating distance between Point a and Point b.*/

    return std::hypot(a.x - b.x, a.y - b.y);
}

int main() {
    /*Tests.*/

    Point A(5, 1);
    Point B(1, 4);
    double distance = distance_between_two_points(A, B);
    distance = distance_between_two_points2(A, B);
    return 0;
}