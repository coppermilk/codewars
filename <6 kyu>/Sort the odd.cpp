// [Kata] https://www.codewars.com/kata/578aa45ee9fd15ff4600090d/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <iostream>
#include <vector>

class Kata
{
public:
    static std::vector<int> sortArray(std::vector<int> array)
    {
        // Extract numbers to sort.
        std::vector<unsigned int> index_number_to_sort;
        std::vector<int> allowed_number_to_sort;
        int j = 0;
        for(int i : array){
            if (i % 2){
                allowed_number_to_sort.push_back(i);
                index_number_to_sort.push_back(j);
            }
            ++j;
        }

        // Sorting and insert allowed numbers.
        std::sort(allowed_number_to_sort.begin(), allowed_number_to_sort.end());
        for(unsigned int k = 0; k < index_number_to_sort.size(); ++k){
           array[index_number_to_sort[k]] = allowed_number_to_sort[k];
        }

        return array;
    }
};

int main(){
    std::vector<int> example = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    // Should return [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]  =>  [1, 8, 3, 6, 5, 4, 7, 2, 9, 0]
    auto processing = Kata::sortArray(example);

    for(auto i : processing){
        std::cout << i << " ";
    }
    return 0;
}