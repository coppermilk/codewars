// [Kata] https://www.codewars.com/kata/55b3425df71c1201a800009c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Statistics for an Athletic Association.

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <numeric>

class Stat {
private:
  static std::vector<std::string> split_by_separator(std::string parse, const std::string &separator) {
      std::vector<std::string> ans;
      std::string::size_type pos;
      while ((pos = parse.find(separator)) != std::string::npos) {
          ans.push_back(parse.substr(0, pos));
          parse.erase(0, pos + separator.length());
      }
      ans.push_back(parse);
      return ans;
  }

  static std::string format_to_h_m_s(int seconds) {
      std::string h = std::to_string(seconds / 3600 % 24);
      if (h.size() == 1) {
          h = "0" + h;
      }
      std::string m = std::to_string(seconds / 60 % 60);
      if (m.size() == 1) {
          m = "0" + m;
      }
      std::string s = std::to_string(seconds % 60);
      if (s.size() == 1) {
          s = "0" + s;
      }
      return h + "|" + m + "|" + s;
  }

  static int get_range(std::vector<int> &v) {
      return *std::max_element(v.begin(), v.end()) - *std::min_element(v.begin(), v.end());
  }

  static int get_average(std::vector<int> &v) {
      return std::accumulate(v.begin(), v.end(), 0) / v.size();

  }

  static int get_median(std::vector<int> v) {
      std::sort(v.begin(), v.end());
      int mid = v.size() / 2;
      return v.size() % 2 == 0 ? (v[mid] + v[mid-1]) / 2 : v[mid];
  }

public:
  static std::string stat(const std::string &strg) {
      std::vector<std::string> results = split_by_separator(strg, ",");
      std::vector<int> times;
      for (auto &result : results) {
          int h = 0, m = 0, s = 0;
          std::sscanf(result.c_str(), "%d|%d|%d", &h, &m, &s);
          s += m * 60;
          s += h * 3600;
          times.push_back(s);
      }
      return "Range: " + format_to_h_m_s(get_range(times)) +
              " Average: " + format_to_h_m_s(get_average(times)) +
              " Median: " + format_to_h_m_s(get_median(times));

  }
};


int main() {
    std::string test = "01|15|59, 1|47|6, 01|17|20, 1|32|34, 2|3|17";
    std::cout << Stat::stat(test);


}