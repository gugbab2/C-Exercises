#include <string>
#include <iostream>
#include <vector>

using namespace std; 

// 문제설명 : 문자열 my_string, overwrite_string과 정수 s가 주어집니다. 문자열 my_string의 인덱스 s부터 overwrite_string의 길이만큼을 문자열 overwrite_string으로 바꾼 문자열을 return 하는 solution 함수를 작성해 주세요.
// 입출력예#1 : 예제 1번의 my_string에서 인덱스 2부터 overwrite_string의 길이만큼에 해당하는 부분은 "11oWor1"이고 이를 "lloWorl"로 바꾼 "HelloWorld"를 return 합니다.
// 입출력예#2 : 예제 2번의 my_string에서 인덱스 7부터 overwrite_string의 길이만큼에 해당하는 부분은 "29b8UYP"이고 이를 "merS123"로 바꾼 "ProgrammerS123"를 return 합니다.

// 입력 : 문자열 my_string, overwrite_string 정수 s
// 처리 : my_string 의 s 번째 인덱스부터 overwrite_string 으로 덮어쓰자
// 출력 : my_string 의 s 번째 인덱스부터 overwrite_string 으로 덮어쓴 값 
string solution(string my_string, string overwrite_string, int s) {
    string answer = ""; 
    
    for(int i=0; i<overwrite_string.length(); i++)
    {
        my_string[s+i] = overwrite_string[i];
    }
    answer = my_string;
    
    return answer;
}