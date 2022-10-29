#include "pch.h"
#include "CppUnitTest.h"
#include "..\1-5\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod5)
		{	
			double arr1[] = { 1, 2, 3, 4, 5 };
			double arr2[] = { 1, 2, 3, 4, 5 };
			double arr3[5];
			double res[] = { 1, 4, 9, 16, 25 };
			multiply(arr1, arr2, arr3, 5);
			for(int i = 0;i < 5; i++){ 
				Assert::AreEqual(arr3[i], res[i]);
			}
			
		}
		TEST_METHOD(TestMethod6)
		{
			double arr1[] = { 0, 0, 0, 0, 0 };
			double arr2[] = { 1, 2, 3, 4, 5 };
			double arr3[5];
			double res[] = { 0, 0, 0, 0, 0 };
			multiply(arr1, arr2, arr3, 5);
			for (int i = 0; i < 5; i++) {
				Assert::AreEqual(arr3[i], res[i]);
			}

		}
		TEST_METHOD(TestMethod7)
		{
			double arr1[] = { 0, 0, 0, 0, 0 };
			double arr2[] = { 0, 0, 0, 0, 0 };
			double arr3[5];
			double res[] = { 0, 0, 0, 0, 0 };
			multiply(arr1, arr2, arr3, 5);
			for (int i = 0; i < 5; i++) {
				Assert::AreEqual(arr3[i], res[i]);
			}

		}
	};
}