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
        int X = number / 10;;
        for(int i = X; X > 0; --X){
            ans.push_back('X');
            number -= 10;
        }
        int V = number / 5;
        for(int i = V; V > 0; --V){
            ans.push_back('V');
            number-=5;
        }
        int I = number;
        int k =number -
        for(int i = I; I > 0; --I){
            ans.push_back('I');
            --number;
        }
        break;
    }
    return ans;

}

int main() {
    for(int i = 1; i <= 50; ++i){

        std::cout << i << ":" << solution(i) << std::endl;
    }
    return 0;
}