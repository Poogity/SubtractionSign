#include "pch.h"
#include "CppUnitTest.h"
#include "../SubtractionSign/subtraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SubtractionTest
{
	TEST_CLASS(SubtractionTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string expected = "NEGATIVE";
			string result = subtraction(1, 2);

			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(TestMethod2)
		{
			string expected = "POSITIVE";
			string result = subtraction(2, 1);

			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(TestMethod3)
		{
			string expected = "POSITIVE";
			string result = subtraction(1, 1);

			Assert::AreEqual(expected, result);
		}
	};
}
