class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();

        vector<pair<int,int>> cars;

        // combine position and speed
        for(int i = 0; i < n; i++) {

            cars.push_back({position[i], speed[i]});
        }

        // sort by position
        sort(cars.begin(), cars.end());

        // store times
        vector<double> time(n);

        for(int i = 0; i < n; i++) {

            time[i] =
            (double)(target - cars[i].first)
            / cars[i].second;
        }

        int fleets = 0;

        vector<bool> merged(n, false);

        // traverse from right
        for(int i = n - 1; i >= 0; i--) {

            if(merged[i])
                continue;

            fleets++;

            // check left cars
            for(int j = i - 1; j >= 0; j--) {

                if(time[j] <= time[i]) {

                    merged[j] = true;
                }
            }
        }
        return fleets;
    }
};