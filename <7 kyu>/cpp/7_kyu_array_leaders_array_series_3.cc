// [Kata] https://www.codewars.com/kata/5a651865fd56cb55760000e0/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Array Leaders (Array Series #3).

#include <vector>
#include <numeric>
using namespace std;

vector<int> arrayLeaders(const vector<int>& numbers)
{
    vector<int> ans;
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    for(auto number : numbers){
        sum -= number;
        if(number > sum){
            ans.push_back(number);
        }
    }
    return ans;
}

int main(){
    using vec = vector <int> ;
    arrayLeaders(vec{-1,-29,-26,-2});
}