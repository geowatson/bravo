//
// Created by cubazis on 25.05.18.
//

#include <check.h>
#include "task.h"

#ifndef COMPARATOR
#define COMPARATOR(res, c1, c2) do                    \
	{                                             \
		char i = 0;                           \
		for (;'\0' != (c1)[i];i++)            \
		{                                     \
			if((c1)[i] != (c2)[i])        \
				{                     \
                                        (res) = 0;    \
				}                     \
		}                                     \
	} while(0)
#endif

START_TEST (test_stub)
{
	ck_assert(42 == stub());
}
END_TEST

START_TEST (test_array_changer)
{
	const char input[] = "abcba";
	const char pattern[] = "abbba";

	/** change 'c' to 'b' */

	char* output = array_changer(input);

	/** initialise k because ck_assert need's it to be sure
	 *  that he compare something initialised with 1
	 *  because if COMPARATOR will not change it value, k will not have any value
	 *  */
	int k = 1;

	/** get k, k, output, pattern
	 *  compare output array with pattern array by elements
	 *  return 0 if they are not equal
	 * */
	COMPARATOR(k, output, pattern);

	/** check statement is true */
	ck_assert(1 == k);

}
END_TEST

START_TEST (test_detab)
{

}
END_TEST

START_TEST (test_entab)
{

}
END_TEST

START_TEST (test_enter)
{

}
END_TEST

START_TEST (test_flush)
{

}
END_TEST

START_TEST (test_htoi)
{

}
END_TEST

START_TEST (test_squeeze)
{

}
END_TEST

START_TEST (test_any)
{

}
END_TEST

START_TEST (test_setbits)
{

}
END_TEST

START_TEST (test_binsearch)
{

}
END_TEST

START_TEST (test_escape)
{

}
END_TEST

START_TEST (test_expand)
{

}
END_TEST

START_TEST (test_itoa)
{

}
END_TEST

START_TEST (test_itob)
{

}
END_TEST

START_TEST (test_strrindex)
{

}
END_TEST

#define atofe_eq(str, num) ck_assert_msg(atofe(str) == (double)(num), "Result: %f, expected %f", atofe(str), (double)(num));

START_TEST (test_atofe)
	{
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
	Suite *suite = suite_create("Home assignment 1");
	TCase *tcase = tcase_create("case");

	tcase_add_test(tcase, test_stub);
	tcase_add_test(tcase, test_array_changer);

	tcase_add_test(tcase, test_detab);
	tcase_add_test(tcase, test_entab);
	tcase_add_test(tcase, test_enter);
	tcase_add_test(tcase, test_flush);
	tcase_add_test(tcase, test_htoi);
	tcase_add_test(tcase, test_squeeze);
	tcase_add_test(tcase, test_any);
	tcase_add_test(tcase, test_setbits);
	tcase_add_test(tcase, test_binsearch);
	tcase_add_test(tcase, test_escape);
	tcase_add_test(tcase, test_expand);
	tcase_add_test(tcase, test_itoa);
	tcase_add_test(tcase, test_itob);
	tcase_add_test(tcase, test_strrindex);
	tcase_add_test(tcase, test_atofe);
	/** YOUT TEST CASES HERE */

	suite_add_tcase(suite, tcase);
	return suite;
}

int main (int argc, char *argv[]) {
	int number_failed;
	Suite *suite = str_suite();
	SRunner *runner = srunner_create(suite);
	srunner_run_all(runner, CK_NORMAL);
	number_failed = srunner_ntests_failed(runner);
	srunner_free(runner);
	return number_failed;
}