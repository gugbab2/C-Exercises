#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
    // 문제 (이차원 배열 대각선 순회하기)
    2차원 정수 배열 board와 정수 k가 주어집니다.
    i + j <= k를 만족하는 모든 (i, j)에 대한 board[i][j]의 합을 return 하는 solution 함수를 완성해 주세요.
    
    //입출력값 
    [[0, 1, 2],[1, 2, 3],[2, 3, 4],[3, 4, 5]]	2	8   // board k answer

    // 변수 
    size_t i = 0;
    size_t j = 0;
    int answer = 0;

    // i=0, j=0, k=2
    i+j <= k            // true
    answer += board[i][j]  
    
    // i=0, j=1, k=2
    i+j <= k            // true
    answer += board[i][j] 
    
    // i=0, j=2, k=2
    i+j <= k            // true
    answer += board[i][j] 
    
    // i=1, j=0, k=2
    i+j <= k            // true
    zanswer += board[i][j]
    
    // i=1, j=1, k=2
    i+j <= k            // true
    answer += board[i][j] 
    
    // i=1, j=2, k=2
    i+j <= k            // false
    
    ... 
*/

int solution(vector<vector<int>> board, int k) {
    int answer = 0;
    size_t temp = 0;
    
    for(size_t i = 0; i<board.size(); ++i)
    {
        for(size_t j = 0; j<board[i].size(); ++j)
        {
            temp = i+j;
            
            cout << "temp : " << temp << ", i : " << i << ", j : " << j << endl;
            if(temp <= k)
                answer += board[i][j];
        }
    }
    
    return answer;
} 

