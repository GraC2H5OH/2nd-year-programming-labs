#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab46\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test46
{
	TEST_CLASS(test46)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(power(5., 3), 125., 0.1);
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(power(1., 0), 1., 0.1);
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(power(0., 1), 0.);
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(power(5.5, 3), 166.375, 0.01);
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(power(10., 3), 1000., 0.1);
		}
		TEST_METHOD(TestMethod6)
		{
			Assert::AreEqual(power(7.8, 2), 60.84, 0.01);
		}
		TEST_METHOD(TestMethod7)
		{
			Assert::AreEqual(power(1, 1), 1.);
		}
		TEST_METHOD(TestMethod8)
		{
			try {
				Assert::AreEqual(power(0, -1), 1, 0.01);
				Assert::Fail((const wchar_t*)"ERROR");
			}
			catch(int){
				Assert::IsTrue(true);
			}
		}
		TEST_METHOD(TestMethod9)
		{
			Assert::AreEqual(power(2, -3), 0.125, 0.01);
		}
	};
}
