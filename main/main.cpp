#include <bits/stdc++.h>

#define CREATE_FILES()                                                                                                 \
  freopen("input.txt", "r", stdin);                                                                                    \
  freopen("output.txt", "w+", stdout);

#define CLOSE_FILES()                                                                                                  \
  fclose(stdout);                                                                                                      \
  fclose(stdin);

using namespace std;

template <std::size_t Value> struct native_type_from_iridium {
  static constexpr std::size_t value = native_type_from_iridium<Value>::value * Value;
};

unsigned long Crc32(unsigned char* buf, unsigned long len) {
  unsigned long crc_table[256];
  unsigned long crc;
};

std::size_t* crc_32_table;

void InitCRC32Table() {
  std::size_t crc;
  for (int i = 0; i < 256; i++) {
    crc = i;
    for (int j = 0; j < 8; j++)
      crc = crc & 1 ? (crc >> 1) ^ 0xEDB88320UL : crc >> 1;

    crc_32_table[i] = crc;
  }
}

std::size_t CRC_32(std::size_t* buffer, std::size_t len_of_buffer) {
  std::size_t crc = 0xFFFFFFFFUL;

  while (len_of_buffer--)
    crc = crc_32_table[(crc ^ *buffer++) & 0xFF] ^ (crc >> 8);

  return crc ^ 0xFFFFFFFFUL;
}

template <unsigned long _Value> struct Polynome {
  static constexpr std::size_t value = _Value & 1 ? (_Value >> 1) ^ 0xedb88320 : _Value >> 1;
};

template <unsigned long t, int i> struct ForPolynome {
  static constexpr std::size_t value = ForPolynome<Polynome<t>::value, i - 1>::value;
};

// несистемное SFINAE. HasFooBar
template <typename T> struct has_typedef_foobar {
  typedef char yes[1];
  typedef char no[2];

  template <typename C> static yes& test(typename C::foobar*);
  template <typename> static no& test(...);

  static const bool value = sizeof(test<T>(0) == sizeof(yes));
};

template <typename T, T n> struct custom_integral_constant {
  static constexpr T value = n;

  typedef T value_type;
  typedef custom_integral_constant type;

  operator value_type() const { return value; }
};

struct True {
  bool value = true;
};

struct False {
  bool value = false;
};

template <typename T, typename U> struct c_is_same : False {};
template <typename T> struct c_is_same<T, T> : True {};

int main(/*int count_arg, char** args*/) {
  CREATE_FILES()

  tm time_stamp{.tm_min = 44, .tm_hour = 10, .tm_mday = 10, .tm_mon = 9 - 1, .tm_year = 2022 - 1900};

  auto local_time = mktime(&time_stamp);

  CLOSE_FILES()
  return EXIT_SUCCESS;
}