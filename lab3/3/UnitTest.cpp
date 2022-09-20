#include <cmath>
#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab33\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test33
{
	TEST_CLASS(test33)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(teilor_exp(0, 0.01), 1.);
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(teilor_exp(1, 0.00001), exp(1), 0.00001);
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(teilor_exp(1, 0.01), exp(1), 0.01);
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(teilor_exp(2, 0.01), exp(2), 0.01);
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(teilor_exp(2, 0.0001), exp(2), 0.0001);
		}
		TEST_METHOD(TestMethod6)
		{
			Assert::AreEqual(teilor_exp(-3, 0.0001), exp(-3), 0.001);
		}
	};
}
