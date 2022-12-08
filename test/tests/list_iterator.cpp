#include <string>

#include "gtest/gtest.h"
#include "list_of.h"

namespace vs::tests {

TEST(TestGroupListIterator, 1) {
  vs::list_of<std::string> list_str;

  list_str.push_back("first");
  list_str.push_back("second");

  ASSERT_EQ(list_str.Size(), 2);

  auto begin_iter = list_str.Begin();
  ASSERT_FALSE(begin_iter == list_str.End());
  ASSERT_TRUE(*begin_iter == list_str.At(0));
}

}  // namespace vs::tests