typedef short dado;

typedef struct{
    unsigned size;
    dado *data;
} Vector;

short initVector(Vector *V, unsigned size);

void freeVector(Vector *V);

void printVector(Vector V);

void scanVector(Vector *V);