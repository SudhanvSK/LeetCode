class Solution {
public:
    // Submitted for 100DaysLeetCodeChallenge DAY 81

    bool dfs(int course, vector<vector<int>>& v, vector<int>& state) {
    if (state[course] == 1) return false; 
    if (state[course] == 2) return true; 
    state[course] = 1;
    for (int i = 0; i < v[course].size(); i++) {
        int nextCourse = v[course][i];
        if (!dfs(nextCourse, v, state)) return false; 
    }
    state[course] = 2;
    return true;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector <vector<int>> v (numCourses);
        for(int i=0;i<prerequisites.size();i++) v[prerequisites[i][1]].push_back(prerequisites[i][0]);
        vector <int> state (numCourses, 0);
        bool ans;
        for(int i=0;i<v.size();i++) 
        {
            ans = dfs(i, v, state);
            if(!ans) return false;
        }
        return true;
    }
};