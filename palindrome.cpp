#include <iostream>

using namespace std;

bool isPalindrome(const string &str)
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false; // Characters at the current positions don't match
        }
        left++;
        right--;
    }

    return true; // If the loop completes, it's a palindrome
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindrome(input))
    {
        cout << "It's a palindrome!" << endl;
    }
    else
    {
        cout << "It's not a palindrome." << endl;
    }

    return 0;
}
