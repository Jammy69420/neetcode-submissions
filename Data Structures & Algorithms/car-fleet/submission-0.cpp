class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;

        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }

        // Sort by position
        sort(cars.begin(), cars.end());

        stack<double> carStack;

        for (int i = cars.size() - 1; i >= 0; i--) {
            double time = (double)(target - cars[i].first) / cars[i].second;

            if (carStack.empty() || time > carStack.top()) {
                carStack.push(time);
            }
        }

        return carStack.size();
    }
};