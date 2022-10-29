#include "pch.h"
#include "CppUnitTest.h"
#include "..\5\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(nod_r(10, 50), 10);
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(nod_r(10, 2), 2);
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(nod_r(-10, -50), -10);
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(nod_r(0, 0), 0);
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(nod_iter(10, 50), 10);
		}
		TEST_METHOD(TestMethod6)
		{
			Assert::AreEqual(nod_iter(0, 0), 0);
		}
		TEST_METHOD(TestMethod7)
		{
			Assert::AreEqual(nod_iter(10, 2), 2);
		}
	};
}
