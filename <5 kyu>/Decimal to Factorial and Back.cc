#include <string>
#include <iostream>
#include <cmath>
class Dec2Fact
{
public:
    static std::string dec2FactString(long long nb){

        convert = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
        string = string[::-1]
        s = 0
        f = 1
        for i in xrange(1, len(string)):
        f *= i
        s += f * convert.index(string[i])
        return s

        unsigned long long sum = 0;
        std::string ans;
        for(long long i = 2; nb; ++i){
            sum =  (nb % i) * pow(10, i - 2);
            ans =(char)((nb % i) + '0') + ans;
           // std::cout << (nb % i) * pow(10, i - 2) << std::endl;
            nb = nb / i;
        }
        return ans;
    };

    static long long factString2Dec(const std::string &str){
        long long len = str.size();
        long long sum = 0;

        for(long long i = len; i > 0; --i){

            sum +=  ((str[i - 1]) - '0') * fact(len - i + 1);
        }
        return sum;
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
    std::cout << Dec2Fact::dec2FactString(2982) << std::endl;
    std::cout << Dec2Fact::dec2FactString(53) << std::endl;
   // std::cout << Dec2Fact::factString2Dec("");
}