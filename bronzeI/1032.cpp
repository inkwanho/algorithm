// 명령어 프롬프트
//
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){

    int N;
    string str="";
    char buffer[50];

    cin >> N;
    cin >> str;

    for(int i = 0; i<str.length(); i++)  buffer[i] = str[i];

    for(int i = 1; i<N; i++){
        cin >> str;
        for(int s = 0; s<str.length(); s++){
            if(buffer[s] != str[s]) buffer[s] = '?';
        }
    }
    for(int i = 0; i<str.length(); i++) cout << buffer[i];
    return 0;
}
