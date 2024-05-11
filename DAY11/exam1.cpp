#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

/*

// 초기화
int i = 0;
string tmp = "";

// step1
myString[i] = 'a';
if(!check) tmp += myString[i]; // a

// step2
int i = 1;
myString[i] = 'x';
if(check) answer.push_back(temp);   // ["a"]
tmp = ""; 

// step3
int i = 2; 
myString[i] = 'b';
if(!check) tmp += myString[i]; // b

// step4 
int i = 3;
myString[i] = 'x';
if(check) answer.push_back(temp);   // ["a", "b"]
tmp = "";

...

*/

vector<string> solution(string myString) {
    vector<string> answer;
    bool check = false;
    string tmp = "";
    
    for(size_t i=0; i<myString.size() ; ++i)
    {
        if(myString[i] != 'x') tmp += myString[i];
        else if(myString[i] == 'x' && tmp != "") {
            answer.push_back(tmp);
            tmp = "";
        }
    }
    
    if(tmp != "") answer.push_back(tmp);
    
    // before sort
    // for(auto s : answer)
    // {
    //     cout << s << " ";
    // }
    // cout << endl;
    
    sort(answer.begin(), answer.end()); 
    
    // after sort
    // for(auto s : answer)
    // {
    //     cout << s << " ";
    // }
    
    return answer;
}