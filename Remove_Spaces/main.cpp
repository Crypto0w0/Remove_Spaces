#include <iostream>
using namespace std;

string RemoveSpaces(string s){
    for (char i : s){
        if (i != ' '){
            break;;
        }
    }
    string newStr;
    int count = 0;
    for (char i : s){
        if (i == ' ' && i++ == ' '){
            continue;
        }
        newStr[count] = i;
        count++;
    }
    return newStr;
}

int main() {
    
}
