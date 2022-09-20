#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab31\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test31
{
	TEST_CLASS(test31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(bit_check(129, 0), 0);
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(bit_check(129, 1), 1);
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(bit_check(-129, 0), 0);
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(bit_check(0, 0), 0);
		}
		TEST_METHOD(TestMethod6)
		{
			Assert::AreEqual(bit_check(-129, 2), 0);
		}
		TEST_METHOD(TestMethod7)
		{
			Assert::AreEqual(bit_check(129, 5), 0);
		}
	};
}
