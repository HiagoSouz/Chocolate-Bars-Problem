#include <iostream>
#include <vector>

using namespace std;

int pickBars(vector<int> bars){
    
    int bars_number = bars.size(); //vector size
    int first_basket, second_basket, count;
    int max_bars = 0; //var to final result
    
    for(int i=0; i<bars_number; i++){
        count = 0;
        second_basket = -1; //invalid value indicating a free basket
        first_basket = bars[i]; 
        
        for(int j=0;j<bars_number;j++){ //loop throughout the vector
            if(j>=i) //used to not check previous values
            {
                if(first_basket!=bars[j] && second_basket==-1) // second type of bar
                     second_basket = bars[j];
                
                if(first_basket!=bars[j] && second_basket!=bars[j]) //more than 2 types of bars
                    break;
                
                count++;
            }
        }
        if(count>max_bars) //brute force check
            max_bars=count;
    }
    return max_bars; //final result
}

int main(){
  
    vector<int> bars = {1,2,2,2,2,0,1};
    cout << pickBars(bars);
    return 0;
  
}
