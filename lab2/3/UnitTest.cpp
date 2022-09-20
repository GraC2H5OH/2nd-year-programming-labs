#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab23\functions_header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test2
{
	TEST_CLASS(test2)
	{
	public:
		
		TEST_METHOD(TestDistance1)
		{
			Assert::AreEqual(Distance(1., 1., 2., 1.), 1.);
		}
		TEST_METHOD(TestDistance2)
		{
			Assert::AreEqual(Distance(1., 1., 1., 8.), 7.);
		}
		TEST_METHOD(Square1)
		{
			Assert::AreEqual(Square(0, 0, 0, 0, 0, 0), 0.);

		}
		TEST_METHOD(Square2)
		{
			Assert::AreEqual(Square(1., 1., 2., 2., 3., 3.), 0.);

		}
		TEST_METHOD(Square3)
		{
			Assert::AreEqual(Square(1., 1., 10., 10., 20., 20.), 0.);

		}
		TEST_METHOD(Square4)
		{
			Assert::AreEqual(Square(-1., -2., -3., -4., -5., -6.), 0.);

		}
		TEST_METHOD(Distance_to_line1)
		{
			Assert::AreEqual(Distance_to_line(1., 2., 3., 4., 5., 6.), 1.41421, 0.00001);
		}
		TEST_METHOD(Distance_to_line2)
		{
			Assert::AreEqual(Distance_to_line(0., 0., 3., 3., 5., 3.), 3.);
		}
		TEST_METHOD(Distance_to_line3)
		{
			Assert::AreEqual(Distance_to_line(0., 0., 3., 3., 3., 6.), 0.);
		}
		TEST_METHOD(Distance_to_line4)
		{
			Assert::AreEqual(Distance_to_line(0., 0., 0., 0., 1., 1), 0.);
		}
	};
}
