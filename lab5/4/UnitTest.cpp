#include "pch.h"
#include "CppUnitTest.h"
#include "..\1-5\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod11)
		{
			double arr1[] = { -5,4,3,2,-1 };
			Assert::AreEqual(is_zero(arr1, 5), false);
		}
		TEST_METHOD(TestMethod12)
		{
			double arr1[] = {0,0,0,0,0 };
			Assert::AreEqual(is_zero(arr1, 5), true);
		}
		TEST_METHOD(TestMethod13)
		{
			double arr1[] = { 1,2,3,4,5 };
			Assert::AreEqual(is_zero(arr1, 5), false);
		}
	};
}