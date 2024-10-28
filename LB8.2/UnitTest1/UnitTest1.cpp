#include "pch.h"
#include "CppUnitTest.h"
#include "../LB8.2/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string input = "banana";
			bool expectedOutput = false;

			bool actualOutput = startsWithA(input);
			Assert::AreEqual(expectedOutput, actualOutput);

		}
	};
}
