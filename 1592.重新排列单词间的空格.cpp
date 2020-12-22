/*
 * @lc app=leetcode.cn id=1592 lang=cpp
 *
 * [1592] 重新排列单词间的空格
 */

// @lc code=start
class Solution {
public:
    string reorderSpaces(string text) {
        string s = "";
        queue<string> que;
        bool flag = false;
        int count = 0;
        for(int i = 0; i < text.size(); i++){
            if(isspace(text[i]))
            {
                if(flag)
                {
                    cout << s << "\n";
                    que.push(s);
                    s = "";
                    flag = false;
                }
                count++;
            }
            else {
                if(!flag)
                {
                    flag =true;
                }
                s += text[i];
            }
        }
        if(flag)
            que.push(s);
        int n = que.size()-1;
        if(n == 0)
        {
            string res = "";
            res += que.front();
            while(count)
            {
                res += " ";
                count--;
            }
            return res;
        }
        int need = count / n;
        string res = "";
        cout << count << " " << need;
        while(!que.empty()){
            res += que.front();
            que.pop();
            int i = 0;
            if(count >= need){
                while(i < need){
                    res += " ";
                    i++;
                }
            count -= need;
            }
        }
        while(count > 0){
            res += " " ;
            count--;
        }
        return res;

    }
};
// @lc code=end

