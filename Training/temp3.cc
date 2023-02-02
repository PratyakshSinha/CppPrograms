#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
    string books;
    cin >> books;

    string reversedBooks;
    stack<char> shelf;
    for (int i = 0; i < books.length(); i++) {
        if (books[i] != '/' && books[i] != '\\') {
            shelf.push(books[i]);
        } else {
            while (!shelf.empty()) {
                reversedBooks.push_back(shelf.top());
                shelf.pop();
            }
            reversedBooks.push_back(books[i]);
        }
    }

    while (!shelf.empty()) {
        reversedBooks.push_back(shelf.top());
        shelf.pop();
    }

    reverse(reversedBooks.begin(), reversedBooks.end());
    string res;
    for(int i = 0;i<reversedBooks.size();i++)
    {
        if(reversedBooks[i] == '\\' or reversedBooks[i] == '/')
            continue;
        res.push_back(reversedBooks[i]);
    }
    
    cout << res;
    return 0;
}
