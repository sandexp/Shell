#include <vector>

class Context {
    public:
        ~Context();
        Context(char *cmd);
    
    private:
        char *cmd;
        vector<char*> args0;
        vector<char*> args1;
        vector<char*> args1;
    
    public:
        bool validate();
}