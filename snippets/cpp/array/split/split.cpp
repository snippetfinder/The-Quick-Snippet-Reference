
#include <bits/stdc++.h>
using namespace std;

void separator_tokenizer(string s)
{
	stringstream ss(s);
	string word;
	while (ss >> word) {
		cout << word << endl;
	}
}

int main(int argc, char const* argv[])
{
	string a = "5-4-3-2-1";
	separator_tokenizer(a);
	cout << endl;
	return 0;
}
