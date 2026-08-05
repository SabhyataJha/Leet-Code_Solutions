class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_altitude = 0;
        int current_altitude = 0;

        for (int i = 0; i < gain.size(); i++) {
            current_altitude += gain[i]; // Nayi height calculate ki
            max_altitude = max(max_altitude, current_altitude); // Sabse bada track kiya
        }

        return max_altitude;
    }
};