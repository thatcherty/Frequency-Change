#include "HuffmanTree.h"

using namespace std;

int main()
{
	string phrase_input = "";
	string char_input;
	int freq_input;
	unordered_map<char, int> newFreq{};

	cout << "Please enter a string to encode: " << endl;
	getline(cin, phrase_input);

	while (true)
	{
		cout << "Enter a character and a new frequency (for example 'a 5') or type quit to quit: " << endl;
		cin >> char_input;

		if (char_input == "quit") break;

		cin >> freq_input;

		char temp = char_input[0];
		newFreq[temp] = freq_input;
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