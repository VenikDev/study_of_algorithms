#ifndef STUDY_OF_ALGORITHMS_COMMON_H
#define STUDY_OF_ALGORITHMS_COMMON_H

#include <algorithm>
#include <regex>
#include <string>

namespace vs::common {
// trim from start
static inline std::string &ltrim(std::string &s) {
  s.erase(s.begin(),
          std::find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(std::isspace))));
  return s;
}

// trim from end
static inline std::string &rtrim(std::string &s) {
  s.erase(
      std::find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(),
      s.end());
  return s;
}

// trim from both ends
static inline std::string &trim(std::string &s) { return ltrim(rtrim(s)); }

static inline std::vector<std::string> split(const std::string &input,
                                             const std::string &separator) {
  std::vector<std::string> result;
  int start = 0;
  int end = input.find(separator);
  while (end != std::string::npos) {
    result.push_back(input.substr(start, end - start));
    start = end + separator.size();
    end = input.find(separator, start);
  }
  result.push_back(input.substr(start, end - start));
  return result;
}
}  // namespace vs::common

#endif  // STUDY_OF_ALGORITHMS_COMMON_H
