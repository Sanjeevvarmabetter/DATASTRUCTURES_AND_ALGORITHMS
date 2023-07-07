#include<bits/stdc++.h>

//documantation
//declaration of strings
using namespace std;

void sample() {
	string p = "this is a sample string";
	cout << p << endl;
}

void concatinate_using_operator() {
	//this is by using addition operator
	string s = "sample string";
	string l = " is good";
	cout << s+l << endl;
	
}

void manual_concat_logic() {
	//algo
	/*Get the two Strings to be concatenated
	Declare new Strings to store the concatenated String
	Insert the first string into the new string
	Insert the second string in the new string
	Print the concatenated string
	*/
	char a[100] = "hello", b[100] = "world";
	char c[100];
	int i=0,j=0;
	
	while(a[i] != '\0') {
		c[j] = a[i];
		i++;
		j++;
	//string a is added
	}
	//note that we need to reset the i = 0
	i = 0;
	while(b[i] != '\0') {
		c[j] = b[i];
		i++;
		j++;
		//string b is added
	}
	c[j] = '\0';
	
	cout << c << endl;
	
}

int main() {
	sample();
	concatinate_using_operator();
	manual_concat_logic();
}

