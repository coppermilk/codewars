#include <sstream>
#include <vector>

// First solution.
std::string correct(std::string timeString)
{
  char res[9]{};
  if (unsigned int h, m, s; sscanf(timeString.data(), "%u:%u:%u", &h, &m, &s) == 3) {
    m += s / 60;
    h += m / 60;
    sprintf(res, "%.2u:%.2u:%.2u", h % 24, m % 60, s % 60);
  }
  return res;
}
// Second solution
std::vector < int > split_to_numbers(const std::string& s, char delim) {
    /*Split numbers by delimiter.*/
    std::vector < int > numbers;
    std::string item;

    std::stringstream ss(s);
    while (getline(ss, item, delim)) {
        numbers.push_back(strtoll(item.c_str(), nullptr, 10));
    }
    return numbers;
}

std::string correct2(std::string timeString) {
    /*Corrects a given time string.*/
    // Check symbols.
    for (auto& ch : timeString) {
        if (!isdigit(ch)) {
            if (ch != ':') {
                return "";
            }
        }
    }

    // Split by numbers
    auto v = split_to_numbers(timeString, ':');
    int total_seconds = 0;
    if (v.size() == 3) {
        total_seconds += v[0] * 3600;
        total_seconds += v[1] * 60;
        total_seconds += v[2];
    }
    else {
        return "";
    }

    // Calculate times.
    std::string hours = std::to_string((total_seconds / 3600) % 24);
    std::string minutes = std::to_string((total_seconds / 60) % 60);
    std::string seconds = std::to_string(total_seconds % 60);

    // Fill zeros.
    if (hours.size() == 1) {
        hours = '0' + hours;
    }
    if (minutes.size() == 1) {
        minutes = '0' + minutes;
    }
    if (seconds.size() == 1) {
        seconds = '0' + seconds;
    }
    return hours + ":" + minutes + ":" + seconds;
}