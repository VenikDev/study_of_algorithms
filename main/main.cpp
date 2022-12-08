#include <bits/stdc++.h>

#define CREATE_FILES()                                                                                                 \
  freopen("input.txt", "r", stdin);                                                                                    \
  freopen("output.txt", "w+", stdout);

#define CLOSE_FILES()                                                                                                  \
  fclose(stdout);                                                                                                      \
  fclose(stdin);

int main(/*int count_arg, char** args*/) {
  CREATE_FILES()

  tm time_stamp{.tm_min = 44, .tm_hour = 10, .tm_mday = 10, .tm_mon = 9 - 1, .tm_year = 2022 - 1900};

  auto local_time = mktime(&time_stamp);

  CLOSE_FILES()
  return EXIT_SUCCESS;
}