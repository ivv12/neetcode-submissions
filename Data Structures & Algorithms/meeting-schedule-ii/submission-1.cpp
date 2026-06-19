/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:

    int minMeetingRooms(vector<Interval>& intervals) 
    {
        if (intervals.empty()) 
        {
            return 0;
        }

        vector<int> starts, ends;
        for (const auto& it : intervals) 
        {
            starts.push_back(it.start);
            ends.push_back(it.end);
        }

        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());

        int rooms = 0;
        int endptr = 0;

        for (int startptr = 0; startptr < intervals.size(); startptr++) 
        {
            if (starts[startptr] < ends[endptr]) 
            {
                rooms++;
            } 
            
            else 
            {
                 endptr++;
            }
        }

        return rooms;
    }
};
