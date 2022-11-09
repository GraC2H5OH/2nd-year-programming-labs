#include "pch.h"
#include "CppUnitTest.h"
#include "..\individualnoe\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ind1test
{
	TEST_CLASS(ind1test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test = 121;

			bool res1 = true;
			int res2 = 2;
			Assert::AreEqual(compare_nums(test), res1);
			Assert::AreEqual(odd_sum(test), res2);
		}

		TEST_METHOD(TestMethod2)
		{
			int test = 100;

			bool res1 = false;
			int res2 = 1;
			Assert::AreEqual(compare_nums(test), res1);
			Assert::AreEqual(odd_sum(test), res2);
		}
		TEST_METHOD(TestMethod3)
		{
			int test = 1;

			bool res1 = true;
			int res2 = 1;
			Assert::AreEqual(compare_nums(test), res1);
			Assert::AreEqual(odd_sum(test), res2);
		}
		TEST_METHOD(TestMethod4)
		{
			int test = -50;

			bool res1 = false;
			int res2 = 5;
			Assert::AreEqual(compare_nums(test), res1);
			Assert::AreEqual(odd_sum(test), res2);
		}
		
	};
}
