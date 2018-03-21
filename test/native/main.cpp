#ifdef UNIT_TEST

#include <unity.h>

void test1() {
  TEST_ASSERT_TRUE(1 < 2);
  TEST_ASSERT_FALSE(1 > 2);
}

int main(int argc, char *argv[]) {
  UNITY_BEGIN();

  RUN_TEST(test1);

  UNITY_END();
}

#endif
