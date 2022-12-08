#ifndef STUDY_OF_ALGORITHMS_FACTORIAL_H
#define STUDY_OF_ALGORITHMS_FACTORIAL_H

#include <cstddef>

template<std::size_t N>
struct Factorial {
  static constexpr std::size_t value = Factorial<N - 1>::value * N;
};

template<>
struct Factorial<0> {
  static constexpr std::size_t value = 0;
};

template<>
struct Factorial<1> {
  static constexpr std::size_t value = 1;
};

#endif  // STUDY_OF_ALGORITHMS_FACTORIAL_H
