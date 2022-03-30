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
void test_mod_student(void)
{
  
  int studentid = 1;
  TEST_ASSERT_EQUAL(1,mod_student())



}
void test_delete_student(void)
{
  
  int studentid = 1;
  TEST_ASSERT_EQUAL(1,delete_student())



}





int main(void)
{
  
  /* Initiate the Unity Test Framework */

  
  UNITY_BEGIN();
  
   /* Run Test functions */
  
  RUN_TEST(test_search_student);
  RUN_TEST(test_mod_student);
  RUN_TEST(test_delete_student);
  
  /* Close the Unity Test Framework */
  
  return UNITY_END();


}
