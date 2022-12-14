#include <bits/stdc++.h>

#include "command.h"
#include "common.h"
#include "types.h"

#define CREATE_FILES()              \
  freopen("input.txt", "r", stdin); \
  freopen("output.txt", "w+", stdout);

#define CLOSE_FILES() \
  fclose(stdout);     \
  fclose(stdin);

constexpr const char* kDescription = "-A название алгоритма";

int main(/*int count_arg, char** args*/) {
  CREATE_FILES()

  std::string input_arg;
  while (std::getline(std::cin, input_arg, '\n')) {
    VS_LOOP {
      auto type_command = GetTypeCommandFrom(vs::common::trim(input_arg));
      switch (type_command) {
        case TypeCommand::HELP: {
          std::cout << kDescription;
          break;
        }
        case TypeCommand::ALGORITHM: {

          break;
        }
        default: {
          break;
        }
      }
      break;
    }
  }

  CLOSE_FILES()
  return EXIT_SUCCESS;
}