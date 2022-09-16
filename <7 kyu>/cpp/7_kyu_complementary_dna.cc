// [Kata] https://www.codewars.com/kata/554e4a2f232cdd87d9000038/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Complementary DNA.

#include <string>

std::string DNAStrand(const std::string& dna){
    /*Return the other complementary side.*/

    std::string complementary_side;
    for(auto ch : dna){
        switch (ch) {
            case 'A':
                complementary_side += 'T';
                break;
            case 'T':
                complementary_side += 'A';
                break;
            case 'C':
                complementary_side += 'G';
                break;
            case 'G':
                complementary_side += 'C';
            default:
                break;
        }
    }
    return complementary_side;
}


int main() {
    /*Tests.*/

    DNAStrand("ATTGC"); // Equals("TAACG"));
    return 0;
}