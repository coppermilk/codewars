// [Kata] https://www.codewars.com/kata/571d42206414b103dc0006a1/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <vector>

std::vector<int> arr(int n = 0) {
    /*Produces an array with the numbers 0 to n-1.*/

    std::vector<int> v;
    v.resize(n);
    for(int i = 0; i < n; ++i){
        v[i] = i;
    }
    return v;
}

int main(){
    arr(42);
    return 0;
}