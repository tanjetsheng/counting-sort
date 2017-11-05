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
    int test1[] = {2, 6, 4, 3, 2, 3, 4, 6, 3, 4, 3, 5, 2, 6};
    countingSort(test1, 14);
    int testAns[] = {2,2,2,3,3,3,3,4,4,4,5,6,6,6};
    TEST_ASSERT_EQUAL(testAns,test1);



}
