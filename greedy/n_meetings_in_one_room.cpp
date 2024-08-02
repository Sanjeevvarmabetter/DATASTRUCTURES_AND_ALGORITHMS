// we have a room we need to complete as meetings in the room
//
// now for a general approch i generally take the shortesh meets
//
//
//

//sort the given meetings with respect to the meeting time


start
1 0 3 8 5 8
end
2 6 4 9 7 9
------------
1 2 3 4 5 6


// now we need to put in the ds like
// (start,end,pos)

/*

|(1,2,1) |
|(3,4,3) |    1 3 5 4             
|(0,6,2) |
|(5,7,5) |
|(8,9,4) |
|(8,9,6) |
|_______ |



*/


//how to load the given data 
//using a struct?
//
//


struct meet {
	int start;
	int end;
	int pos;
};



void max_meetings(int s[],int e[],int n) {
	

	struct meeting meet[n];

	for(int i=0;i<n;i++) {
		meet[i].start = s[i],meet[i].end = e[i],meet[i].pos = pos[i];
	}


	sort(meet, meet+n);


	// now we need to check the meet times
	// the start of the meet should be greater than the end time of the previous
	//
	//

