// https://leetcode.com/problems/furthest-building-you-can-reach/description/?envType=daily-question&envId=2024-02-17
class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        
        // Priority Queue for storing the bricks used in each step in decreasing order (Max at top)
        priority_queue<int> p;
    
        int i=0, diff =0; 
        for(i=0; i<h.size()-1; i++){ 
            
            diff = h[i+1]-h[i];
            
            if(diff <= 0){
                continue;
            }

            b -= diff; 
            p.push(diff); 
       
            if(b < 0){
                b += p.top(); 
                p.pop(); 
                l--;
            }

          
            if(l < 0) break;
        }
        
        
        return i;
    }
};

