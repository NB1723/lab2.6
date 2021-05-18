#include "pch.h"
#include "CppUnitTest.h"
#include "../Lorry.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Lorry c;
			c.setPower(23000);
			int power = c.getPower();
			Assert::AreEqual(power, 23000);
		}
	};
}