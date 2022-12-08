#include <gtest/gtest.h>

#include "factorial.h"

TEST(TestFactorial, 1) {
  ASSERT_TRUE(Factorial<0>::value == 0) << "Factorial 0 equal 0";
  ASSERT_TRUE(Factorial<3>::value == 6) << "Factorial 3 equal 6";
  ASSERT_TRUE(Factorial<5>::value == 120) << "Factorial 5 equal 120";
}

TEST(TestFactorial, 2) {
  ASSERT_EQ(Factorial<0>::value, 0);
  ASSERT_EQ(Factorial<1>::value, 1);
}