/*
 * @lc app=leetcode.cn id=1700 lang=cpp
 *
 * [1700] 无法吃午餐的学生数量
 */

// @lc code=start
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int former = students.size();
        queue<int>stu;
        int pos = 0;
        stu.push(students[0]);
        while(!stu.empty()) 
        {
            if(stu.front() == sandwiches[pos])
            {
                pos++;
                stu.pop();
            }
            else
            {
                int tmp = stu.front();
                stu.pop();
                stu.push(tmp);
            }
        }
        return stu.size();
    }
};
// @lc code=end

