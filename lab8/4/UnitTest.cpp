#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab8.4.t\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest84
{
	TEST_CLASS(UnitTest84)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int matr[3][3] = {
				{1,2,3},
				{4,5,6},
				{7,8,9}
			};

			int res[2][3] = {
				{1,2,3},
				{7,8,9}
			};

			int row = 3;
			delete_row(matr, row, 3, 1);

			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 3; j++) {
					Assert::AreEqual(res[i][j], matr[i][j]);
				}
			}
			
		}
		TEST_METHOD(TestMethod2)
		{
			int matr[3][3] = {
				{1,2,3},
				{4,5,6},
				{7,8,9}
			};

			int res[2][3] = {
				{1,2,3},
				{4,5,6}
			};

			int row = 3;
			delete_row(matr, row, 3, 2);

			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 3; j++) {
					Assert::AreEqual(res[i][j], matr[i][j]);
				}
			}

		}
		TEST_METHOD(TestMethod3)
		{
			int matr[3][3] = {
				{1,2,3},
				{4,5,6},
				{7,8,9}
			};

			int res[2][3] = {
				{4,5,6},
				{7,8,9}
			};

			int row = 3;
			delete_row(matr, row, 3, 0);

			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 3; j++) {
					Assert::AreEqual(res[i][j], matr[i][j]);
				}
			}

		}
	};
}
