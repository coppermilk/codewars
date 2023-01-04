// [Kata] https://www.codewars.com/kata/597d75744f4190857a00008d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Letterbox Paint-Squad

#include <array>
using namespace std;

array <int, 10> paint_letterboxes(int start, int end) {
    array <int, 10> ans = {0};
    for (int i = start; i <= end; ++i) {
        int i_copy = i;
        do {
            ++ans[i_copy % 10];
            i_copy /= 10;
        } while (i_copy);
    }
    return ans;
}