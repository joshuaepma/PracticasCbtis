check_permutations: Given two strings, write a method to decide if one is a permutation of the other
is_unique: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?

One Away: There are three types of edits that can be performed on strings: insert a character, remove a character, or replace a character. Given two strings, write a function to check if they are one edit (or zero edits) away.

Example:
pale, ple -> true
pales, pale -> true
pale, bale -> true
pale, bake -> false

Palindrome Permutation: Given a string, write a function to check if it is a permutation of a pelindrome. A pelindrome is. aword or phrase that is the same fowards andd backwards. A permutation is a rearrangement of letters. The plaindrome does not need to be limited to just dictionary words.

Rotate Matrix: Given an image represented by an NxN matrix, where each pixel in the image is 5 bytes, write a method to rotate the image by 90 degrees. Can you do this in place?

String Compression: Implement a method to perform basic string compression using the counts of reapeted characters. For example the string aabcccccaaa would become a2b1c5a3. if the compressed string would not become smaller than the original string your method should return the original string. You can assume the string has only uppercase and lowercase letters (a-z).

String Rotation: Assume you have a method is Substring which checks if one word is a substring of another. Given two strings, s1, and s2, write code to check if s2 is a rotation of s1 using only one call to isSubstring (e.g., "waterbottle" is a rotation of "erbottlewat")

URLify: Write a method to replace all spaces in a string with '%20' you may assume that the string has sufficient space at the end to hold the addtiioal characters, and that you are given the true length of string. (Note: if implementing in Java, please use a chracter array so that you can perform this operation in place)

Input: 'Mr John Smith ', 13
Output: 'Mr%20John%20Smith'