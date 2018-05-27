
char* itob(int n, char s[], int b) {
    int curr = 0;
    if(n == 0) {
        s[0] = '0';
        s[1] = '\0';
        return s;
    }
    while (n != 0) {
        if (n % b < 10) {
            s[curr] = (char)(n % b + '0');
        } else {
            s[curr] = (char)(n % b - 10 + 'a');
        }
        n /= b;
        curr++;
    }
    int middle = curr/2, size = curr;
    s[curr] = '\0';
    while(curr > middle) {
        curr--;
        char t = s[curr];
        s[curr] = s[size - curr - 1];
        s[size - curr - 1] = t;
    }

    return s;
}
