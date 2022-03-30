#include <stdio.h>
#include "../inc/student.h"
#include "../unity/unity.h"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{


}
void test_search_student(void)
{
  
  int studentid = 1;
  TEST_ASSERT_EQUAL(1,search_student())

}





int main(void)
{
  UNITY_BEGIN();
  
  RUN_TEST();
  return UNITY_END();


}
