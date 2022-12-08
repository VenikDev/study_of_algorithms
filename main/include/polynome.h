#ifndef STUDY_OF_ALGORITHMS_POLYNOME_H
#define STUDY_OF_ALGORITHMS_POLYNOME_H

#include <cstddef>

template <unsigned long Value> struct Polynome {
  static constexpr std::size_t value = Value & 1 ? (Value >> 1) ^ 0xedb88320 : Value >> 1;
};

template <unsigned long t, int i> struct ForPolynome {
  static constexpr std::size_t value = ForPolynome<Polynome<t>::value, i - 1>::value;
};

#endif  // STUDY_OF_ALGORITHMS_POLYNOME_H
