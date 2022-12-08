#include "list_of.h"

#include "gtest/gtest.h"

namespace vs::tests {

TEST(TestGroupListOf, cheak_size_of_list) {
  vs::list_of<s32> list_of_int;
  ASSERT_TRUE(list_of_int.Size() == 0);

  list_of_int.push_back(10);
  ASSERT_TRUE(list_of_int.Size() == 1);

  list_of_int.push_back(10);
  list_of_int.push_back(20);
  list_of_int.push_back(30);
  ASSERT_TRUE(list_of_int.Size() == 4);
}

TEST(TestGroupListOf, cheak_method_at) {
  vs::list_of<s32> list_of_int;
  list_of_int.push_back(10);
  list_of_int.push_back(30);
  list_of_int.push_back(-90);

  s32 list_number = list_of_int.At(0);
  ASSERT_TRUE(list_number == 10);

  list_number = list_of_int.At(1);
  ASSERT_TRUE(list_number == 30);

  list_number = list_of_int.At(2);
  ASSERT_TRUE(list_number == -90);
}

TEST(TestGroupListOf, cheak_create_list_of_vectors) {
  vs::list_of<std::vector<s32>> list_of_vectors;
  const std::vector first_vector{1, 2, 3, 4, 5};
  list_of_vectors.push_back(first_vector);

  const std::vector second_vector{-1, 2, -3, 4, -5};
  list_of_vectors.push_back(second_vector);

  ASSERT_TRUE(list_of_vectors.Size() == 2);
  ASSERT_TRUE(list_of_vectors.At(0) == first_vector);
  ASSERT_TRUE(list_of_vectors.At(1) == second_vector);
}

}  // namespace vs::tests