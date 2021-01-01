
#include<string>
#include<iostream>

constexpr auto PI = 3.14;
#define KEY 65

using std::string;
using std::cin;
using std::cout;
 

string encription_function(string text)
{
	for (size_t i{ 0 }; i < text.length(); i++)
	{

		switch (text[i])
		{
		case 'a':
			text[i] = 'Z';
			break;
		case 'b':
			text[i] = '#';
			break;
		case 'c':
			text[i] = '.';
			break;
		case 'd':
			text[i] = 'a';
			break;
		case 'e':
			text[i] = 'm';
			break;
		case 'f':
			text[i] = 'p';
			break;
		case 'g':
			text[i] = 'w';
			break;
		case 'h':
			text[i] = ';';
			break;
		case 'i':
			text[i] = '7';
			break;
		case 'j':
			text[i] = '0';
			break;
		case 'k':
			text[i] = '-';
			break;
		case 'l':
			text[i] = '2';
			break;
		case 'm':
			text[i] = '>';
			break;
		case 'n':
			text[i] = '?';
			break;
		case 'o':
			text[i] = '$';
			break;
		case 'p':
			text[i] = '1';
			break;
		case 'q':
			text[i] = 'l';
			break;
		case 'r':
			text[i] = 'k';
			break;
		case 's':
			text[i] = 't';
			break;
		case 't':
			text[i] = '4';
			break;
		case 'u':
			text[i] = 'f';
			break;
		case 'v':
			text[i] = 'g';
			break;
		case 'w':
			text[i] = 'x';
			break;
		case 'x':
			text[i] = 'z';
			break;
		case 'y':
			text[i] = '*';
			break;
		case 'z':
			text[i] = 'h';
			break;
		case ' ':
			text[i] = '^';
			break;
		default:
			text[i] = '~';
			break;
		}

	}

	return text;
}



string decription_function(string text)
{
	for (size_t i{ 0 }; i < text.length(); i++)
	{

		switch (text[i])
		{
		case 'Z':
			text[i] = 'a';
			break;
		case '#':
			text[i] = 'b';
			break;
		case '.':
			text[i] = 'c';
			break;
		case 'a':
			text[i] = 'd';
			break;
		case 'm':
			text[i] = 'e';
			break;
		case 'p':
			text[i] = 'f';
			break;
		case 'w':
			text[i] = 'g';
			break;
		case ';':
			text[i] = 'h';
			break;
		case '7':
			text[i] = 'i';
			break;
		case '0':
			text[i] = 'j';
			break;
		case '-':
			text[i] = 'k';
			break;
		case '2':
			text[i] = 'l';
			break;
		case '>':
			text[i] = 'm';
			break;
		case '?':
			text[i] = 'n';
			break;
		case '$':
			text[i] = 'o';
			break;
		case '1':
			text[i] = 'p';
			break;
		case 'l':
			text[i] = 'q';
			break;
		case 'k':
			text[i] = 'r';
			break;
		case 't':
			text[i] = 's';
			break;
		case '4':
			text[i] = 't';
			break;
		case 'f':
			text[i] = 'u';
			break;
		case 'g':
			text[i] = 'v';
			break;
		case 'x':
			text[i] = 'w';
			break;
		case 'z':
			text[i] = 'x';
			break;
		case '*':
			text[i] = 'y';
			break;
		case 'h':
			text[i] = 'z';
			break;
		case '^':
			text[i] = ' ';
			break;
		default:
			text[i] = '~';
			break;
		}



	}

	return text;
}


 
string getUserText()
{
	string text;
	std::cout << "Enter the text that you want to encript:\n";
	std::getline(cin, text);

	return text;
}

int main()
{

	string user_text{ getUserText() };
 

	string encripted_text{ encription_function(user_text) };
	cout << "The encripted text is: " << encripted_text;

	string decripted_text{ decription_function(encripted_text) };

	cout << "\nThe decripted text is: " << decripted_text;





	return 0;

}

