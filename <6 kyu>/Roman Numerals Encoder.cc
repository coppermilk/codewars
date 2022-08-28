#include <iostream>
#include <string>

std::string solution(int number) {
    std::string ans;
//    Symbol    Value
//    I          1
//    V          5
//    X          10
//    L          50
//    C          100
            //    D          500
    while(number){
        int X = number % 10;;

    }
    return ans;
}

int main() {
    for(int i = 1; i <= 50; ++i){

        std::cout << i << ":" << solution(i) << std::endl;
    }
    return 0;
}