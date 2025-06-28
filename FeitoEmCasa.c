#include <stdlib.h>
#include <string.h>

struct Fila {
    char c;
    int MAX;
    struct Fila * ini;
    struct Fila * ultimo;
    struct Fila * prox;
} fila;

int ExisteDoisCharIguais( struct Fila * p, struct Fila * new ) {

    struct Fila * k;
    struct Fila * l;
    k = p->ini;
    l = p->ini->prox;

    if ( k->c == new->c && l->c == new->c )
        return 1;

    while ( k->c == l->c || l->prox != NULL) {
        k = k->prox;
        l = l->prox;
    }

    if ( l->prox == NULL)
        return 0;
    else return 1;
}

int Verifica(struct Fila * p, struct Fila * new) {
    struct Fila * k;
    struct Fila * l;
    struct Fila * j;
    struct Fila * h;
    int flag;
    h = p->ini;
    j = p->ini;
    k = p->ini;
    l = p->ini->prox;

    if (p->ultimo->c != new->c) {
        p->ultimo->prox = new;
        new->prox = NULL;
        p->MAX++;
        return 1;
    }

    flag = ExisteDoisCharIguais(p, new);
        if (flag) {
           while (k->c != l->c) {
            k = k->prox;
            l = l->prox;
            }
        
            if (j->prox == k)
                return 0;

            j = j->prox;

            while (j->prox != k) {
                j = j->prox;
            }

            while (h->prox != j) {
                h = h->prox;
            }

            new->prox = j;
            h->prox = new;
            p->MAX++;
            return 1;
        }
    return 0;
}

struct Fila * IniciaFila () {
    struct Fila * p = (struct Fila *) malloc(sizeof(struct Fila));
    p->ini = NULL;
    p->ultimo = NULL;
    return p;
}

int InsereChar (char x, int * flag, struct Fila * p) {
    struct Fila * new = (struct Fila *)malloc(sizeof(struct Fila));
    new->c = x;
    int op;

    if (p->ini == NULL || p->ini->prox == NULL) {
        p->ini = new;
        p->ultimo = new;
        new->prox = NULL;
        p->MAX++;
        return 1;
    }

    *flag = Verifica(p, new);

        if (*flag) {
            return 1;

        } else {
            return 0;
        }
}

char* longestDiverseString(int a, int b, int c) {
    struct Fila * p;
    struct Fila * q;
    int flag;
    int qtde = 0;
    flag = 1;
    fila.MAX = 0;

    if (a == 0 && b == 0 && c == 0) {
        return "";
    }

    p = IniciaFila();

    for (; flag ; ) {
        if (a && a > b && a > c) {
            flag = InsereChar('a', &flag, p);
            if (!flag) {
                if (b > c) {
                    flag = InsereChar('b', &flag, p);
                } else {
                    flag = InsereChar('c', &flag, p);
                }
            }
        } else {
            if (b && b > a && b > c) {
                flag = InsereChar('b', &flag, p);
                if (!flag) {
                    if (a > c) {
                        flag = InsereChar('a', &flag, p);
                    } else {
                        flag = InsereChar('c', &flag, p);
                    }
                }
            } else {
                if (c && c > a && c > b) {
                    flag = InsereChar('c', &flag, p);
                    if (!flag) {
                        if (a > b) {
                            flag = InsereChar('a', &flag, p);
                        } else {
                            flag = InsereChar('b', &flag, p);
                        }
                    }
                } else {
                    if (a > 0 && a == b) {
                        flag = InsereChar('a', &flag, p);
                    }
                    if (a > 0 && a == c) {
                        flag = InsereChar('a', &flag, p);
                    }
                    if (b > 0 && b == c) {
                        flag = InsereChar('b', &flag, p);
                    }
                }
            }
        }
    }

    qtde = p->MAX;
    char * s = malloc((p->MAX) + 1);
    q = p->ini;
    do {
        s[qtde] = q->c;
        qtde++;
        if (q->prox != NULL)
            q = q->prox;
    } while (q->prox != NULL);

    return s;
}
