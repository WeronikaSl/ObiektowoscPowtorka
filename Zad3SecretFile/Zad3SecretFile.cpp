//usunelam ostatnia linijke z csv (była pusta) żeby się kompilowało

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <regex>

bool isPasswordCorrect(std::string password)
{
	const std::regex passwordRegex("^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)[a-zA-Z\d]{8,}$");
	return std::regex_match(password, passwordRegex);
}


int main()
{
	std::ifstream file("secret_file.csv");

	if (!file.is_open())
	{
		std::cout << "Nie można otworzyć pliku :(" << std::endl;
		return -1;
	}

	std::vector<std::string> text; //tu przechowujemy nasz tekst z pliku
	std::vector<std::string> passwords;
	std::string line = {};

	while (file.good() && !file.eof())
	{
		std::getline(file, line);
		text.push_back(line);
		//std::cout << line << std::endl; 
	}

	file.close();


	std::string fromText = {};
	std::string password = {};

	for (int i = 1; i < text.size(); ++i)
	{
		fromText = text.at(i);
		while (fromText.back() != ',')
		{
			password.push_back(fromText.back());
			fromText.pop_back();
		}
		std::reverse(password.begin(), password.end());
		passwords.push_back(password);
		password = {};
	}

	//std::cout << std::endl;
	//for (auto n : passwords)
	//{
	//	std::cout << n << std::endl;
	//}

	std::vector<std::string> incorrectPasswords = {};

	for (auto it = passwords.cbegin(); it < passwords.cend(); ++it)
	{
		if (isPasswordCorrect(*it) == false)
		{
			incorrectPasswords.push_back(*it);
		}
	}

	for (auto n : incorrectPasswords)
	{
		std::cout << n << std::endl;
	}
	std::cout 
		<< "Ilość haseł: " << passwords.size() << std::endl
		<< "Ilość złych haseł: " << incorrectPasswords.size() << std::endl; //coś nie działa

	std::string fileToWriteName("C:\\Users\\Weronika Słowińska\\OneDrive\\Desktop\\CPP\\ObiektowoscPowtorka\\Zad3SecretFile\\incorrectPasswords.txt");

	std::ofstream fileToWrite(fileToWriteName, std::ios::out | std::ios::trunc);

	if (!fileToWrite.is_open())
	{
		std::cout << "Nie można otworzyć pliku :(" << std::endl;
		return -1;
	}
	for (auto it = incorrectPasswords.cbegin(); it < incorrectPasswords.cend(); ++it)
	{
		if (fileToWrite.good())
		{
			fileToWrite << *it << std::endl;
		}
	}
	fileToWrite.close();

}