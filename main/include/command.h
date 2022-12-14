#ifndef STUDY_OF_ALGORITHMS_COMMAND_H
#define STUDY_OF_ALGORITHMS_COMMAND_H

#include <string>

enum class TypeCommand {
  HELP = 0,
  ALGORITHM,
};

TypeCommand GetTypeCommandFrom(const std::string& command);

#endif  // STUDY_OF_ALGORITHMS_COMMAND_H
