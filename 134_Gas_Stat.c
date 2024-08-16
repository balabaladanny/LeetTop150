int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {
    int cost_res = 0;
    for(int i = 0; i < gasSize; i++){
        cost_res += gas[i] - cost[i];
    }
    if(cost_res < 0) return -1;
    else {
        int start = 0;
        int tank = 0;
        for(int i = 0; i < gasSize; i++) {
            tank += gas[i] - cost[i];
            if(tank < 0) {
                start = i + 1;
                tank = 0;
            }
        }
        return start;
    }
}