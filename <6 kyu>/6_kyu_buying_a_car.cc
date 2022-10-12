#include <iostream>
#include <vector>

//
// Created by zvgdb on 12.10.22.
//
class BuyCar {

public:
    static std::vector<int>
    nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth) {
        double saving = (startPriceNew * -1);
        double aviable = 0;
        double cur_price_old = startPriceOld;
        double cur_price_new = startPriceNew;
        double percent_loss = percentLossByMonth;
        double cur_percent_loss;
        int month = 1;
        while (aviable >=0) {
            saving += savingperMonth;
            std::cout << "end month " << month << ": percent_loss "
                      << (int(month / 2) * 0.5 + percent_loss) << " available " << saving
                      << std::endl;

            cur_percent_loss = (int(month / 2) * 0.5 + percent_loss);
            cur_price_new = (cur_price_new * (100.0 - cur_percent_loss) / 100.0);
            cur_price_old = (cur_price_old * (100.0 - cur_percent_loss) / 100.0);
            aviable =cur_price_new - cur_price_old - (startPriceNew + saving);
            std::cout << cur_price_new - cur_price_old - (startPriceNew + saving) << std::endl;
            ++month;

        }
        return {month, startPriceNew};
    }
};

int main() {
    BuyCar::nbMonths(2000, 8000, 1000, 1.5);
}