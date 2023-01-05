// [Kata] https://www.codewars.com/kata/5959ec605595565f5c00002b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Reverse the bits in an integer

#include <bitset>
unsigned int reverse_bits(unsigned int n) {
  
        std::bitset<32> b = { n };
        std::cout << b.to_string();
        int first_1_index = 0;
        
        for (int i = 32 - 1; i > 0; --i) {
            if (b[i]) {
                first_1_index = i;
                break;
            }
        }
        first_1_index += 1;
        for (int i = 0; i < first_1_index / 2; ++i) {
            bool tmp = b[i];
            b[i] = b[first_1_index - i - 1];
            b[first_1_index - i- 1] = tmp;
        }
   
        std::cout<< std::endl << b.to_string();
        return b.to_ulong();
}