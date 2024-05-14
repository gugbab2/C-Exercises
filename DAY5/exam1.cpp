#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 입력 : 문자열 mode 
// 조건1 : mode는 항상 처음에 0으로 시작
// 조건3 : mode = 0일 경우 
// 조건3-1 : code[idx]가 "1"이 아니면 idx가 짝수일 때만 ret의 맨 뒤에 code[idx]를 추가합니다.
// 조건3-2 : code[idx]가 "1"이면 mode를 0에서 1로 바꿉니다.
// 조건4 : mode = 1일 경우  
// 조건4-1 : code[idx]가 "1"이 아니면 idx가 홀수일 때만 ret의 맨 뒤에 code[idx]를 추가합니다.
// 조건4-2 : code[idx]가 "1"이면 mode를 1에서 0으로 바꿉니다.
// 조건5: return 하려는 ret가 만약 빈 문자열이라면 대신 "EMPTY"를 return 합니다.
// 출력 : 문자열 ret

string solution(string code) {
    int mode = 0;
    string ret = "";
    
    for(int idx=0; idx<code.length(); idx++)
    {
        if (mode == 0) {
            // code[idx]가 "1"이 아니면서 idx가 짝수인 경우
            if (code[idx] != '1' && idx % 2 == 0) {
                ret += code[idx]; // ret에 code[idx] 추가
            } 
            // code[idx]가 "1"인 경우
            else if (code[idx] == '1') {
                mode = 1; // mode를 0에서 1로 변경
            }
        }
        // mode가 1인 경우
        else {
            // code[idx]가 "1"이 아니면서 idx가 홀수인 경우
            if (code[idx] != '1' && idx % 2 == 1) {
                ret += code[idx]; // ret에 code[idx] 추가
            }
            // code[idx]가 "1"인 경우
            else if (code[idx] == '1') {
                mode = 0; // mode를 1에서 0으로 변경
            }
        }
    }
    
    if(ret.empty())
        ret = "EMPTY";
    
    return ret;
}