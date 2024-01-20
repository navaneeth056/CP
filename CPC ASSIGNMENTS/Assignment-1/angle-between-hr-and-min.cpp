// Given two numbers, hour and minutes, return the smaller angle (in degrees) formed between the hour and the minute hand.

// Answers within 10-5 of the actual value will be accepted as correct.

#include<bits/stdc++.h>
using namespace std;

//Algo
//hour stick moves 0.5 degree for 1 min
//hour stick moves 30 degree for 1 hour
//minute stick moves 6 degree for 1 min

int main(){
    int hour,minutes;
    cin>>hour;
    cin>>minutes;
        float hrmin =0.5;
        int hrhr = 30;
        int minmin = 6;
        int minhr = 30;
        if(hour == 12){
            hour = 0;
        }
        double angle = abs( ((hour*hrhr)+(minutes*hrmin)) - (minutes*minmin) );
        if(angle>180){
            angle = 360-angle;
        } 
        cout<<angle;
}
