#include "pch.h"
#include "CppUnitTest.h"
#include "..\individualnoe2\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ind3test
{
	TEST_CLASS(ind3test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(bin_zero(0,0), 1);
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(bin_zero(1,0), 0);
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(bin_zero(2,0), 1);
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(bin_zero(10,0), 2);
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(bin_zero(100,0), 4);
		}
		TEST_METHOD(TestMethod6)
		{
			Assert::AreEqual(bin_zero(3,0), 0);
		}
	};
}
