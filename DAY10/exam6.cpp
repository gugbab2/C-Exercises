#include <string>
#include <vector>

// 입력 : 문자열 배열 str_list, 문자열 ex
// 조건#1 : str_list 에서 ex 를 포함하는 문자열은 제외하고 합친 문자열을 리턴
using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    for(string s : str_list)
    {
        if(s.find(ex) == string::npos)
            answer += s;
    }
    return answer;
} 