// [Kata] https://www.codewars.com/kata/56a4872cbb65f3a610000026/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Rotate for a Max.
#include <iostream>

class MaxRotate {
    // Works only with numbers without zero.
    /*
private:
    static  long long count_digits_in_number(long long number) {
        long long count = 0;
        do {
            count++;
            number /= 10;
        } while (number);
        return count;
    }

    static  long long pow( long long base,  long long exponent) {
         long long number = 1;
        for ( long long i = 0; i < exponent; ++i) {
            number *= base;
        }
        return number;
    }

public:
    static  long long glue_numbers( long long first, long long second) {
        long long count_second_digits = count_digits_in_number(second);
        first *= pow(10, count_second_digits);
        return first + second;
    }

public:
    static long long rotate(long long n) {
        long long count_digits = count_digits_in_number(n);
        long long decades = pow(10, count_digits - 1);

        n = ((n % decades) * 10) + (n / decades);
        return n;
    }

    static long long maxRot(long long n) {
        long long digits = count_digits_in_number(n);
        long long change_part = n;
        long long fix_part = 0;
        long long current_rotation;
        long long max_rotation = n;
        for (long long i = 0; i < digits - 1; i++) {
           // std::cout << "c" << change_part << std::endl;
            change_part = rotate(change_part);
            fix_part *= 10;
            fix_part += change_part / pow(10, digits - i - 1);
           // std::cout << "f" << fix_part << std::endl;

            change_part %= pow(10, digits - i - 1);
            current_rotation = glue_numbers(fix_part, change_part);
            if (current_rotation > max_rotation) {
                max_rotation = current_rotation;
            }
        }
        return max_rotation;
    }
*/
public:
    static std::string leftRot(std::string str){
        /*Rotate string to left.*/
        str.push_back(str[0]);
        return str.substr(1, str.size() - 1);
    }

    static long long maxRot(long long n){
        /*Find max rotate number*/

        std::string number = std::to_string(n);
        std::string fix_part;
        std::string change_part = number;
        long long current_number;
        long long max_rot = n;

        for(unsigned long i = 0; i < number.size(); ++i){

            change_part = leftRot(change_part);
            fix_part += change_part[0];
            change_part.erase(change_part.begin());

            current_number = strtol((fix_part + change_part).c_str(), nullptr, 0);
            max_rot = std::max(max_rot, current_number);
        }
        return max_rot;
    }
};

int main() {
//56789 -> 67895 -> 68957 -> 68579 -> 68597
//         ^        ^^       ^^^      ^^^^
std::cout << MaxRotate::maxRot(68087436573191) << std::endl;
    // MaxRotate::maxRot(56789);
   // std::cout << MaxRotate::glue_numbers(4, 5555);
}