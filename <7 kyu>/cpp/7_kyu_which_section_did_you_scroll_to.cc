// [Kata] https://www.codewars.com/kata/5cb05eee03c3ff002153d4ef/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Which section did you scroll to?

#include <vector>

int get_section_id(const int &n, const std::vector<int> &a) {
    /*Calculate the index (starting at 0) or -1 if scrollY falls
      beyond last section (indication of an error).*/

    int id_section = 0;
    int sum_pixel_sections = 0;

    for (auto pixel_section: a) {
        sum_pixel_sections += pixel_section;
        if (n <= sum_pixel_sections - 1) {
            return id_section;
        }
        id_section++;
    }
    return -1;
}

int main() {
    /*Tests.*/

    get_section_id(1599, {300, 200, 400, 600, 100}); //Equals(0));
}