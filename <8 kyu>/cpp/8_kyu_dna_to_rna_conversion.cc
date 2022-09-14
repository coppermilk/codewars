// [Kata] https://www.codewars.com/kata/59c287b16bddd291c700009a/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu For Twins: 2. Math operations.

#include <string>
#include <algorithm>

// First solution.
std::string DNAtoRNA(std::string dna){
    /*Translates a given DNA string into RNA.*/

    for(auto &acid : dna){
        if(acid == 'T'){
            acid = 'U';
        }
    }
    return dna;
}

// Second solution.
std::string DNAtoRNA2(std::string dna){
    /*Translates a given DNA string into RNA.*/

    std::replace(dna.begin(),dna.end(), 'T', 'U');
    return dna;
}

int main() {
    /*Tests.*/

    DNAtoRNA("GCAT");
    DNAtoRNA2("GCAT");
}