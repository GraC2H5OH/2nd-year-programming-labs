#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab8.2.t\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int matr[3][3] = {
				{1,2,3},
				{4,5,6},
				{7,8,9}
			};
			
			int res[3][3] = {
				{1,4,7},
				{2,5,8},
				{3,6,9}
			};

			transpose(matr, 3);

			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					Assert::AreEqual(matr[i][j], res[i][j]);
				}
			}
		}

		TEST_METHOD(TestMethod2)
		{
			int matr[3][3] = {
				{1,4,7},
				{2,5,8},
				{3,6,9}
			};

			int res[3][3] = {
				{1,2,3},
				{4,5,6},
				{7,8,9}
			};


			transpose(matr, 3);

			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					Assert::AreEqual(matr[i][j], res[i][j]);
				}
			}
		}

		TEST_METHOD(TestMethod3)
		{
			int matr[3][3] = {
				{0,0,0},
				{0,0,0},
				{0,0,0}
			};

			int res[3][3] = {
				{0,0,0},
				{0,0,0},
				{0,0,0}
			};


			transpose(matr, 3);

			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					Assert::AreEqual(matr[i][j], res[i][j]);
				}
			}
		}

	};
}
