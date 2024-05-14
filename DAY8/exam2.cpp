#include <string>
#include <vector>

// 입력 : 문자열my_string, 정수배열index_list
// 조건1 : my_string 의 index_list 의 원소들에 해당하는 인덱스의 글자들을 순서대로 이어 붙인 문자열을 리턴 
using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    for(int i : index_list)
    {
        answer += my_string[i];
    }
    return answer;
} 