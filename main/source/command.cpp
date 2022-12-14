#include "command.h"

#include <iostream>

#include "common.h"

TypeCommand GetTypeCommandFrom(const std::string& command) {
  if (command == "-h" || command == "--help") {
    return TypeCommand::HELP;
  } else {
    auto split_arg = vs::common::split(command, "=");
    for (const auto& iter : split_arg) {
      std::cout << iter << "\n";
    }

    return TypeCommand::ALGORITHM;
  }

  return {};
}