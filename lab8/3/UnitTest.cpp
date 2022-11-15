#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab8.3.t\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest83
{
	TEST_CLASS(UnitTest83)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int matr[3][3] = {
				{1,2,3},
				{4,5,6},
				{7,8,9}
			};
			Assert::AreEqual(symmetric(matr, 3, 3), false);
		}
		TEST_METHOD(TestMethod2)
		{
			int matr[3][3] = {
				{1,2,3},
				{2,5,6},
				{3,6,9}
			};
			Assert::AreEqual(symmetric(matr, 3, 3), true);
		}
		TEST_METHOD(TestMethod3)
		{
			int matr[3][3] = {
				{1,1,1},
				{1,1,1},
				{1,1,1}
			};
			Assert::AreEqual(symmetric(matr, 3, 3), true);
		}
	};
}
