// [Kata] https://www.codewars.com/kata/5b180e9fedaa564a7000009a/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Fix string case.

//  do not allocate memory for the return
//  instead simply return a string literal
//  yup, the string, not char* — we handled this situation ;)

#include <string>

std::string solve(std::string str){
    int low = 0;
    int up = 0;
    for(const auto &ch : str){
        if(islower(ch)){
            ++low;
        }else if(isupper(ch)){
            ++up;
        }
    }
    if(low < up){
        for(auto &ch : str){
            ch = toupper(ch);
        }
    }else{
        for(auto &ch : str){
            ch = tolower(ch);
        }
    }
    return str;
}

int main(){
    /*Tests.*/
    solve("ABCDe");

}