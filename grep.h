#define MaxLineLen 1000


// Pat :- Pattern


// represents a node in a linked list used to store pattern numbers
typedef struct PatNode {
    int patNUm;
    struct PatNode *next;
}PatNode;

typedef PatNode *Patptr;


typedef struct Node{
    char line[MaxLineLen]; // Stores the full line in which we found pattern
    int lineNum; //Stores the number of above line appearing in txt file
    PatNode *PatHead; // Point to start of pattern found in above line
    PatNode *PatTail; // Point to end of pattern found  in above line
    struct Node *next; // Point to next line in which we found pattern
}Node;

typedef Node * Nodeptr;

// DLL Functions

void init_ll(Nodeptr l);
Nodeptr appendAtTail_ll(Nodeptr tail, char *line, int lineNum, int patNum);
Nodeptr removeFromHead_ll(Nodeptr head, char *line, int *lineNum, Patptr *patNum);
void print_ll(Nodeptr head);
void delete_ll(Nodeptr head);


//Grep Command Functions
void print_usage();
void printLines(Node *head);
// strcicmp: Case-insensitive string comparison function.
int strcicmp(char const *a, char const *b);
int isFile(char* filename);
void d_grep(char *filename, char *pattern);
void longest_line_pattern(char *filename, char *pattern);
void c_grep(char *filename, char *pattern);
void h_grep(char *filename, char *pattern);
void v_grep(char *filename, char *pattern);
void i_grep(char *filename, char *pattern);
int l_grep(char *filename, char *pattern);
void w_grep(char *filename, char *pattern);
void o_grep(char *filename, char *pattern);
void n_grep(char *filename, char *pattern);
void x_grep(char *filename, char *pattern);