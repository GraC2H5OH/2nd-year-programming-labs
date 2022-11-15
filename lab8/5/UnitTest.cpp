#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab8.5.t\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest85
{
	TEST_CLASS(UnitTest85)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int matr[4][3] = {
				{1,2,3},
				{4,5,6},
				{7,8,9}
			};

			int res[4][3] = {
				{10, 11, 12},
				{1,2,3},
				{4,5,6},
				{7,8,9}
			};

			int to_append[3] = { 10, 11, 12 };
			int pos = 0;

			matrix_append(matr, 3, 3, pos, to_append);

			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 3; j++) {
					Assert::AreEqual(matr[i][j], res[i][j]);
				}
			}
		}

		TEST_METHOD(TestMethod2)
		{
			int matr[4][3] = {
				{1,2,3},
				{4,5,6},
				{7,8,9}
			};

			int res[4][3] = {
				{1,2,3},
				{10, 11, 12},
				{4,5,6},
				{7,8,9}
			};

			int to_append[3] = { 10, 11, 12 };
			int pos = 1;

			matrix_append(matr, 3, 3, pos, to_append);

			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 3; j++) {
					Assert::AreEqual(matr[i][j], res[i][j]);
				}
			}
		}

		TEST_METHOD(TestMethod3)
		{
			int matr[4][3] = {
				{1,2,3},
				{4,5,6},
				{7,8,9}
			};

			int res[4][3] = {
				{1,2,3},
				{4,5,6},
				{10, 11, 12},
				{7,8,9}
			};

			int to_append[3] = { 10, 11, 12 };
			int pos = 2;

			matrix_append(matr, 3, 3, pos, to_append);

			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 3; j++) {
					Assert::AreEqual(matr[i][j], res[i][j]);
				}
			}
		}

	};
}
