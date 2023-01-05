// [Kata] https://www.codewars.com/kata/5701e43f86306a615c001868/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Credit card issuer checking

std::string getIssuer(const std::string& number)
{
    /* Determine the card issuer for a given card number.*/
    std::vector<std::string> begin_with_AMEX = { "34", "37" };
    std::vector<std::string> begin_with_Discover = { "6011" };
    std::vector<std::string> begin_with_Mastercard = { "51", "52", "53", "54", "55" };
    std::vector<std::string> begin_with_VISA = { "4" };

    if (number.size() == 13) {
        for (auto& r : begin_with_VISA) {
            if (number.rfind(r, 0) == 0) {
                return "VISA";
            }
        }
    }
    else if (number.size() == 15) {
        for (auto& r : begin_with_AMEX) {
            if (number.rfind(r, 0) == 0) {
                return "AMEX";
            }
        }
    }
    else if (number.size() == 16) {
        for (auto& r : begin_with_Discover) {
            if (number.rfind(r, 0) == 0) {
                return "Discover";
            }
        }
        for (auto& r : begin_with_Mastercard) {
            if (number.rfind(r, 0) == 0) {
                return "Mastercard";
            }
        }
        for (auto& r : begin_with_VISA) {
            if (number.rfind(r, 0) == 0) {
                return "VISA";
            }

        }
    }
     return "Unknown";
}