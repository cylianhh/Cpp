
#include <iostream>
#include <queue>
#include <stack>
#include <cctype>

using namespace std;

//premiere tentative sans stack & queue
bool isPalindrome(const string& input) {

    for (int i=0;i<(input.size())/2;i++){

        int j=input.size()-1-i;

        if (input[i]!=input[j]){
            return false; 
        }
    }
    return true;
}

//en utilisant stack & queue
bool isPalindrome2(const string& input) {

    stack<char> s;
    queue<char> q;

    for (char c : input) {
        s.push(c);
        q.push(c);
    }

    while (!s.empty()){

        if (s.top() != q.front()){
            return false;
        }

        s.pop();
        q.pop();
    }

    return true;
}

int main() {
    bool alpha;

    cout << "Is-'racecar'-a-palindrome?-"
         << isPalindrome("racecar") << endl;

    cout << "Is-'hello'-a-palindrome?-"
         << isPalindrome("hello") << endl;

    return 0;
}
