#include <iostream>
#include <vector>
#include<unordered_map>

using namespace std;

int pickBars(vector<int>& bars) {
        
        int bars_number = bars.size(); // bars vector size
        int i=0, j=0; // aux variables
        int baskets = 2; //number of baskets
        int max_bars = 0; //max number of bar
        
        unordered_map<int, int> bars_map; //hash map for optimization
        
        for(j=0; j<bars_number; j++){ //loop throughout the vector
            
            bars_map[bars[j]]++;
            
            if(bars_map.size() <= baskets){
                max_bars = max(max_bars, j-i+1); //comparison and assignment to the max result 
            }
            else if(bars_map.size() > baskets){
                while(bars_map.size() > baskets){
            
                    bars_map[bars[i]]--;
            
                    if(bars_map[bars[i]] == 0){
                        bars_map.erase(bars[i]); //remove
                    } 
                    i++;
                }
            }
        }
        
        return max_bars; //final result
};


int main(){
  
    vector<int> bars = {1,2,3,2,2};
    cout << pickBars(bars);
    return 0;
  
}
