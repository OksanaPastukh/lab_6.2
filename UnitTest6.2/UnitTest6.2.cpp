#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.2/project6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int n = 10;
			int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
			c = Sum(a, n);
			Assert::AreEqual(c, 30);
		}
	};
}
