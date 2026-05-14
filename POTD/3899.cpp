class Solution {
public:

    int isTriangle(vector<int>& sides) {
        if(sides[0] + sides[1] <= sides[2] 
        || sides[0] + sides[2] <= sides[1] 
        || sides[1] + sides[2] <= sides[0] ) {
            return false;
        }
        return true;
    }

    vector<double> internalAngles(vector<int>& sides) {
        if(!isTriangle(sides)) {
            return {};
        }
        double pi = std::acos(-1.0);
        double side0_inRadians = acos((sides[1]*sides[1]*1.0 + sides[2]*sides[2]*1.0 - sides[0]*sides[0]*1.0) / (2 * sides[1] * sides[2] * 1.0));
        double side1_inRadians = acos((sides[0]*sides[0] * 1.0 + sides[2]*sides[2] * 1.0 - sides[1]*sides[1] * 1.0) / (2 * sides[0] * sides[2] * 1.0));
        double side2_inRadians = acos((sides[1]*sides[1] * 1.0 + sides[0]*sides[0] * 1.0 - sides[2]*sides[2] * 1.0) / (2 * sides[1] * sides[0] * 1.0));
        double side0_inDegrees = side0_inRadians * 180.0 / pi;
        double side1_inDegrees = side1_inRadians * 180.0 / pi;
        double side2_inDegrees = side2_inRadians * 180.0 / pi;
        vector<double> ans = {side0_inDegrees,side1_inDegrees,side2_inDegrees};
        sort(ans.begin(),ans.end());
        return ans;
    }
};