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
        if(number <= 3){
            for(int i = number; i > 0; --i){
                ans.push_back('I');
                --number;
            }
        }
        if(number == 4){
            ans.push_back('I');
            ans.push_back('V');
            number -=4;
        } else if (number >= 5 && number <= 8){
            ans.push_back('V');

            int k = number - 5;
            for(int i = k; i > 0; --i){
                ans.push_back('I');
                --number;
            }
            number -= 5;
        }
        if(number == 9){
            ans.push_back('I');
            ans.push_back('X');
                number -=9;
        }else if(number >= 10){
            ans.push_back('X');
            int k = number - 10;
            for(int i = k; i > 0; --i){
                ans.push_back('I');
                --number;
            }
            number -= 10;
        }

    }
    return ans;

}

int main() {
    for(int i = 4; i <= 50; ++i){

        std::cout << i << ":" << solution(i) << std::endl;
    }
    return 0;
}