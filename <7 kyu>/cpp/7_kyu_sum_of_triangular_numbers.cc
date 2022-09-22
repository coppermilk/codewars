// [Kata] https://www.codewars.com/kata/580878d5d27b84b64c000b51/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Sum of Triangular Numbers.

// First solution.
int sumTriangularNumbers(int n) {
    /*Return the sum of Triangular Numbers up-to-and-including the nth Triangular Number.*/
    /*
       IDEA: transform triangle to another.
       From.
        n   f(n)

	    1   [01]
	    2    02 [03]
	    3    04 05 [06]
	    4    07 08 09 [10]
	    5    11 12 13 14 [15]
	    6    16 17 18 19 20 [21]
	   To.

	    n   f(n)

		1   0 + 1 = [1]
		2   0 + 1 + 2 = [3]
		3   0 + 1 + 2 + 3 = [6]
		4   0 + 1 + 2 + 3 + 4 = [10]
		5   0 + 1 + 2 + 3 + 4 + 5 = [15]
		6   0 + 1 + 2 + 3 + 4 + 5 + 6 = [21]

	  	Last elem is sum(from 1 to n) = n * (n + 1) / 2 =>
		=> last elem n-th is sum(from 1 to n);
     */

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * (i + 1) / 2;
    }
    return sum;
}

// Second solution.
unsigned int sumTriangularNumbers2(const int n) {
    /*Return the sum of Triangular Numbers up-to-and-including the nth Triangular Number.*/
    /*
     * The sum of triangular numbers are apparently called tetrahedral numbers, for which
     * there is a standard formula. In the same way there is a standard formula for
     * triangular numbers, n(n+1)/2. Figured it's probably faster to compute
     * numbers using the standard formula than going through lots of loops.
     */

    return n < 0 ? 0 : (n + 0) * (n + 1) * (n + 2) / 6;
}

int main() {
    /*Tests.*/

    sumTriangularNumbers(-3);
    sumTriangularNumbers2(-3);
}