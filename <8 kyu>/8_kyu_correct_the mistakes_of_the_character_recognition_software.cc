// [Kata] https://www.codewars.com/kata/577bd026df78c19bca0002c0/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Correct the mistakes of the character recognition software.

#include <string>

std::string correct(std::string str){
    /*Correct the errors in the digitised text.*/

    for(char& ch : str){
        switch (ch){
            case '1':
                ch = 'I';
                break;
            case '0':
                ch = 'O';
                break;
            case '5':
                ch = 'S';
                break;
            default:
                break;
        }
    }
    return str;
}

int main(){
    /*Tests.*/

    correct("R0BERT MERLE - THE DAY 0F THE D0LPH1N");
    return 0;
}