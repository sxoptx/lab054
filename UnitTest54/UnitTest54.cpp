#include "pch.h"
#include "CppUnitTest.h"
#include "../lab054/lab054.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(Test1)
		{
			Assert::AreEqual(0.1111111, S0(1, 1), 0.000001);
		}
		TEST_METHOD(Test2)
		{
			Assert::AreEqual(0.1715193, S0(1, 3), 0.000001);
		}
		TEST_METHOD(Test3)
		{
			Assert::AreEqual(0.0727538, S0(2, 4), 0.000001);
		}
		TEST_METHOD(Test4)
		{
			Assert::AreEqual(0.2109889, S0(1, 10), 0.000001);
		}

		// S1 - рекурсія на підйомі, k зростає (++)
		TEST_METHOD(Test5)
		{
			Assert::AreEqual(0.1715193, S1(1, 3, 1), 0.000001);
		}

		//S2 - рекурсія на підйомі, k спадає (--)
		TEST_METHOD(Test6)
		{
			Assert::AreEqual(0.1715193, S2(1, 3, 3), 0.000001);
		}

		// S3 - рекурсія на спуску, k зростає (++)
		TEST_METHOD(Test7)
		{
			Assert::AreEqual(0.1715193, S3(1, 3, 1, 0), 0.000001);
		}

		// S4 - рекурсія на спуску, k спадає (--)
		TEST_METHOD(Test8)
		{
			Assert::AreEqual(0.1715193, S4(1, 3, 3, 0), 0.000001);
		}
	};
}
