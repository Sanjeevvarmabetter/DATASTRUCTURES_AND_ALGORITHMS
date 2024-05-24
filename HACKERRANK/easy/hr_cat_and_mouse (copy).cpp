#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
    string catandmouse(int cat1,int cat2,int mouse) {

        //if cat1 is closer to mouse then print cat1
        //if cat2 is closer to mouse then print cat2


        //if the distance is similar then the mouse has to move 

        //first we need to calculate the distance 

        int cat1_distance = abs(mouse - cat1);
        int cat2_distance = abs(mouse - cat2);
        // cat1 = 3-1 = 2  , cat2 = 3 - 2 = 1  
        if(cat1_distance < cat1_distance) {
            return "Cat A";
        }
        else if(cat2_distance < cat1_distance ) {
            return "Cat B";
        }
        else if (cat1_distance == cat2_distance) {
            return "Mouse C";
        }
 
    }

};
