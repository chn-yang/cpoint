typedef struct {
    char *school_name;
} School;

typedef struct {
    char *name;
    School school;
} Student;

typedef struct {
    enum { INT, FLOAT } type;
    union fi {
        int i;
        float f;
    } fi;
} Pi;
