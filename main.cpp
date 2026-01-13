#include <iostream>

using namespace std;

int main()
{
int inches;
cin >> inches;
//define math so code can use these instead of the input
int in_per_foot = 12;
int ft_per_yrd = 3;
int yrd_per_mi = 1760;

  //conversion for inches to mesurements for yard and mile
int in_per_yrd = in_per_foot * ft_per_yrd;
int in_per_mi = in_per_yrd * yrd_per_mi;

  //math for input inches to output in peramiters
int miles = inches / in_per_mi;
inches = inches % in_per_mi;

int yards = inches / in_per_yrd;
inches = inches % in_per_yrd;

int feet = inches / in_per_ft;
inches = inches % in_per_ft;

// output code

cout << miles << "miles" << endl;
cout << yards << "yards" << endl;
cout << feet << "feet" << endl;
cout << inches << "inches" << endl;

return 0; 
}


