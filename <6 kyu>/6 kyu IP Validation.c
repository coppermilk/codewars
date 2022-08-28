// [Kata] https://www.codewars.com/kata/515decfd9dcfc23bb6000006/train/c
// [User] https://www.codewars.com/users/coppermilk

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_digits(int number) {
    /* Return count of digits in number. */
    int n = 1;
    while (number /= 10) {
        n++;
    }
    return n;
}

int is_valid_ip(const char *addr) {
    /* Return 1 is addr is a valid IP address, return 0 otherwise. */

    #define DOTS_IN_IP 3
    #define NUM_IN_IP 4
    #define MAX_IP_NUM 255
    int is_ok_ip = 0;

    // Try to scan.
    unsigned ip[NUM_IN_IP];
    if (!sscanf(addr, "%u.%u.%u.%u", &ip[0], &ip[1], &ip[2], &ip[3])) {
        return is_ok_ip;
    } else {

        // Check possible ip address.
        for (int i = 0; i < NUM_IN_IP; ++i) {
            if (ip[i] <= MAX_IP_NUM) {
                continue;
            } else {
                is_ok_ip = 0;
                return is_ok_ip;
            }
        }

        // Count digit and dots in source ip.
        int size_source = strlen(addr);
        int count_digits_in_source = 0;
        int count_not_digits_in_source = 0;
        for (int i = 0; i < size_source; ++i) {
            if (isdigit(addr[i])) {
                ++count_digits_in_source;
            } else {
                ++count_not_digits_in_source;
            }
        }

        // Count digits in parse ip.
        int count_digits_in_parse_ip = 0;
        for (int i = 0; i < NUM_IN_IP; i++) {
            count_digits_in_parse_ip += count_digits(ip[i]);
        }

        if ((count_digits_in_source == count_digits_in_parse_ip) &&
            count_not_digits_in_source == DOTS_IN_IP) {
            is_ok_ip = 1;
        }
    }

    return is_ok_ip;
};

int main() {
    char *test = "122.123.15.10";
    printf("%d", is_valid_ip(test));

    // for(int i = -10; i < 10; ++i){
    //    printf("%d : %d\n", i, count_digit(i));
    //}
}