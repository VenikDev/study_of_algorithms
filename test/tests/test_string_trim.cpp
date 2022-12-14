#include "common.h"
#include "gtest/gtest.h"

namespace vs::tests {
TEST(TestGroupTrim, getTrimString) {
  std::string data = "    123";
  ASSERT_TRUE(vs::common::ltrim(data) == std::string("123"));

  data = "432356254        ";
  ASSERT_TRUE(vs::common::ltrim(data) != std::string("432356254        "));

  ASSERT_TRUE(vs::common::rtrim(data) == std::string("432356254"));
}

TEST(TestgroupSplit, getSplitString) {
  std::string data = R"(-a="2315 53242")";
  auto split_str = vs::common::split(data, "=");
  ASSERT_TRUE(split_str[0] == "-a");
  ASSERT_TRUE(split_str[1] == R"("2315 53242")");
}
}  // namespace vs::tests