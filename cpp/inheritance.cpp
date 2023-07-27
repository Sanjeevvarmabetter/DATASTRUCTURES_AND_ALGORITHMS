#include<bits/stdc++.h>
using namespace std;
//the capability to derive properties and char from another
//class is called inheritance

//~ Sub Class: The class that inherits properties from another class is called Subclass or Derived Class. 
//~ Super Class: The class whose properties are inherited by a subclass is called Base Class or Superclass.

class shape {
	public:

	void draw(){
		cout << "drawing a shape " << endl;


}
};


class Circle  : public shape {
	public:
	void drawcircle() {
		cout << "drawing a circle" << endl;
		
	}
};

int main()
{
	Circle circle;
	circle.draw();
	circle.drawcircle();
	return 0;
	

}




class name {
	public:
	int roll;
	string name;
	
	}
