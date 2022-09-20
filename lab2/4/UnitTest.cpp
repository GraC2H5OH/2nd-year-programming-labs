#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab24\functions_header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test4
{
	TEST_CLASS(test4)
	{
	public:
		
		TEST_METHOD(Test_first_num1)
		{
			Assert::AreEqual(first_num(23), 2);
		}
		TEST_METHOD(Test_first_num2)
		{
			Assert::AreEqual(first_num(-23), 2);
		}
		TEST_METHOD(Test_last_num1)
		{
			Assert::AreEqual(last_num(5417), 7);
		}
		TEST_METHOD(Test_last_num2)
		{
			Assert::AreEqual(last_num(-5417), 7);
		}
		TEST_METHOD(Test_compare1)
		{
			Assert::AreEqual(compare(121), true);
		}
		TEST_METHOD(Test_compare2)
		{
			Assert::AreEqual(compare(123), false);
		}
	};
}
