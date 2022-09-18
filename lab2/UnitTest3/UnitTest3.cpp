#include "pch.h"
#include "CppUnitTest.h"
#include "..\3\headd.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestDistance1)
		{
			Assert::AreEqual(Distance(1., 2., 3., 4.), 2.82843);
		}
		TEST_METHOD(TestDistance2)
		{
			Assert::AreEqual(Distance(5., 6., 7., 8.), double(2.82843));
		}
		TEST_METHOD(Square1)
		{
			Assert::AreEqual(Square(0, 0, 0 ,0 ,0 ,0), 0.);
		}
		TEST_METHOD(Distance_to_line1)
		{
			Assert::AreEqual(Distance_to_line(1., 2., 3., 4., 5., 6.), 1.41421);
		}
	};
}
