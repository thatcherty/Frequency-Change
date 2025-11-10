#include "HuffmanTree.h"

using namespace std;

int main()
{
	string phrase_input = "";
	char char_input;
	int freq_input;
	unordered_map<char, int> newFreq{};

	cout << "Please enter a string to encode: " << endl;
	getline(cin, phrase_input);

	cout << "Enter a character and a new frequency (for example 'a 5'): " << endl;
	cin >> char_input;
	cin >> freq_input;

	while (char_input != '\0')
	{
		newFreq[char_input] = freq_input;
	}

	HuffmanTree example = HuffmanTree(phrase_input);

	cout << "Original: " << endl;
	cout << endl;
	example.printMapping();
	cout << endl;
	example.printEncoded();
	cout << endl;

	example.modifyFreq(newFreq, phrase_input);

	cout << "Adjusted: " << endl;
	cout << endl;
	example.printMapping();
	cout << endl;
	example.printEncoded();
	cout << endl;

	return 0;
}