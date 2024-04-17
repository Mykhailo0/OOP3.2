#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP3.2/Car.cpp"
#include "../OOP3.2/Engine.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Car car;
			std::stringstream ss;
			ss << "truck";
			ss >> car;
			Assert::AreEqual(std::string("truck"), car.getBrand());
			Assert::AreEqual(1000.0, car.getPrice());
			Assert::AreEqual(200, car.getEngine().getPower());
		}
	};
}
