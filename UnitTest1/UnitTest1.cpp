#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.2/6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1, 3, 8, 4, 2, 9, 6 };
			int size = sizeof(arr) / sizeof(arr[0]);
			Assert::AreEqual(2, FindMaxEvenIndex(arr, size));
		}
	};
}
