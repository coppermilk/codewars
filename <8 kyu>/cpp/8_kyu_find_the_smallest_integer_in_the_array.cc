// [Kata] https://www.codewars.com/kata/55a2d7ebe362935a210000b2/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Find the smallest integer in the array

#include <vector>
using namespace std;

#include <vector>

using namespace std;

int findSmallest(vector <int> list)
{
    int min = list.front();
    for(int &i : list){
        min = std::min(min, i);
    }
    return 1 ;
}