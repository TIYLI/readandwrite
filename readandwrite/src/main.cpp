#include <iostream>

namespace sus
{
	template <typename T>
	void Print(T t)
	{

		std::cout << t << "\n";

	}


}



int main()
{
	sus::Print(123);
}