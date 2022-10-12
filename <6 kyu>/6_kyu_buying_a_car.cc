// [Kata] https://www.codewars.com/kata/554a44516729e4d80b000012/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Buying a car.

#include <iostream>
#include <vector>
#include <cmath>

class BuyCar {

public:
    static std::vector<int>
    nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth) {
        if (startPriceOld >= startPriceNew) {
            return {0, (int) round(startPriceNew - startPriceOld) * -1};
        } else {
            double saving = (startPriceNew * -1);
            double aviable = 0;
            double cur_price_old = startPriceOld;
            double cur_price_new = startPriceNew;
            double percent_loss = percentLossByMonth;
            double cur_percent_loss;
            int month = 1;

            while (aviable >= 0) {
                cur_percent_loss = (int(month++ / 2) * 0.5 + percent_loss);
                cur_price_new = (cur_price_new * (100.0 - cur_percent_loss) / 100.0);
                cur_price_old = (cur_price_old * (100.0 - cur_percent_loss) / 100.0);
                saving += savingperMonth;

                aviable = cur_price_new - cur_price_old - startPriceNew - saving;

            }
            return {month - 1, (int) round(aviable) * -1};
        }

    }
};

int main() {
    BuyCar::nbMonths(12000, 8000, 1000, 1.5);
}