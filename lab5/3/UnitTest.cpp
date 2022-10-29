#include "pch.h"
#include "CppUnitTest.h"
#include "..\1-5\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		// Tests for task 3
		TEST_METHOD(TestMethod8)
		{
			double arr1[] = { 1,2,3,4,5 };
			insert_sort(arr1, 5);
			double res[] = { 1,2,3,4,5 };
			for (int i = 0; i < 5; i++) {
				Assert::AreEqual(arr1[i], res[i]);
			}
		}
		TEST_METHOD(TestMethod9)
		{
			double arr1[] = { 5,4,3,2,1 };
			insert_sort(arr1, 5);
			double res[] = { 1,2,3,4,5 };
			for (int i = 0; i < 5; i++) {
				Assert::AreEqual(arr1[i], res[i]);
			}
		}
		TEST_METHOD(TestMethod10)
		{
			double arr1[] = { -5,4,3,2,-1 };
			insert_sort(arr1, 5);
			double res[] = { -5,-1,2,3,4 };
			for (int i = 0; i < 5; i++) {
				Assert::AreEqual(arr1[i], res[i]);
			}
		}
	};
}