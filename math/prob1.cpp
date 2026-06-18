class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ans = 0;

        double minuteangle =   6.0;
        double hourangle = 30.0;

       

        if(hour == 12){
            hour = 0;
        }


        ans =  abs(hourangle*hour  + minutes*0.5 - minutes* minuteangle);

        return ans>180 ? 360-ans: ans;

    }
};





Given two numbers, hour and minutes, return the smaller angle (in degrees) formed between the hour and the minute hand.

Answers within 10-5 of the actual value will be accepted as correct.

 

Example 1:


Input: hour = 12, minutes = 30
Output: 165
Example 2:


Input: hour = 3, minutes = 30
Output: 75
Example 3:


Input: hour = 3, minutes = 15
Output: 7.5
