//
//  main.cpp
//  areaCircle
//
//  Created by Beula Samuel on 27/02/21.
//

#include <iostream>
using namespace std;
#define PI 3.14
int main() {
    float r, area;
    cout << "Enter radius r : \t";
    cin >> r;
    area = PI * r * r;
    cout << "Area of circle = \n" << area ;
    
    
    return 0;
}
