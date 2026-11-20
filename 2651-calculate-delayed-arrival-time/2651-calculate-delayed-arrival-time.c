int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int out;
    int add = arrivalTime + delayedTime;

    if (add >= 24) {
        out = add - 24;
    } else {
        out = add;
    }

    return out;
}