/*
 * @lc app=leetcode.cn id=690 lang=cpp
 *
 * [690] 员工的重要性
 */

// @lc code=start
/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int ipt= employees[]
        if(employees[id]->subordinates.size() != 0){
            for(int i = 0; i < employees[id]->subordinates.size(); i++){
                ipt += employees[employees[id]->subordinates[i]]->importance;
            }
        }
        return ipt;
        
    }
};
// @lc code=end

