#include <string>
#include <vector>
#include <cstring> 
#include <iostream>

// 입력 : 문자열my_string, 이차원 정수 배열queries
// 조건1 : queries 의 원소는 [s,e] 형태로, my_string의 인덱스 s부터 인덱스 e까지를 뒤집으라는 의미
using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;
    int s = 0;
    int e = 0;
    int difference_value = 0;
    
    for(int i=0; i<queries.size(); i++) 
    {
        s = queries[i][0];
        e = queries[i][1];
        
        while (s < e) {
            swap(answer[s], answer[e]);
            ++s;
            --e;
        }
    }
    return answer;
}