class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        vector<int> a;

        for (int i = 0; i < operations.size(); i++) {

            if (operations[i] == "+") {
                int x = a[a.size() - 1];
                int y = a[a.size() - 2];
                a.push_back(x + y);
            }
            else if (operations[i] == "D") {
                a.push_back(2 * a.back());
            }
            else if (operations[i] == "C") {
                a.pop_back();
            }
            else {
                a.push_back(stoi(operations[i]));
            }
        }

        for (int x : a) {
            sum += x;
        }

        return sum;
    }
};
