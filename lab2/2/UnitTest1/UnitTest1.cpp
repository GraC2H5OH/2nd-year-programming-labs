#include "pch.h"
#include "CppUnitTest.h"
#include "..\proj_test\digits.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(digits(23), 2);
		}
		TEST_METHOD(TestDigits2)
		{
			Assert::AreEqual(digits(5), 1);
		}
		TEST_METHOD(TestDigits3)
		{
			Assert::AreEqual(digits(0), 1);
		}
		TEST_METHOD(TestDigits4)
		{
			Assert::AreEqual(digits(-15), 2);

		}
		TEST_METHOD(TestDigits5)
		{
			Assert::AreEqual(digits(-15), 0);

		}
	};
}
