#include <vector>
#include <iostream>
#include <algorithm>

bool mysort(int &i, int &j){
    return (j == 0 && abs(i) >= j);
}
std::vector<int> move_zeroes(const std::vector<int>& input) {
    std::vector array = input;
//    void bubleSort(double array[], const int size) {
//        for (int i = 0; i < size - 1; i++) {
//            for (int j = 0; j < size - 1 - i; j++) {
//                if (array[j] > array[j + 1]) {
//                    std::swap(array[j], array[j + 1]);
//                }
//            }
//        }
//    }
    //std::sort(ans.begin(), ans.end(), mysort);



        for (int i = 0; i < array.size(); i++) {
            for (int j = i; j < array.size() && abs(array[j + 1]) >= array[j] && (array[j] == 0); j++) {
                std::swap(array[j], array[j+1]);
            }
        }

    return array;
}

int main(){
    std::vector<int> test = { 4, -7, 13, -3, 0, -8, 19, -13, -6, -8, -19, -19, 15, -11, 5, -17, -18, -19, 16, -16, 0, 9, -1, 13, -6, 9, 20, -4, 6, 9, 19, -6, 15, 10, -14, -3, -5, 20, -5, 19, 2, -13, -6, 4, 0, 8, -19, 1, -15, -9, -2, -3};
    for(auto i : move_zeroes(test)){
        std::cout <<"'"<< i <<"' " ;
    }
    move_zeroes(test);
}