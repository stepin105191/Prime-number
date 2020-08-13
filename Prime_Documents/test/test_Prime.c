#include "unity.h"
#include "Prime.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_True(void)
{
    TEST_ASSERT_EQUAL(true,prime(2));
    TEST_ASSERT_EQUAL(true,prime(11));
}
void test_False(void)
{
    TEST_ASSERT_EQUAL(false,prime(45));
    TEST_ASSERT_EQUAL(false,prime(100));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_True);
  RUN_TEST(test_False);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
