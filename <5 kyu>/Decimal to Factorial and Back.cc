#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>

class Dec2Fact
{
public:
    static std::string dec2FactString(long long nb){

//        convert = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
//        string = string[::-1]
//        s = 0
//        f = 1
//        for i in xrange(1, len(string)):
//        f *= i
//        s += f * convert.index(string[i])
//        return s
//    std::string convert = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    std::reverse(convert.begin(), convert.end());
//    int s = 0;
//    int = 1;
//    for(int )

    };

    static long long factString2Dec(const std::string str){
        std::string convert = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        std::string str_reversed = str;
        std::reverse(str_reversed.begin(), str_reversed.end());

        int s = 0;
        int f = 1;
        for(int i = 1; i < str.size(); ++i){
            f *= i;
            std::cout << f * atoi(convert[str[i]]) << std::endl;
        }
        return s;
    }
private:
    static unsigned long long fact(long n){
        return n<=1 ? 1 : n * fact(n - 1);
    }
    static long count_digit(long n){
        long count = 0;
        while(n){
            n /= 10;
            ++count;
        }
        return count;
    }
};

int main(){
   // std::cout << Dec2Fact::dec2FactString(2982) << std::endl;
    //std::cout << Dec2Fact::dec2FactString(53) << std::endl;
    std::cout << Dec2Fact::factString2Dec("4041000");
}