#include "pch.h"
#include "CppUnitTest.h"
#include "..\1-5\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod15)
		{
			double arr1[] = { 1,2,3,0,5 };
			Assert::AreEqual(near(arr1, 5), false);
		}
		TEST_METHOD(TestMethod16)
		{
			double arr1[] = { 1,2,3,3,4 };
			Assert::AreEqual(near(arr1, 5), true);
		}
		TEST_METHOD(TestMethod17)
		{
			double arr1[] = { 0,1,2,3,0 };
			Assert::AreEqual(near(arr1, 5), false);
		}
		TEST_METHOD(TestMethod18)
		{
			double arr1[] = { -1,-1,2,3,4 };
			Assert::AreEqual(near(arr1, 5), true);
		}
	};
}