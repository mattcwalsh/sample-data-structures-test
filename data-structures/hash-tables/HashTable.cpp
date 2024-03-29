#include "HashTable.h"
#include "WordEntry.h"

/* HashTable constructor
*  input s is the size of the array
*  set s to be size
*  initialize array of lists of WordEntry
*/
HashTable::HashTable(int s) {
	hashTable = new list<WordEntry>;
	nextTable = nullptr;
	size = s;
}


/* computeHash
*  return an integer based on the input string
*  used for index into the array in hash table
*  be sure to use the size of the array to
*  ensure array index doesn't go out of bounds
*/
int HashTable::computeHash(const string &s) {
	int index = 0;

	if (index > size) {
		return -1;
	} else {
		return index;
	}
}


/* put
*  input: string word and int score to be inserted
*  First, look to see if word already exists in hash table
*   if so, addNewAppearence with the score to the WordEntry
*   if not, create a new Entry and push it on the list at the
*   appropriate array index
*/
void HashTable::put(const string &s, int score) {
	
}

/* getAverage
*  input: string word
*  output: the result of a call to getAverage()
*          from the WordEntry
*  Must first find the WordEntry in the hash table
*  then return the average
*  If not found, return the value 2.0 (neutral result)
*/
double HashTable::getAverage(const string &s) {
	return 1.0;
}

/* contains
* input: string word
* output: true if word is in the hash table
*         false if word is not in the hash table
*/
bool HashTable::contains(const string &s) {
	
	HashTable *tablePtr = new HashTable(0);
	WordEntry *wordPtr = new WordEntry(0, 0);

	// Iterate through each list<WordEntry>.
	for (int i = 0; i < size; i++) {

		// Iterate through each word in list<WordEntry>.
		for (int j = 0; j < listPtr->size(); j++) {
			if (wordPtr->getWord() == s) {
				return true;
			}
		}

		listPtr = listPtr->nextTable;
	}