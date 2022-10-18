// [Kata] https://www.codewars.com/kata/56a32dd6e4f4748cc3000006/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Rainfall.

#include <string>
#include <vector>
#include <iostream>
#include <map>

std::string data = "Rome:Jan 81.2,Feb 63.2,Mar 70.3,Apr 55.7,May 53.0,Jun 36.4,Jul 17.5,Aug 27.5,Sep 60.9,Oct 117.7,Nov 111.0,Dec 97.9\n"
                   "London:Jan 48.0,Feb 38.9,Mar 39.9,Apr 42.2,May 47.3,Jun 52.1,Jul 59.5,Aug 57.2,Sep 55.4,Oct 62.0,Nov 59.0,Dec 52.9\n"
                   "Paris:Jan 182.3,Feb 120.6,Mar 158.1,Apr 204.9,May 323.1,Jun 300.5,Jul 236.8,Aug 192.9,Sep 66.3,Oct 63.3,Nov 83.2,Dec 154.7\n"
                   "NY:Jan 108.7,Feb 101.8,Mar 131.9,Apr 93.5,May 98.8,Jun 93.6,Jul 102.2,Aug 131.8,Sep 92.0,Oct 82.3,Nov 107.8,Dec 94.2\n"
                   "Vancouver:Jan 145.7,Feb 121.4,Mar 102.3,Apr 69.2,May 55.8,Jun 47.1,Jul 31.3,Aug 37.0,Sep 59.6,Oct 116.3,Nov 154.6,Dec 171.5\n"
                   "Sydney:Jan 103.4,Feb 111.0,Mar 131.3,Apr 129.7,May 123.0,Jun 129.2,Jul 102.8,Aug 80.3,Sep 69.3,Oct 82.6,Nov 81.4,Dec 78.2\n"
                   "Bangkok:Jan 10.6,Feb 28.2,Mar 30.7,Apr 71.8,May 189.4,Jun 151.7,Jul 158.2,Aug 187.0,Sep 319.9,Oct 230.8,Nov 57.3,Dec 9.4\n"
                   "Tokyo:Jan 49.9,Feb 71.5,Mar 106.4,Apr 129.2,May 144.0,Jun 176.0,Jul 135.6,Aug 148.5,Sep 216.4,Oct 194.1,Nov 95.6,Dec 54.4\n"
                   "Beijing:Jan 3.9,Feb 4.7,Mar 8.2,Apr 18.4,May 33.0,Jun 78.1,Jul 224.3,Aug 170.0,Sep 58.4,Oct 18.0,Nov 9.3,Dec 2.7\n"
                   "Lima:Jan 1.2,Feb 0.9,Mar 0.7,Apr 0.4,May 0.6,Jun 1.8,Jul 4.4,Aug 3.1,Sep 3.3,Oct 1.7,Nov 0.5,Dec 0.7";

class Rainfall {
private:
  static std::map<std::string, double> get_months_value_from_town_data(std::string town_data) {
      /*Return map with month and values.*/

      unsigned long start = 0;
      unsigned long end;
      std::map<std::string, double> months_value;
      std::string separator = ",";
      town_data += separator;
      while((end = town_data.find(separator, start)) != std::string::npos){
          std::string month_and_value = town_data.substr(start, end - start);
          unsigned long end_i;
          for(end_i = 0; end_i < month_and_value.size(); ++end_i){
              if(month_and_value[end_i] == ' '){
                  break;
              }
          }
          months_value[month_and_value.substr(0, end_i)] += strtod(month_and_value.substr(end_i).c_str(), nullptr);
          start = end + 1;
      }
      return months_value;
  }

  static std::string get_town_datas_from_data(const std::string &town, const std::string &datas) {
      /* Find town line in data.*/
      std::string towns_with_separator = town + ":";
      const std::string end_separator = "\n";
      std::string datas_with_end_separator = datas +  end_separator;
      unsigned long start = datas_with_end_separator.find(towns_with_separator);
      unsigned long end = datas_with_end_separator.find(end_separator, start);
      if (start == std::string::npos || end == std::string::npos) {
          return "";
      }
      std::string sequence = datas_with_end_separator.substr(start, end - start - end_separator.size() + 1);

      return sequence.substr(town.size() + 1);
  }

public:
  static double mean(const std::string &town, const std::string &strng){
      /* Get average value  from town. */
      std::string town_datas = get_town_datas_from_data(town, strng);
      if(town_datas.empty()){
          return -1;
      }
      std::map<std::string, double> months_value = get_months_value_from_town_data(town_datas);
      double sum = 0.0;
      for(auto &v : months_value){
          sum += v.second;
      }
      return sum / (double)months_value.size();
  }
  static double variance(const std::string &town, const std::string &strng){
      /* Get dispersion value  from town. */
      std::string town_datas = get_town_datas_from_data(town, strng);
      if(town_datas.empty()){
          return -1;
      }
      std::map<std::string, double> months_value = get_months_value_from_town_data(town_datas);
      double sum = 0.0;
      double mean_value = mean(town, strng);
      for(auto &v : months_value){
          sum += (mean_value - v.second) * (mean_value - v.second);
      }
      return sum / (double)months_value.size();
  }

};


int main() {

    std::cout << Rainfall::mean("Lima", data) << std::endl;

    std::cout << Rainfall::variance("Lima", data);

     }