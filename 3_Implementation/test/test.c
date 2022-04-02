#include "unity.h"
extern void test_searchStudent();

void setUp()
{
}
void tearDown()
{ 
}

int main(void)
{
  UnityBegin(NULL);
  RUN_TEST(test_searchStudent);
  return UNITY_END();
}
