class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minuteAngle = 6;
        double hourAngle = 30;
        double angleFrom12ForMinutes = minutes * minuteAngle;
        double angleFrom12ForHours = hour * hourAngle;
        double pushForward = hourAngle * minutes / 60;
        angleFrom12ForHours += pushForward;
        double ans = abs(angleFrom12ForHours - angleFrom12ForMinutes);
        if(ans>180) {
            ans = 360 - ans;
        }
        return ans;
    }
};