#include<bits/stdc++.h>
using namespace std;

#ifndef MYADD_H
#define MYADD_H

int addF(int a, int b);
class student {
    private:
        int age;
        string name;
        int marks[5];
    public:
        void setAge(int a) {
            if (a <= 0) {
                throw std::invalid_argument("Age must be positive.");
            }
            age = a;
        }
    
        // void showAge() {
        //     cout << "Age: " << age << endl;
        // }   

        int showAge() {
            return age;
        }
    };
    

#endif

