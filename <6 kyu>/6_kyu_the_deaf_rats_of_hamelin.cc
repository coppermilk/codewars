// [Kata] https://www.codewars.com/kata/598106cb34e205e074000031/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// The Deaf Rats of Hamelin

int countDeafRats(const std::string& town) {
    int deaf_rats_count = 0;
    bool is_count_deaf_rat_going_right = true;
  
    for (unsigned long i = 0; i < town.size() - 1; ++i) {
        if (town[i] == 'P') {
            is_count_deaf_rat_going_right = false;
            continue;
        }

        // Explore right.
        if (town[i] == 'O' && town[i + 1] == '~') {
            if (is_count_deaf_rat_going_right) {
                ++deaf_rats_count;
            }
            ++i; // Skip rats space.
            continue;
        }

        // Explore left.
        if (town[i] == '~' && town[i + 1] == 'O') { 
            if (!is_count_deaf_rat_going_right) {
                ++deaf_rats_count;
            }
            ++i; // Skip rats space.
            continue;
        }
    }
    return deaf_rats_count;
}
