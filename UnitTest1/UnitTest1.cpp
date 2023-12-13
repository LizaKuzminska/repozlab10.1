#include "pch.h"
#include "CppUnitTest.h"
#include "../lab10.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			using namespace std;
			string fileName = "test.txt";
			int result = hasAdjacentPairs(fileName);

			ofstream file(fileName);
			file << "aabbccdd\n";
			file.close();

			Assert::AreEqual(result, 1);
		}
	};
}
