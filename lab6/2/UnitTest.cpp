#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab6\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab6test
{
	TEST_CLASS(lab6test)
	{
	public:
		
		TEST_METHOD(TestMethod4)
		{
			int* mas = new int[5]{ 1,2,3,4,1 };
			int* res = new int[4]{ 1,2,3,4 };
			int n = 5;
			dublicate(mas, n);
			for (int i = 0; i < 4; i++) {
				Assert::AreEqual(mas[i], res[i]);
			}
		}
		TEST_METHOD(TestMethod5)
		{
			int* mas = new int[5]{ 2,2,3,4,5 };
			int* res = new int[4]{ 2,3,4,5 };
			int n = 5;
			dublicate(mas, n);
			for (int i = 0; i < 4; i++) {
				Assert::AreEqual(mas[i], res[i]);
			}
		}
		TEST_METHOD(TestMethod6)
		{
			int* mas = new int[5]{ 1,2,3,4,5 };
			int* res = new int[5]{ 1,2,3,4,5 };
			int n = 5;
			dublicate(mas, n);
			for (int i = 0; i < 5; i++) {
				Assert::AreEqual(mas[i], res[i]);
			}
		}
	};
}
