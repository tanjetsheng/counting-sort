#include "unity.h"
#include "counting_sort.h"
#include <stdio.h>
#include <stdlib.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_counting_sort(void)
{
    int test1[] = {3,1,2};
    countingSort(test1,3);
    int testAns[] = {1,2,3};
    TEST_ASSERT_EQUAL(testAns,test1);



}
