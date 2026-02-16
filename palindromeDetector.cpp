// Shariza Aziz
// Palindrome detector.cpp

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class PalindromeCheck 
{
	private:
		vector<string> original;
		vector<string> reversed;
	public:
		void setOriginal(string& str) 
		{
			cout << "Enter a word: \n";
			cin >> str;
			original.clear();
						
			for(int i = 0; i < str.length(); i++)
			{
				original.push_back(str[i]);
			}
		}
		void reverseWord()
		{
			reversed.clear();
			for(int i = original.size() - 1; i >= 0; i--)
			{
				reversed.push_back(original[i]);
			}
		}
		bool isPalindrome()
		{
			for(int i = 0; i < original.size(); i++) 
			{
				if(original[i] != reversed[i])
					return false;
			}
			return true;
		}
};

int main() 
{
		PalindromeCheck test;
		string word;
		
		test.setOriginal(word);
		test.reverseWord();
		
		if(test.isPalindrome())
		{
			cout << word << " is a palindrome\n";
		}
		else
			cout << word << " is not a palindrome\n";
		
	return 0;
}