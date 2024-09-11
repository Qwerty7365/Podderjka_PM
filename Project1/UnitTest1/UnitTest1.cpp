#include "pch.h"
#include "CppUnitTest.h"
#include <FileName.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Plus)
		{
			float x1, x2;
			float exp_x1 = -0.4;
			float exp_x2 = 1;

			Koren(-5, 3, 2, &x1, &x2);

			Assert::AreEqual(exp_x1, x1, L"x1 не совпадает");
			Assert::AreEqual(exp_x2, x2, L"x2 не совпадает");
		}

		TEST_METHOD(Nol)
		{
			float x1, x2;
			float exp_x1 = -0.33f;
			float exp_x2 = -0.33f;

			Koren(18, 12, 2, &x1, &x2);

			Assert::AreEqual(exp_x1, x1, 1e-2f, L"x1 не совпадает");
			Assert::AreEqual(exp_x2, x2, 1e-2f, L"x2 не совпадает");
		}

		TEST_METHOD(Minus)
		{
			float x1, x2;

			Koren(3, 2, 5, &x1, &x2);

			Assert::IsTrue(std::isnan(x1), L"x1 должно быть NaN для комплексных корней.");
		}
	};
}
