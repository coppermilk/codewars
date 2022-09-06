#include <vector>
#include <iostream>
#include <algorithm>

// First solution: brute forse.
int remove_all_elements_with_circular_shift(std::vector<int> &v, int &shift) {
    /*Return who is the "survivor", ie: the last element of a Josephus permutation.*/

    std::vector<int> v_shift;
    for (int i = shift; i < v.size() + shift; i++) {
        v_shift.push_back(v[i % v.size()]);
    }

    if (v_shift.size() == 1) {
        return v_shift[v_shift.size() - 1];
    } else {
        v_shift.erase(v_shift.end() - 1);
        return remove_all_elements_with_circular_shift(v_shift, shift);
    }
}

int josephusSurvivor(int n, int k) {
    /* Base vector constructor.*/

    std::vector<int> v;
    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }
    return remove_all_elements_with_circular_shift(v, k);
}

// Second solution.
int josephusSurvivor2(int n, int k) {
    /*Return who is the "survivor", ie: the last element of a Josephus permutation.*/

    /*The trick here is not to reason from a full circle to last man
  standing, but instead in reverse: from the survivor to the
  beginning circle.

    To do this you have to find the position of the survivor in the
  previous circle relative to the person that started counting
  (position = 0). I find it hard to explain precisely how to find
  this relation, but notice that the survivor was standing next to
  the last executed, which was the k-th person in the circle. This
  means that the survivor was the (k+1)-th person.

    Lets call the position of the survivor in the last circle f_0, which
  gives f_0 = 0. His position in the penultimate circle we call
  f_1 (in the code, this position is the integer "survivor"). The
  survivor was the (k+1)th person in the circle. However, we have
  indexed the circle starting from 0 and also we have to take the
  modulus as k might be bigger than the number of people in the
  circle (2). This gives the relation between f_0 and f_1:
  f_1 = (0+k)%2

    Now note that the above recursion not just holds between the
  position of the survivor in the final circle (which just
  contains the survivor) and the penultimate circle, but also in
  general between any circle (j+1) and the next (j). This general
  recursion relation would be: f_(j+1) = (f_j + k)%i

    In which i is the number of persons in circle j+1.

    This means, that starting from the final circle we can recursively
  find the position of the survivor in the previous circle until
  we find the position of the survivor in the circle of size n
  (the circle at the start). As the number of persons (i) left
  decreases by one each step and for the algorithm we want to do
  the process in reverse, this means we have to iterate over i,
  starting from 2 and ending at i = n (inclusively). This is done
  in the for-loop.

    The last step of adding 1 to the survivor position is because the
  answer is to be indexed from 1 instead of 0.

    It is a bit hard to explain with just text, and if you do not get it
  might help to draw the first step on paper with different values
  of k to understand how the recursion works.*/

    int survivor = 0;
    for (int i = 2; i < n + 1; i++) {
        survivor = (survivor + k) % i;
    }
    return survivor + 1;
}

int main() {
    std::cout << josephusSurvivor(7, 3);
    std::cout << josephusSurvivor2(7, 3);
    return 0;
}
