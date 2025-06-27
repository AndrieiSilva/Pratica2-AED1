struct Fila {
    int MAX;
    int * ini;
    int * ultimo;
} fila;

struct Dados {
    char c;
    int * prox;
} dados;

char* longestDiverseString(int a, int b, int c) {

    int * flag;
    *flag = 1;
    Fila.MAX = 0;

    if (a == 0 && b == 0 && c == 0) {
        return "";
    }

    for (; *flag ; ) {
        if (a && a > b && a > c) {
            // insere a
            //flag = InsereChar();
            // se falhou
            if (!flag) {
                if (b > c) {
                    // insere b
                    //flag = InsereChar();
                    // se falhou
                } else {
                    // insere c
                    //flag = InsereChar();
                }
            }
        } else {
            if (b && b > a && b > c) {
                // insere b
                //flag = InsereChar();
                // se falhou
                if (!flag) {
                    if (a > c) {
                        // insere a
                        //flag = InsereChar();
                        // se falhou
                    } else {
                        // insere c
                        //flag = InsereChar();
                    }
                }
            } else {
                if (c && c > a && c > b) {
                    // insere c
                    //flag = InsereChar();
                    // se falhou
                    if (!flag) {
                        if (a > b) {
                            // insere a
                            //flag = InsereChar();
                            // se falhou
                        } else {
                            //insere b
                            //flag = InsereChar();
                        }
                    }
                } else {
                    if (a > 0 && a == b) {
                        // insere a
                        //flag = InsereChar();
                    }
                    if (a > 0 && a == c) {
                        // insere a
                        //flag = InsereChar();
                    }
                    if (b > 0 && b == c) {
                        // insere b
                        //flag = InsereChar();
                    }
                }
            }
        }
    }

    // string de TAM elementos
    // coloca TAM elementos na string
    //return string;
}

int IniciaFila () {
    struct Fila * p;
    p = (fila *) malloc(sizeof(fila));
    p->ini = NULL;
    p->ultimo = NULL;
}

int Inserechar (char x, int * flag, struct fila * p) {
    struct Dados * new;
    new = (dados *) malloc(sizeof(dados));
    new->c = x;

    // se for o primeiro elemento
    if (p->ini == NULL) {
        p->ini = new;
        p->ultimo = new;
        new->prox = NULL;
        p->MAX = 1;
        return 1;
    }

    // tem espaço ?
        // Insere o char
        *flag = 1;
        return 1;
    // se não
        *flag = 0;
        return 0;
}
