class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // Submitted for 100DaysLeetCodeChallenge DAY 90
        int n = intervals.size();
        int start = newInterval[0];
        int end   = newInterval[1];
        int sti = -1, ei = -1;
        for(int i = 0; i < n; i++) {
            if(intervals[i][1] >= start && intervals[i][0] <= end) {
                if(sti == -1) sti = i;
                ei = i;
            }
        }
        if(sti == -1) {
            int pos = 0;
            while(pos < n && intervals[pos][0] < start) pos++;
            intervals.insert(intervals.begin() + pos, {start, end});
            return intervals;
        }
        intervals[sti][0] = min(intervals[sti][0], start);
        intervals[sti][1] = max(intervals[ei][1], end);
        intervals.erase(intervals.begin() + sti + 1, intervals.begin() + ei + 1);
        return intervals;
    }
};