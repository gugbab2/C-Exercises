#include <string>
#include <vector>
#include <cassert>

using namespace std;

// 입력값 : 각각의 주사위 값(정수), 1-6 사이 값 
// 조건#1 : 세 숫자가 모두 다르다면, a+b+c
// 조건#2 : 세 숫자 중 어느 두 숫자는 같고 나머지 숫자는 다르다면, (a+b+c)(a^2+b^2+c+3)
// 조건#3 : 세 숫자 모두 같다면, (a+b+c)(a^2+b^2+c^2))(a^3+b^3+c^3)
int solution(int a, int b, int c) {
    
    assert(a >= 1 && a <= 6); // a 값이 1부터 6 사이에 있는지 확인
    assert(b >= 1 && b <= 6); // b 값이 1부터 6 사이에 있는지 확인
    assert(c >= 1 && c <= 6); // c 값이 1부터 6 사이에 있는지 확인
    
    int answer = 0;
     
    if(a != b && a != c && b != c)
        answer = a+b+c;
    else if((a == b && b != c) || (a != b && b == c) || (a == c && a != b))
        answer = (a+b+c)*((a*a)+(b*b)+(c*c));
    else 
        answer = (a+b+c)*((a*a)+(b*b)+(c*c))*((a*a*a)+(b*b*b)+(c*c*c));
        
    return answer;
}

