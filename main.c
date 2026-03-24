int main() {
    char buf[50];
    gets(buf); // Trigger 1: Buffer Overflow
    char* miner = "stratum+tcp://pool.mine.org"; // Trigger 2: Payload Anomaly
    return 0;
}
