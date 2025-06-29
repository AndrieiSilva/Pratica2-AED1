void InsereChar (char * s, int i, char x, int * count, char * ultimo1, char * ultimo2) {
    s[i] = x;
    (*count)--;
    *ultimo2 = *ultimo1;
    *ultimo1 = x;
}

char* longestDiverseString(int a, int b, int c) {
    static char s [301];
    char ultimo1 = ' ', ultimo2 = ' ';
    int i;

    for (i = 0; i < 300; i++) {
        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        int max = fmax(a, fmax(b, c)), total = a + b + c;
    
        if (max == a) {
            if (ultimo1 != 'a' || ultimo2 != 'a')
                InsereChar (s, i, 'a', &a, &ultimo1, &ultimo2);
            else if (max == total)
                break;
            else 
                InsereChar (s, i, b > c ? 'b' : 'c', b > c ? &b : &c, &ultimo1, &ultimo2);
        } else if (max == b) {
            if (ultimo1 != 'b' || ultimo2 != 'b')
                InsereChar (s, i, 'b', &b, &ultimo1, &ultimo2);
            else if (max == total)
                break;
            else 
                InsereChar (s, i, a > c ? 'a' : 'c', a > c ? &a : &c, &ultimo1, &ultimo2);
        } else if (max == c) {
            if (ultimo1 != 'c' || ultimo2 != 'c')
                InsereChar (s, i, 'c', &c, &ultimo1, &ultimo2);
            else if (max == total)
                break;
            else 
                InsereChar (s, i, a > b ? 'a' : 'b', a > b ? &a : &b, &ultimo1, &ultimo2);
        }
    }
    
    s[i] = '\0';
    return s;
}
