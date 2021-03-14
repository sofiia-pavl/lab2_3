#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2_1/Fraction.h"
#include "C:\Users\Софія\source\repos\lab2_1\lab2_1\Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest23
{
	TEST_CLASS(UnitTest23)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction a(423, 4);
			int r = a.getOne();
			Assert::AreEqual(r, 423);
		}
		
	};
}
