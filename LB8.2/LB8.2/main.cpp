#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Функція, яка перевіряє, чи слово починається на букву 'a'
bool startsWithA(const string& word) {
    return !word.empty() && word[0] == 'a';
}

// Функція, яка знаходить останнє слово, що починається з букви 'a'
string findLastWordStartingWithA(const string& str) {
    stringstream ss(str);
    string word;
    string lastWordWithA = ""; 

    while (ss >> word) {
        if (startsWithA(word)) {
            lastWordWithA = word;  
        }
    }

    return lastWordWithA;  
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    string lastWord = findLastWordStartingWithA(str);

    if (!lastWord.empty()) {
        cout << "The last word starting with 'a' is: " << lastWord << endl;
    }
    else {
        cout << "There is no word starting with 'a' in the string." << endl;
    }

    return 0;
}
