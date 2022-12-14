#include "command.h"
#include "gtest/gtest.h"

namespace vs::tests {
TEST(TestGroup, getTypeCommand) {
  std::string command = "-h";
  //  ASSERT_TRUE(GetTypeCommandFrom(command) == TypeCommand::HELP);

  command = "--help";
  //  ASSERT_TRUE(GetTypeCommandFrom(command) == TypeCommand::HELP);

  command = "-a";
  //  ASSERT_TRUE(GetTypeCommandFrom(command) == TypeCommand::ALGORITHM);
}
}  // namespace vs::tests