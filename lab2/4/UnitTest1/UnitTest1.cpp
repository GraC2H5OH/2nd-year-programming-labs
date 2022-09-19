#include "pch.h"
#include "CppUnitTest.h"
#include "..\tests_for_lab1\functions_header.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test_first_num1)
		{
			Assert::AreEqual(first_num(23), 2);
		}
		TEST_METHOD(Test_last_num1)
		{
			Assert::AreEqual(last_num(5417), 7);
		}
		TEST_METHOD(Test_compare1)
		{
			Assert::AreEqual(compare(121), true);
		}
	};
}
