#include "pch.h"
#include "CppUnitTest.h"
#include "..\individualnoe_pryam2\Header.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace indivpryam2
{
	TEST_CLASS(indivpryam2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(er(0.1 / sqrt(2), 0.0001), 0.07978, 0.0001);
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(er(0.3 / sqrt(2), 0.0001), 0.239365, 0.0001);
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(er(0.4 / sqrt(2), 0.0001), 0.319154, 0.0001);
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(er(0.2 / sqrt(2), 0.0001), 0.159577, 0.0001);
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(er(0.9 / sqrt(2), 0.0001), 0.718096, 0.0001);
		}
	};
}
