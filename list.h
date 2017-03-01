typedef struct element element;
struct element
{
    char* var;
    int val;
    struct element *nxt;
};

typedef element* llist;

llist addVar(llist liste, int valeur, char* variable);
llist getValue(llist liste, char* variable);
