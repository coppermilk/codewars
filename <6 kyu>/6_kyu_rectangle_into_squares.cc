// [Kata] https://www.codewars.com/kata/55466989aeecab5aac00003e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Rectangle into Squares.
#include <vector>
#include <iostream>

class SqInRect {
public:
    static std::vector<int> sqInRect(int lng, int wdth) {
        /*Return a collection with the size of each of the squares.*/

        std::vector<int> sq_in_rect;
        if (lng - wdth == 0) {
            // If rect square.
            return {};
        } else {
            // If not square.
            while (lng * wdth != 0) {
                int min = std::min(lng, wdth);
                int max = std::max(lng, wdth);
                sq_in_rect.push_back(min);
                lng = min;
                wdth = max - min;
            }
            return sq_in_rect;
        }

    }
};

int main() {
    SqInRect::sqInRect(5, 5);
}
