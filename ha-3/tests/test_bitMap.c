#include <check.h>
#include "bitMap.h"

START_TEST (test_setBitByNumber)
{
    int arr[10];
    setBitByNumber(arr, 1, 20);
    ck_assert(getBitByNumber(arr, 20));

    setBitByNumber(arr, 1, 0);
    ck_assert(getBitByNumber(arr, 0));

    setBitByNumber(arr, 0, 0);
    ck_assert(!getBitByNumber(arr, 0));

    setBitByNumber(arr, 1, 10*sizeof(int)*8 - 1);
    ck_assert(getBitByNumber(arr, 10*sizeof(int)*8 - 1));
}
END_TEST

START_TEST (test_getBitByNumber)
{
    int a = 1;
    ck_assert(getBitByNumber(&a, 0) == 1);
}
END_TEST

START_TEST (test_setBitByAddress)
{
    int arr[10];
    setBitByAddress(arr, 1);
    ck_assert(getBitByAddress(arr));
}
END_TEST

START_TEST (test_getBitByAddress)
{
    int a = 1;
    ck_assert(getBitByAddress(&a) == 1);
}
END_TEST

Suite *str_suite(void) {
    Suite *suite = suite_create("priority queue");
    TCase *tcase = tcase_create("case");
    tcase_add_test(tcase, test_setBitByNumber);
    tcase_add_test(tcase, test_getBitByNumber);
    tcase_add_test(tcase, test_setBitByAddress);
    tcase_add_test(tcase, test_getBitByAddress);
    suite_add_tcase(suite, tcase);
    return suite;
}

int main(int argc, char *argv[]) {
    int number_failed;
    Suite *suite = str_suite();
    SRunner *runner = srunner_create(suite);
    srunner_run_all(runner, CK_NORMAL);
    number_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return number_failed;
}