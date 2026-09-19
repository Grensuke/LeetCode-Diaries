class Solution {
public:
    bool checkOverlap(int r, int cx, int cy, int x1, int y1, int x2, int y2) {
        int dx,dy;
        if (cx < x1) dx = x1;
        else if (cx > x2) dx = x2;
        else {
            dx=cx;
        }
        if (cy < y1) dy = y1;
        else if (cy > y2) dy = y2;
        else {
            dy = cy;
        }
        cout << dx << " " << dy << endl;
        return (dx-cx)*(dx-cx) + (dy-cy)*(dy-cy) <= r*r;
    }
};