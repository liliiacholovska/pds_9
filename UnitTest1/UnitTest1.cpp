#include "pch.h"
#include "CppUnitTest.h"
#include "../pds_9/pds_9.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestBFS)
        {
            std::ofstream testInput("testInput.txt");
            testInput << "1 2\n1 3\n2 4\n3 4\n";
            testInput.close();

            initializeGraph();
            loadGraphFromFile("testInput.txt");

            int startVertex = 1;
            BFS(startVertex);

            Assert::AreEqual(1, bfsNumber[1]);
            Assert::AreEqual(2, bfsNumber[2]);
            Assert::AreEqual(3, bfsNumber[3]);
            Assert::AreEqual(4, bfsNumber[4]);
        }
	};
}
