#include <string>
#include <vector>

using namespace std;

// 문제설명#1 : 두 문자열 ineq와 eq가 주어집니다. ineq는 "<"와 ">"중 하나고, eq는 "="와 "!"중 하나입니다. 그리고 두 정수 n과 m이 주어질 때, n과 m이 ineq와 eq의 조건에 맞으면 1을 아니면 0을 return하도록 solution 함수를 완성해주세요.
// 문제설명#2 : eq 값이 "!" 일 때는 무시하고, "=" 일때는 ineq 연산에 추가적으로 연산을 해준다.

// 입출력예#1 : ineq(<), eq(=), n(20), m(50), result(1)
// 입출력예#2 : ineq(>), eq(!), n(41), m(78), result(0)
 
// 매개변수 : 문자열 ineq, eq / 정수 n, m
// 처리#1 : eq 의 값이 "!" 이면서, ineq 의 값이 "<" 혹은 ">" 이고 실제로 그 연산이 참인 것들은 1을 리턴 
// 처리#2 : eq 의 값이 "=" 이면서, ineq 의 값이 "<" 혹은 ">" 일때 "<=" 혹인 ">=" 연산이 참인 것들은 1을 리턴 
// 처리#3 : 그 외의 값들은 0을 리턴
int solution(string ineq, string eq, int n, int m) {
    
    if(eq == "!" && ((ineq == "<" && n < m) || (ineq == ">" && n > m)))
        return 1; 
    else if(eq == "=" && ((ineq == "<" && n <= m) || (ineq == ">" && n >= m)))
        return 1;
    else 
        return 0;
}