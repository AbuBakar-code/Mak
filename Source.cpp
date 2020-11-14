#include<iostream>

using namespace std;

int palaindrome() {
	int i, j, len, flag = 1;
	char a[20];

	cout << "Enter a string:";
	cin >> a;

	for (len = 0; a[len] != '\0'; ++len); {

		for (i = 0, j = len - 1; i < len / 2; ++i, --j)
		{
			if (a[j] != a[i])
				flag = 0;
		}
	}


	if (flag == 1)
		cout << "\nThe string is Palindrome";
	else
		cout << "\nThe string is not Palindrome";
	return flag;
}
int main()
{
	palaindrome();
	return 0;
}