#include<iostream>
using namespace std;

bool isAlphaNum(char ch){
    if((ch >= '0' && ch <= '9') || 
        (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
            return true;
    }

    return false;
}

bool isPalindrom(string s){
    int st = 0, end = s.length() - 1;

    while(st < end){
        if(!isAlphaNum(s[st])){
            st++; continue;
        }
        if(!isAlphaNum(s[end])){
            end--; continue;
        }

        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }

        st++; end--;
    }
    return true;
}

int main(){
    string str = "";
    cout << "Enter the string : ";
    cin >> str;

    if(isPalindrom(str)){
        cout << "This string '" << str << "' is a Palindrom." << endl;
    }
    else{
        cout << "This is not a Palindrom.";
    }

    return 0;
}