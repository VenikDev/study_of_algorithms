#include "gtest/gtest.h"

#include "list_of.h"
#include "stl_algorithm.h"

namespace vs::tests {

TEST(TestGroupAlgorithm, check_work_distance) {
  list_of<u32> list_from_u32;
  list_from_u32.push_back(10);
  list_from_u32.push_back(-32);
  list_from_u32.push_back(453);

  auto distance = vs::algorithm::distance(list_from_u32.Begin(), list_from_u32.End());
  ASSERT_TRUE(distance == 3);

  list_from_u32.push_back(-54);
  list_from_u32.push_back(-543);

  distance = vs::algorithm::distance(list_from_u32.Begin(), list_from_u32.End());
  ASSERT_TRUE(distance == 5);
}

}  // namespace vs::tests