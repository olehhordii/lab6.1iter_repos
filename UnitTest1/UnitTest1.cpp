#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1_iter/lab6.1_iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int b = 5;
			int a[b] = {43,-12,1,5,-3};
			int c;
			c = Sum(a, b);
			Assert::AreEqual(34, c);
		}
	};
}
