#include "gtest/gtest.h"

#include "list_of.h"

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

  s32 list_number = list_of_int.at(0);
  ASSERT_TRUE(list_number == 10);

  list_number = list_of_int.at(1);
  ASSERT_TRUE(list_number == 30);

  list_number = list_of_int.at(2);
  ASSERT_TRUE(list_number == -90);
}