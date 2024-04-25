#include<bits/stdc++.h>


using namespace std;

class Solution {
    
public:
    int pagecount(int number_of_pages,int pages) {
        //we can open the book from either from the front or back   
        //we need to make sure that we are going to a minimum side
        //each page turn consists of 2 pages

        //first we need to make sure that p is either near to front or rear

        //4
        //4/2 = 2
        // 6/2 = 3 - 2 = 1
        int front = floor(pages / 2);
        int rear = floor((no_of_pages / 2 )  - front);

        //now i just need to print the min value

        if(front  < rear) {
            return front;
        }
        else {
            return rear;
        }

    }
};
