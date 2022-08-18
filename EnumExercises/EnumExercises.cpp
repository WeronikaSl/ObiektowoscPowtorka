#include <iostream>
//1
enum class Cards { spades = 1, hearts, clubs, diamonds };

//2
enum class Weekend {Saturday, Sunday};

int main()
{
	//Cards a = Cards::clubs;

	//if (a == Cards::diamonds)
	//{
	//	std::cout << "False";
	//}
	//else
	//{
	//	std::cout << "true";
	//}

//2
	Weekend whenMeeting = Weekend::Saturday;
	if (whenMeeting == Weekend::Saturday)
	{
		std::cout << "You have meeting on Saturday!" << std::endl;
	}
	else
	{
		std::cout << "You have meeting on Sunday!" << std::endl;

	}
}
