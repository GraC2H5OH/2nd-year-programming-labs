#include "pch.h"
#include "CppUnitTest.h"
#include "..\1-5\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		// Tests for task 1
		TEST_METHOD(TestMethod1)
		{
			double arr1[] = {1,2,3,4,5};
			Assert::AreEqual(sum_of_elements(arr1, 5), 15.);
		}
		TEST_METHOD(TestMethod2)
		{
			double arr2[] = { -1,-2,-3,-4,-5 };
			Assert::AreEqual(sum_of_elements(arr2, 5), -15.);
		}
		TEST_METHOD(TestMethod3)
		{
			double arr3[] = { 0,0,0,0,0 };
			Assert::AreEqual(sum_of_elements(arr3, 5), 0.);
		}
		TEST_METHOD(TestMethod4)
		{
			double arr4[] = { 1,-2,3,-4,5 };
			Assert::AreEqual(sum_of_elements(arr4, 5), 3.);
		}
	};
}