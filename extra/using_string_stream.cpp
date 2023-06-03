#include<bits/stdc++.h>
using namespace std;

//A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream (like cin).
// To use stringstream, we need to include sstream header file. The stringstream class is extremely useful in parsing input

// C++ program to count words in
// a string using stringstream.
// #include <iostream>
// #include <sstream>
// #include<string>
// using namespace std;

int countWords(string str)
{
	// Breaking input into word
	// using string stream

	// Used for breaking words
	stringstream s(str);

	// To store individual words
	char word;

	int count = 0;
	while (s >> word)
		count++;
	return count;
}

// Driver code
int main()
{
	string s = "geeks for geeks geeks "
			"contribution placements";
	cout << " Number of words are: " << countWords(s);
	return 0;
}
