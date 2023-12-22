#include <iostream>
#include <string>
using namespace std;

// This reverse function only reverse the alphabet letter not any other things. only swap is done between letter present in it.

string reverseOnlyLetters(string s)
{
  int l = 0;
  int h = s.size() - 1;
  while (l < h)
  {
    if (isalpha(s[l]) && isalpha(s[h]))
    {
      swap(s[l], s[h]);
      l++;
      h--;
    }
    else if (!isalpha(s[l]))
    {
      l++;
    }
    else
    {
      h--;
    }
  }
  return s;
}

int main()
{
  string s = {"Test1ng-Leet=code-Q!"};
  cout << "the reverse of the string s is as :  " << endl;

  string reverse = reverseOnlyLetters(s);
  cout << reverse << endl;

  return 0;
}