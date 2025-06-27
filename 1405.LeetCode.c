char* longestDiverseString(int a, int b, int c) {

    int * flag = 1;

    if (a == 0 && b == 0 && c == 0) {
        return "";
    }

    for (flag) {
        if (a && a > b && a > c) {
            // insere a
            // se falhou
            if (!flag) {
                if (b > c) {
                    // insere b
                    // se falhou
                } else {
                    // insere c
                }
            }
        } else {
            if (b && b > a && b > c) {
                // insere b
                // se falhou
                if (!flag) {
                    if (a > c) {
                        // insere a
                        // se falhou
                    } else {
                        // insere c
                    }
                }
            } else {
                if (c && c > a && c > b) {
                    // insere c
                    // se falhou
                    if (!flag) {
                        if (a > b) {
                            // insere a
                            // se falhou
                        } else {
                            //insere b
                        }
                    }
                }
            } else {
                if (a > 0 && a == b) {
                    // insere a
                }
                if (a > 0 && a == c) {
                    // insere a
                }
                if (b > 0 && b == c) {
                    // insere b
                }
            }
        }
    }

    // string de TAM elementos
    // coloca TAM elementos na string
    return string
}


int Inserechar (int x,int * flag) {
    // tem espaço ?
        // Insere o numero
        *flag = 1;
        return flag;
    // se não
        *flag = 0;
        return flag
}
