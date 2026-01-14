class Solution {
public:
    struct Event {
        long long y, x1, x2;
        int type;
        bool operator<(const Event& e) const {
            return y < e.y;
        }
    };

    double separateSquares(vector<vector<int>>& squares) {
        vector<Event> events;

        for (auto &s : squares) {
            long long x1 = s[0], y1 = s[1], l = s[2];
            long long x2 = x1 + l, y2 = y1 + l;
            events.push_back({y1, x1, x2, +1});
            events.push_back({y2, x1, x2, -1});
        }

        sort(events.begin(), events.end());

        multiset<pair<long long,long long>> active;
        vector<tuple<long long,long long,long double,long double>> segs;

        long long prevY = events[0].y;
        long double area = 0;

        for (int i = 0; i < events.size(); ) {
            long long curY = events[i].y;
            long long dy = curY - prevY;

            if (dy > 0 && !active.empty()) {
                vector<pair<long long,long long>> xs(active.begin(), active.end());
                sort(xs.begin(), xs.end());

                long long width = 0;
                long long l = xs[0].first, r = xs[0].second;
                for (int j = 1; j < xs.size(); j++) {
                    if (xs[j].first > r) {
                        width += r - l;
                        l = xs[j].first;
                        r = xs[j].second;
                    } else {
                        r = max(r, xs[j].second);
                    }
                }
                width += r - l;

                long double sliceArea = (long double)width * dy;
                segs.push_back({prevY, curY, width, area});
                area += sliceArea;
            }

            while (i < events.size() && events[i].y == curY) {
                if (events[i].type == 1)
                    active.insert({events[i].x1, events[i].x2});
                else
                    active.erase(active.find({events[i].x1, events[i].x2}));
                i++;
            }
            prevY = curY;
        }

        long double target = area / 2;

        for (auto &[y1, y2, w, pref] : segs) {
            long double sliceArea = (long double)w * (y2 - y1);
            if (pref + sliceArea >= target) {
                return (double)(y1 + (target - pref) / w);
            }
        }
        return 0.0;
    }
};
