#include <cmath>
#include "pch.h"
#include "CppUnitTest.h"
#include "..\4\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(taylor_sinus(10, 0.0001), sin(10), 0.01);
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(taylor_sinus(50, 0.0001), sin(50), 0.01);
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(taylor_sinus(100, 0.0001), sin(100), 0.01);
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(taylor_sinus(1000, 0.0001), sin(1000), 0.01);
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(taylor_sinus(0, 0.0001), sin(0), 0.01);
		}
		TEST_METHOD(TestMethod6)
		{
			Assert::AreEqual(taylor_sinus(-100, 0.0001), sin(-100), 0.01);
		}
	};
}
