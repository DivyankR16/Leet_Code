class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=cost.size();
        int totalgas=0;
        int totalcost=0;
        for(int i=0;i<n;i++){
            totalgas+=gas[i];
            totalcost+=cost[i];
        }
        if(totalgas<totalcost){
            return -1;
        }
        int st_pt=0;
        int net_val=0;
        for(int i=0;i<n;i++){
           net_val+=gas[i]-cost[i];
           if(net_val<0){
               st_pt=i+1;
               net_val=0;
           }
        }
        return st_pt;
    }
};