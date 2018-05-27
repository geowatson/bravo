//
// Created by cubazis on 25.05.18.
//

#include <check.h>
#include <stdbool.h>
#include "task.h"



bool compare(const char s1[], const char s2[]) {
    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if(s1[i] != s2[i]) return false;
    }
    return true;
}

int compare_strings(char* s1, char* s2){
	char curr1 = ' ';
	char curr2 = ' ';
	for (int i = 0; curr1 != '\0'; i++){
		curr1 = s1[i];
		curr2 = s2[i];
		if (curr1 != curr2){
			return (0);
		}
	}
	return(1);
}

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
	char inp1[] = "abcabcabc";
	char* output = enter(3, inp1);
	char res1[] = "abc\nabc\nabc";
	ck_assert(compare_strings(output, res1) == 1);
	char inp2[] = "abcd";
	output = enter(3, inp2);
	char res2[] = "abc\nd";
	ck_assert(compare_strings(output, res2) == 1);
	char inp3[] = "a";
	output = enter(3, inp3);
	char res3[] = "a";
	ck_assert(compare_strings(output, res3) == 1);
	char inp4[] = "";
	output = enter(3, inp4);
	char res4[] = "";
	ck_assert(compare_strings(output, res4) == 1);
	char inp5[] = "\n\n\n\n\n\n\n\n\n";
	output = enter(3, inp5);
	char res5[] = "\n\n\n\n\n\n\n\n\n";
	ck_assert(compare_strings(output, res5) == 1);
}
END_TEST

START_TEST (test_flush)
{

}
END_TEST

START_TEST (test_htoi)
{
	const char t1[] = "0x1";
	ck_assert_str_eq(t1, htoi(t1));
}
END_TEST

START_TEST (test_squeeze)
{
//    printf("squeeze 1 : |%s|\n", squeeze("sa","a"));
	ck_assert(compare_strings(squeeze("sa","a"), "s") == 1);
//    printf("squeeze 2 : %s\n", squeeze("aaaaaaaaaaaa","a"));
	ck_assert(compare_strings(squeeze("aaaaaaaaaaaa","a"), "") == 1);
	ck_assert(compare_strings(squeeze("hjfkndhdoelsanc","z"), "hjfkndhdoelsanc") == 1);
	ck_assert(compare_strings(squeeze("Wow, it works!",""), "Wow, it works!") == 1);
	ck_assert(compare_strings(squeeze("saaaasssaaaassss","a"), "ssssssss") == 1);
//    printf("squeeze 6 : %s\n", squeeze("swawswuwswawgwew wiwnw wwtwhwew tweswtw","sausage in the test"));
	ck_assert(compare_strings(squeeze("swawswuwswawgwew wiwnw wwtwhwew tweswtw","sausage in the test"), "wwwwwwwwwwwwwwwwwww") == 1);
	ck_assert(compare_strings(squeeze("",""), "") == 1);
	ck_assert(compare_strings(squeeze("","dsa"), "") == 1);
}
END_TEST

START_TEST (test_any)
{
	ck_assert(any("abc", "abc") == 0);
	ck_assert(any("abc", "d") == -1);
	ck_assert(any("abc", "cb") == 1);
	ck_assert(any("abc", "") == -1);
	ck_assert(any("", "nfjdisanjifdoanjfidlasnk") == -1);
	ck_assert(any("", "") == -1);
}
END_TEST

START_TEST (test_setbits)
{
//    printf("%u\n",setbits(0b000000, 3, 4, 0b001111));
	ck_assert(setbits(0b000000, 3, 4, 0b001111) == 0b00111100000000000000000000000000);
	ck_assert(setbits(0b000000, 31, 2, 0b11) == 0b00000000000000000000000000000011);
	ck_assert(setbits(0b000000, 16, 7, 0b1101111) == 0b00000000000000011011110000000000);
	ck_assert(setbits(0b11000011011011101001101110100111, 12, 6, 0b101010) == 0b11000011011101010001101110100111);
	ck_assert(setbits(0b11000011011011101001101110100111, 1, 32, 0b10101010101010101010101010101010) == 0b10101010101010101010101010101010);
}
END_TEST

START_TEST (test_binsearch)
{
    int v1[] = {1};
    ck_assert(binsearch(1, v1, 1));
    ck_assert(!binsearch(0, v1, 1));
    int v2[] = {1, 2, 3, 4};
    ck_assert(!binsearch(0, v2, 1));
    ck_assert(binsearch(1, v2, 4));
    ck_assert(binsearch(3, v2, 4));
    ck_assert(binsearch(4, v2, 4));
    int v3[] = {};
    ck_assert(!binsearch(42, v3, 0));
    int v4[] = {-34, 0, 23, 43, 54, 65, 76, 1111};
    ck_assert(binsearch(23, v4, 8));
    ck_assert(binsearch(1111, v4, 8));
    ck_assert(binsearch(-34, v4, 8));
    ck_assert(binsearch(43, v4, 8));
    ck_assert(binsearch(0, v4, 8));
    ck_assert(binsearch(65, v4, 8));
    ck_assert(!binsearch(42, v4, 8));
    ck_assert(!binsearch(4200, v4, 8));
    ck_assert(!binsearch(-42, v4, 8));
    ck_assert(!binsearch(34, v4, 8));
}
END_TEST

START_TEST (test_escape)
{
    char buff[256];

    char s1[] = "aaa";
    ck_assert(compare(escape(s1, buff), "aaa"));
    ck_assert(!compare(escape(s1, buff), ""));
    ck_assert(!compare(escape(s1, buff), "aaaa"));
    char s2[] = "aaa\taa";
    ck_assert(compare(escape(s2, buff), "aaa\\taa"));
    ck_assert(!compare(escape(s2, buff), "aaaaa"));
    ck_assert(!compare(escape(s2, buff), "aaa\taa"));
    char s3[] = "\taaa\n\t\naaa\n";
    ck_assert(compare(escape(s3, buff), "\\taaa\\n\\t\\naaa\\n"));
    ck_assert(!compare(escape(s3, buff), "\\taaadasd"));
    ck_assert(!compare(escape(s3, buff), "\taaa\n\t\naaa\n"));

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