#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student {
private:
    int age;
    string first_name;
    string last_name;
    int standard;
public:
    //these are all get
    int get_age() {
        return age;
    }
        void set_age(int n) {
            age = n;
    }
    string get_first_name() {
        return first_name;
    }
    string get_last_name() {
        return last_name;
    }
    int get_standard() {
        return standard;
    }
    
    //now we need to implement set
    

    string set_first_name(string first) {
        first_name = first;
    }
    string set_last_name(string last) {
        last_name = last;
    }
    
    void set_standard(int s) {
        standard = s;
    }
    
    void to_string() {
        //now we need to print
        cout << age;
        cout << ",";
        cout << first_name;
        cout << ",";
        cout << last_name;
        cout << ",";
        cout << standard;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
