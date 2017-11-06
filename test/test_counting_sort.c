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
    TEST_ASSERT_EQUAL_INT_ARRAY (testAns,test1,3);
}

void test_counting_sort_with_repeated(void)
{
    int test2[] = {3,1,2,4,3};
    countingSort(test2,5);
    int testAns2[] = {1,2,3,3,4};
    TEST_ASSERT_EQUAL_INT_ARRAY (testAns2,test2,5);
}
