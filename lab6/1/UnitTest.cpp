#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab6\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab6test
{
	TEST_CLASS(lab6test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int* mas = new int[5]{ 1,2,3,4,5 };
			int* res = new int[6]{ 1,2,3,100,4,5 };
			int n = 5;
			vst_v_seredinu(mas, n, 100);
			for (int i = 0; i < 6; i++) {
				Assert::AreEqual(mas[i], res[i]);
			}
		}
		TEST_METHOD(TestMethod2)
		{
			int* mas = new int[4]{ 1,2,3,4 };
			int* res = new int[6]{ 1,2,100,3,4 };
			int n = 4;
			vst_v_seredinu(mas, n, 100);
			for (int i = 0; i < 5; i++) {
				Assert::AreEqual(mas[i], res[i]);
			}
		}
		TEST_METHOD(TestMethod3)
		{
			int* mas = new int[5]{ -1,-2,-3,-4,-5 };
			int* res = new int[6]{ -1,-2,-3,100,-4,-5 };
			int n = 5;
			vst_v_seredinu(mas, n, 100);
			for (int i = 0; i < 6; i++) {
				Assert::AreEqual(mas[i], res[i]);
			}
		}
	};
}