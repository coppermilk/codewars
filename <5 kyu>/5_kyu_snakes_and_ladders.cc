// [Kata] https://www.codewars.com/kata/587136ba2eefcb92a9000027/train/cpp
// [User] https://www.codewars.com/users/coppermilk

class SnakesLadders
{
private:
    int unsigned next_player_id;
    int unsigned players_count;
    bool game_over;
    std::vector<int> players_current_square;
public:
    SnakesLadders() {
        game_over = false;
        // 1.  There are two players and both start off the board on square 0.
        players_count = 2;
        // 3.  You follow the numbers up the board in order 1=>100
        for (unsigned long i = 0; i < players_count; ++i) {
            players_current_square.push_back(0);
        }

        // 2.  Player 1 starts and alternates with player 2.
        next_player_id = 0;

    };

    std::string play(int die1, int die2)
    {

        if (game_over) {
            return "Game over!";
        }

        /*7.  Land exactly on the last square to win. The first person to reach the
        highest square on the board wins. But there's a twist! If you roll too high,
        your player "bounces" off the last square and moves back. You can only win by
        rolling the exact number needed to land on the last square. For example,
        if you are on square 98 and roll a five, move your game piece to 100 (two moves),
        then "bounce" back to 99, 98, 97 (three, four then five moves.)*/
        int sum = die1 + die2;
        int delta_100 = players_current_square[next_player_id] + sum;
        if (delta_100 > 100) {
            players_current_square[next_player_id] = 100 - (delta_100 - 100);
        }
        else if (delta_100 == 100) {
            game_over = true;
            return "Player " + std::to_string(next_player_id + 1) + " Wins!";
        }
        else {
            players_current_square[next_player_id] += sum;
        }


        /* 5.  Climb up ladders.The ladders on the game board allow you to move upwards
        and get ahead faster. If you land exactly on a square that shows an image of the
        bottom of a ladder, then you may move the player all the way up to the square at
        the top of the ladder. (even if you roll a double). */

        switch (players_current_square[next_player_id])
        {
        case 2: players_current_square[next_player_id] = 38; break;
        case 7: players_current_square[next_player_id] = 14; break;
        case 8: players_current_square[next_player_id] = 31; break;
        case 15: players_current_square[next_player_id] = 26; break;
        case 21: players_current_square[next_player_id] = 42; break;
        case 28: players_current_square[next_player_id] = 84; break;
        case 36: players_current_square[next_player_id] = 44; break;
        case 51: players_current_square[next_player_id] = 67; break;
        case 71: players_current_square[next_player_id] = 91; break;
        case 78: players_current_square[next_player_id] = 98; break;
        case 87: players_current_square[next_player_id] = 94; break;
        default: break;
        }

        /*6.  Slide down snakes. Snakes move you back on the board because you have to
        slide down them. If you land exactly at the top of a snake, slide move the
        player all the way to the square at the bottom of the snake or chute.
        (even if you roll a double).*/
        switch (players_current_square[next_player_id])
        {
        case 16: players_current_square[next_player_id] = 6; break;
        case 46: players_current_square[next_player_id] = 25; break;
        case 49: players_current_square[next_player_id] = 11; break;
        case 62: players_current_square[next_player_id] = 19; break;
        case 64: players_current_square[next_player_id] = 60; break;
        case 74: players_current_square[next_player_id] = 53; break;
        case 89: players_current_square[next_player_id] = 68; break;
        case 92: players_current_square[next_player_id] = 88; break;
        case 95: players_current_square[next_player_id] = 75; break;
        case 99: players_current_square[next_player_id] = 80; break;
        default: break;
        }

        // 4.  If the value of both die are the same then that player will have another go.
        int current_player_id = next_player_id;
        if (die1 != die2) {
            if (next_player_id == players_current_square.size() - 1) {
                next_player_id = 0;
            }
            else {
                ++next_player_id;
            }
        }
        return "Player " +
            std::to_string(current_player_id + 1) +
            " is on square " +
            std::to_string(players_current_square[current_player_id]);
    };
};