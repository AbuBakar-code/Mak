#include <iostream>
#include <string> 
using namespace std;

// prototype go here 
int index(char* c, char needle);
int count_digits(char* c);
int palindrome(char* start, char* end);


int main() {
	string haystack, p_string;
	char needle;

	// Also try different values for the string and character
	haystack = "hsdhfokjfasdnjkdwnjkladsgh[3";
	p_string = "civic";
	needle = 'j';

	int loc, count, check, end;
	loc = index(&haystack[0], needle);
	cout << "Loc: " << loc << endl;

	count = count_digits(&haystack[0]);
	cout << "Count: " << count << endl;
	
	end = p_string.length() - 1;
	check = palindrome(&p_string[0], &p_string[end]);
	cout << "Palindrome: " << check << endl;

	return 0;
}

// functions go here 
int index(char* c, char needle) {

	int count = 0;

do {
		count++;
		c++;
		if (*c == needle) {
			return count;
		}
		else if(*c == '\0')
			return -1;
	}
   while (*c != '\0')
}
int count_digits(char* c) {

	int count = 0;

	while (*c != '\0') {
		if ((int)*c >= 48 && (int)*c <= 57) {
			count++;
		}
		c++;
	}
	return count;
}
int palindrome(char* start, char* end) {

	while (start <= end) {
	
		if (*start != *end) {
			return 0;
		}
		start++;
		end--;
	} 
	return 1;
}