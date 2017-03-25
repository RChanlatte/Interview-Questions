#include <iostream>
#include <string>

// reverse words in a string(words are separated by one or more spaces)
std::string stringReverse(const std::string& inputStr)
{
	std::string newString;
	
	for(int i = inputStr.length(); i > -1; i--)
	{
		if(inputStr[i] == '\0')
		{
			continue;
		}
		else
		{
			newString += inputStr[i];
		}
	}
	// adds the null-terminating character to the end again
	newString += '\0';
	
	return newString;
}

int main()
{
	std::string testString = "Test String for you.";
	
	std::cout << testString << "\n" << std::endl;
	testString = stringReverse(testString);
	std::cout << testString << "\n" << std::endl;
	
	getchar();
	return 0;
}