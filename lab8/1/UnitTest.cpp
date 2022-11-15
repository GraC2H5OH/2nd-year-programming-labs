#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab8.1.t\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81
{
	TEST_CLASS(UnitTest81)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int matr[3][3] = {
				{1,2,3},
				{4,5,6},
				{7,8,9}
			};
			Assert::AreEqual(contains_zero(matr, 3, 3), 0);
		}
		TEST_METHOD(TestMethod2)
		{
			int matr[3][3] = {
				{0,2,3},
				{4,5,6},
				{7,8,9}
			};
			Assert::AreEqual(contains_zero(matr, 3, 3), 1);
		}
		TEST_METHOD(TestMethod3)
		{
			int matr[3][3] = {
				{0,0,0},
				{4,5,6},
				{7,8,9}
			};
			Assert::AreEqual(contains_zero(matr, 3, 3), 1);
		}
		TEST_METHOD(TestMethod4)
		{
			int matr[3][3] = {
				{0,2,3},
				{4,0,6},
				{7,8,0}
			};
			Assert::AreEqual(contains_zero(matr, 3, 3), 3);
		}
		TEST_METHOD(TestMethod5)
		{
			int matr[3][3] = {
				{0,0,0},
				{0,0,0},
				{0,0,0}
			};
			Assert::AreEqual(contains_zero(matr, 3, 3), 3);
		}
	};
}
