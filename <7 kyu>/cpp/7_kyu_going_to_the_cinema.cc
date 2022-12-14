// [Kata] https://www.codewars.com/kata/562f91ff6a8b77dfe900006e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Going to the cinema.

#include <cmath>

class Movie {
public:
    static int movie(int card, int ticket, double perc) {
        /*
         * The function movie has 3 parameters: card (price of the card),
         * ticket (normal price of a ticket), perc (fraction of what he paid
         * for the previous ticket) and returns the first n such that
         */
        double system_a = 0;
        double system_b = card;
        int movies = 1;
        do {
            system_a += ticket;
            system_b += ticket * pow(perc, movies);
            ++movies;
        } while (std::ceil(system_b) >= system_a);
        return movies - 1;
    }

};

int main() {
    /*Tests.*/

    Movie::movie(100, 10, 0.95);
}