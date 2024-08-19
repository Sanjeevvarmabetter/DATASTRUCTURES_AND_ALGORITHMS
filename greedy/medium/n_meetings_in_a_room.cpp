//
//Problem Statement: There is one meeting room in a firm. You are given two arrays, start and end each of size N.For an index ‘i’, start[i] denotes the starting time of the ith meeting while end[i]  will denote the ending time of the ith meeting. Find the maximum number of meetings that can be accommodated if only one meeting can happen in the room at a  particular time. Print the order in which these meetings will be performed.


/*
 *
 *
 * we just need to check the end time of the each meeting 
 *
 * make sure that the end time and start time is greater than previous one
 *
 * start with the small meeting
 *
 * check out notes 
 *
 *
 */

// use a struct for storing
//
//


struct meeting {
	int start;
	int end;
	int position;
};



