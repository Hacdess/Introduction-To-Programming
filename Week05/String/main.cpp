#include <iostream>
#include "ReverseString.h"
#include "WordPerLine.h"
#include "CapitalizeFirstLetter.h"
#include "FindSubstrPositions.h"
#include "RemoveExtraSpaces.h"
#include "WordLengthByIndex.h"
#include "NotLetterOrDigit.h"

int main()
{
	char str[51];
	
	cout << "1. Enter a string (maximum 50 characters): ";
	cin.getline(str, 51);

	cout << "2. Print entered string: " << str << endl;
	
	char temp[51];
	strcpy_s(temp, str);
	ReverseString(temp);
	cout << "3. Reverse string: " << temp << endl;

	cout << "4. Print 1 word per line:\n";
	PrintWordPerLine(str);
	cout << endl;

	strcpy_s(temp, str);
	CapitalizeFirstLetter(temp);
	cout << "5. Capitalize first letter of each word: " << temp << "\n\n";

	cout << "6. Enter sub string to find in \"" << str << "\" ((maximum 50 characters): ";
	cin.getline(temp, 51);
	FindSubstrPositions(str, temp);
	cout << endl;

	RemoveExtraSpaces(str);
	cout << "7. String after being removed extra spaces: " << str << "\n\n";

	int index;
	cout << "8. Enter index to get word's length from string \"" << str << "\": ";
	cin >> index;
	int len = GetWordLengthByIndex(str, index);
	if (len > 0)
		cout << "The number of letters of that word: " << len << endl;
	else
		cout << "Invalid index or there is no word at index " << index << "\n\n";

	int indexes[50];
	GetListNotLetterNorDigit(str, indexes, len);
	cout << "9. Indexes of characterers which are not digits nor letters in \"" << str << "\": ";
	for (int i = 0; i < len; ++i)
		cout << indexes[i] << ' ';
	cout << "\n\n";

	cout << "10. Remove all characters which are not digits nor letter in \"" << str << "\":\n";
	RemoveNotLetterNorDigit(str);
	cout << "New string: " << str;

	return 0;
}