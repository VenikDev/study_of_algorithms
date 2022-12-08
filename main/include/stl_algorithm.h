#ifndef STUDY_OF_ALGORITHMS_STL_ALGORITHM_H
#define STUDY_OF_ALGORITHMS_STL_ALGORITHM_H

#include <cstddef>

namespace vs::algorithm {

template <typename Iterator>
std::size_t distance(Iterator begin, Iterator end) {
  std::size_t result = 0;
  for(auto it = begin; it != end; ++it) {
    ++result;
  }
  return result;
}

}  // namespace vs::algorithm

#endif  // STUDY_OF_ALGORITHMS_STL_ALGORITHM_H
