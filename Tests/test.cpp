
#include "pch.h"
#include "gtest/gtest.h"
using namespace std;


TEST(Test1, TestName1) {
	ASSERT_STREQ("!", translitfunction("!"));
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
TEST(Test2, TestName2) {
	ASSERT_STREQ("qwerty[]asdfghjkl", translitfunction("qwerty[]asdfghjkl"));
}
TEST(Test3, TestName3) {
	ASSERT_STREQ("QWERTY{}ASDFGHJKL", translitfunction("QWERTY{}ASDFGHJKL"));
}
TEST(Test4, TestName4) {
	ASSERT_STREQ("abvgdeyozhziklmnoprstufhchshsch/y|ehyuyaABVGDEYOZHZIKLMNOPRSTUFHCHSHSCH/Y|EHYUYA", translitfunction("абвгдеёжзиклмнопрстуфхчшщьыъэюяАБВГДЕЁЖЗИКЛМНОПРСТУФХЧШЩЬЫЪЭЮЯ"));
}
TEST(Test5, TestName5) {
	ASSERT_STREQ("abvgd, eyozhz iyk;lmn op(r)st ufhchshsch /y|ehyuya!  ABVGD EYOZHZ. IK[L]MN OPR:ST UF{HCH}SHSCH /Y|EHYUYA?", translitfunction("абвгд, еёжз ийк;лмн оп(р)ст уфхчшщ ьыъэюя!  АБВГД ЕЁЖЗ. ИК[Л]МН ОПР:СТ УФ{ХЧ}ШЩ ЬЫЪЭЮЯ?"));
}
TEST(Test6, TestName6) {
	ASSERT_STREQ("1234567890-=!№;%:?*()_+@#$%^&`~", translitfunction("1234567890-=!№;%:?*()_+@#$%^&`~"));
}
TEST(Test7, TestName7) {
	ASSERT_STREQ("Privet, mir!", translitfunction("Привет, мир!"));
}
TEST(Test8, TestName8) {
	ASSERT_STREQ("nikogda.", translitfunction("никогда."));
}

TEST(Test9, TestName9) {
	ASSERT_STREQ("Prosto 9-y test", translitfunction("Просто 9-й тест"));
}
TEST(Test10, TestName10) {
	ASSERT_STREQ("", translitfunction(""));
}