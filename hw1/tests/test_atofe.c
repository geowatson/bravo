#include <stdio.h>
#include <check.h>
#include "atofe.h"

#define atof_eq(str, num) ck_assert_msg(atof(str) == (double)(num), "Result: %f, expected %f", atof(str), (double)(num));
#define atofe_eq(str, num) ck_assert_msg(atofe(str) == (double)(num), "Result: %f, expected %f", atofe(str), (double)(num));

START_TEST (test_atofe)
{
    atof_eq("123.56", 123.56);
    atof_eq(".56", .56);
    atof_eq("123", 123);
    atof_eq("0.0", 0);
    atof_eq("0", 0);
    atof_eq("-0", 0);
    atof_eq("-.43", -0.43);

    atofe_eq("12356e-2", 123.56);
    atofe_eq("56E-2", .56);
    atofe_eq("123e-0", 123);
    atofe_eq("0.0E0", 0);
    atofe_eq("0e", 0);
    atofe_eq("-0e-1", 0);
    atofe_eq("-4.3e-1", -0.43);
}
END_TEST



Suite* str_suite (void) {
    Suite *suite = suite_create("Home Assignment 1");
    TCase *tcase = tcase_create("Case 1");
    tcase_add_test(tcase, test_atofe);

    suite_add_tcase(suite, tcase);
    return suite;
}

int main() {
    int number_failed;
    Suite *suite = str_suite();
    SRunner *runner = srunner_create(suite);
    srunner_run_all(runner, CK_NORMAL);
    number_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return number_failed;
}
