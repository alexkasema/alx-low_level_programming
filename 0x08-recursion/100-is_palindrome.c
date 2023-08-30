#include "main.h"

/**
 *str_len - A fuction that calculates the length of a string
 *@s: POinter to the string
 *
 *Return: length of string
 */

int str_len(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + str_len(s + 1));
}

/**
 *check_palindrome - Check if a string is a palindrome.
 *@s: Pointer to the string
 *@first: first char in string
 *@last: last char in string
 *
 *Return: 1 if it's a palindrome
 */

int check_palindrome(char *s, int first, int last)
{
	if (first >= last)
		return (1);

	if (s[first] != s[last])
		return (0);

	return (check_palindrome(s, first + 1, last - 1));
}

/**
 *is_palindrome - A function that returns 1 if
 *a string is a palindrome and 0 if not.
 *@s: Pointer to string to check
 *
 *Return: 1 if string is a palindrome.
 */

int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, str_len(s) - 1));
}
