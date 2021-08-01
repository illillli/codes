#include<iostream>
using namespace std;

int main() {
    string str[26] = {
    "A",
    "ABA",
    "ABCBA",
    "ABCDCBA",
    "ABCDEDCBA",
    "ABCDEFEDCBA",
    "ABCDEFGFEDCBA",
    "ABCDEFGHGFEDCBA",
    "ABCDEFGHIHGFEDCBA",
    "ABCDEFGHIJIHGFEDCBA",
    "ABCDEFGHIJKJIHGFEDCBA",
    "ABCDEFGHIJKLKJIHGFEDCBA",
    "ABCDEFGHIJKLMLKJIHGFEDCBA",
    "ABCDEFGHIJKLMNMLKJIHGFEDCBA",
    "ABCDEFGHIJKLMNONMLKJIHGFEDCBA",
    "ABCDEFGHIJKLMNOPONMLKJIHGFEDCBA",
    "ABCDEFGHIJKLMNOPQPONMLKJIHGFEDCBA",
    "ABCDEFGHIJKLMNOPQRQPONMLKJIHGFEDCBA",
    "ABCDEFGHIJKLMNOPQRSRQPONMLKJIHGFEDCBA",
    "ABCDEFGHIJKLMNOPQRSTSRQPONMLKJIHGFEDCBA",
    "ABCDEFGHIJKLMNOPQRSTUTSRQPONMLKJIHGFEDCBA",
    "ABCDEFGHIJKLMNOPQRSTUVUTSRQPONMLKJIHGFEDCBA",
    "ABCDEFGHIJKLMNOPQRSTUVWVUTSRQPONMLKJIHGFEDCBA",
    "ABCDEFGHIJKLMNOPQRSTUVWXWVUTSRQPONMLKJIHGFEDCBA",
    "ABCDEFGHIJKLMNOPQRSTUVWXYXWVUTSRQPONMLKJIHGFEDCBA",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZYXWVUTSRQPONMLKJIHGFEDCBA"
    };
    int a,b;
    cin >> a >> b;
    for(int i=0;i<a;i++){
        cout << string(a-i-1,' ');
        cout << str[i];
        cout << endl;
    }
    for(int i=a-2;i>=0;i--){
        cout << string(a-i-1,' ');
        cout << str[i];
        cout << endl;
    }for(int i=0;i<b;i++){
        cout << string(b-i-1,' ');
        cout << str[i];
        cout <<endl;
    }
    for(int i=b-2;i>=0;i--){
        cout << string(b-i-1,' ');
        cout << str[i];
        cout << endl;
    }
    
        
    


    return 0;
}
