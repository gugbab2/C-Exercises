#include <string>
#include <vector>
#include <algorithm> 

// 입력 : 1-6까지의 정수를 가진 a,b,c,d
// 조건1 : 네 주사위에서 나온 숫자가 모두 p 로 같다면 1111 * p 점을 얻는다.
// 조건2 : 세 주사위에서 나온 숫자가 p 로 같고, 나머지 다른 주사위에서 나온 숫자가 q(p ≠ q)라면 (10 × p + q)2 점을 얻는다.
// 조건3 : 주사위가 두개씩 같은 값이 나오고, 나온 숫자를 각각 p,q(p ≠ q) 라고 한다면, (p + q) × |p - q|점을 얻는다. 
// 조건4 : 어느 두 주사위에서 나온 숫자가 p로 같고 나머지 두 주사위에서 나온 숫자가 각각 p와 다른 q, r(q ≠ r)이라면 q × r점을 얻는다. 
// 조건5 : 네 주사위에 적힌 숫자가 모두 다르다면 나온 숫자 중 가장 작은 숫자 만큼의 점수를 얻는다. 
using namespace std;

int solution(int a, int b, int c, int d) {
    int score = 0;
    
     // 조건 1: 네 주사위에서 나온 숫자가 모두 같으면 1111 * p 점을 얻음
    if (a == b && b == c && c == d) { 
        score = 1111 * a;
    }
    // 조건 2: 세 주사위에서 나온 숫자가 같고, 나머지 한 주사위가 다른 경우 (10 × p + q)^2 점을 얻음
    else if ((a == b && b == c) || (a == b && b == d) || (a == c && c == d) || (b == c && c == d)) {
        int p, q;
        if (a == b && b == c) {
            p = a;
            q = d;
        } else if (a == b && b == d) {
            p = a;
            q = c;
        } else if (a == c && c == d) {
            p = a;
            q = b;
        } else { // (b == c && c == d)
            p = b;
            q = a;
        }
        score = (10 * p + q) * (10 * p + q);
    }
    // 조건 3: 두 개씩 같은 값이 나오고, 다른 주사위가 있을 때 (p + q) × |p - q| 점을 얻음
    else if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c)) {
        int p, q;
        if (a == b) {
            p = a;
            q = c == d ? c : d;
        } else if (a == c) {
            p = a;
            q = b == d ? b : d;
        } else { // (a == d)
            p = a;
            q = b == c ? b : c;
        }
        score = (p + q) * abs(p - q);
    }
    // 조건 4: 두 개씩 같은 값이 나오고, 나머지 두 주사위가 다른 값일 때 q * r 점을 얻음
    else if (a == b && c != d) {
        score = c * d;
    } else if (a == c && b != d) {
        score = b * d;
    } else if (a == d && b != c) {
        score = b * c;
    } else if (b == c && a != d) {
        score = a * d;
    } else if (b == d && a != c) {
        score = a * c;
    } else if (c == d && a != b) {
        score = a * b;
    }
    // 조건 5: 네 주사위에 적힌 숫자가 모두 다르면 가장 작은 숫자 만큼의 점수를 얻음
    else {
        score = min({a, b, c, d});
    }

    return score;
}