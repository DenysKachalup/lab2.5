#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2.5/Triad.h"
#include "../lab2.5/Triad.cpp"
#include "../lab2.5/Time.h"
#include "../lab2.5/Time.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time a(1, 2, 3);
			++a;
			int t = a.getF();
			Assert::AreEqual(t, 2);

		}
	};
}
