// Permuting Two Arrays

// There are two -element arrays of integers,
// a = [1,0] b = [0,2] 
// 
// 1+0>=1 , 0+2>=yes
//


int permutate(int k,vector<int>a,vector<int>b) {
	
	sort(a.begin(),a.end());
	sort(b.rbegin(),b.rend());
	
	for(int i=0;i<a.size();i++) {	
		if(a[j] + a[j+i] < k) {	
			return "No";
	}	
	}
	return "YES";
}

