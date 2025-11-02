#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool helper(vector<vector<char>>& board, string word, int i, int j,
                pair<int, int> past) {
        if (word.size() == 0) {
            return true;
        }
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() ||
            board[i][j] != word[0]) {
            return false;
        }
        bool left = false;
        bool right = false;
        bool up = false;
        bool down = false;
        if (!(i - 1 == past.first && j == past.second))
            left = helper(board, word.substr(1), i - 1, j, {i, j});
        if (!(i + 1 == past.first && j == past.second))
            right = helper(board, word.substr(1), i + 1, j, {i, j});
        if (!(i == past.first && j - 1 == past.second))
            up = helper(board, word.substr(1), i, j - 1, {i, j});
        if (!(i == past.first && j + 1 == past.second))
            down = helper(board, word.substr(1), i, j + 1, {i, j});
        return left || right || up || down;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                bool is = helper(board, word, i, j, {-1, -1});
                if (is) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){
    Solution sol;
    vector<vector<char>> board = {
        {'a', 'a', 'a', 'a'},
        {'a', 'a', 'a', 'a'},
        {'a', 'a', 'a', 'a'},
    };
    string word = "aaaaaaaaaaaaa";
    cout << sol.exist(board, word) << endl; // Output: 1 (true)
    return 0;
}
