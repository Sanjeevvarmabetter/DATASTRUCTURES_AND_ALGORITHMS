/*
 *
 *
 * 120/30 *20
 *
 *
 *
 * if an item is not fitting in the knapsack then we need to take the fraction of that item 
 *
 *
 *
 *  sort the array reverse
 *
 *  if current weight is less than W
 *
 *       then add currentWeight = curent weight
 *
 * else 
 * 	ramain = W-current weight
 * 	finalvalue+= 120/30 *20  ->  ((ar[i].valie/(double) weight)) * remain
 	break

return final



based on the comp 

	bool static comp(Item a,Item b) 
		
	doublr r1 = a.valie/a.value
	double r2 = b.value/b.value
	return r1>r2
*/


double fractional_knapsack(int W,Item arr[],int n) {
	
	// sort deecending
	//
	sort(arr,arr+n,comp);


	int currentWeight = 0;
	double finalvalue =0.0;

	for(int i=0;i<n;i++) {
		if(currentWeight + arr[i].weight <= W) {
			currentWeight += arr[i].weight;
			finalvalue += arr[i].weight;
		}
		else {
			int remaining = W - currentWeight;
			finalvalue += arr[i].value/(double) arr.weight * remaining;
			break;
		}
	}
	return finalvalue;
}



