// [Kata] https://www.codewars.com/kata/5ab6538b379d20ad880000ab/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Area or Perimeter


int area_or_perimeter(int l, int w) {
    /*If it is a square, return its area. If it is a rectangle, return its perimeter.*/

    return l == w ? l * w : (l + w) * 2;
}


int main() {
    /*Tests.*/

    area_or_perimeter(4, 4);
}