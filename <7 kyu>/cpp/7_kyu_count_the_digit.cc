// [Kata] https://www.codewars.com/kata/566fc12495810954b1000030/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Count the Digit.

class CountDig {
public:
    static int nbDig(int n, int d) {
        /*Count the numbers of digits d used in the writing of all the k**2.*/

        int nb_dig = 0;
        int k;
        for (int i = 0; i <= n; ++i) {
            // Cont 'd' digits in k.
            k = i * i;
            while (k) {
                if (d == k % 10) {
                    ++nb_dig;
                }
                k /= 10;
            }
        }
        return d ? nb_dig : ++nb_dig;
    }
};

int main() {
    /*Tests.*/

    CountDig::nbDig(12224, 8);
}