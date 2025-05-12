#include <iostream>
#include <string>
using namespace std;

// Bazna klasa za logovanje
class Logger {
protected:
    string prefix = "[LOG] "; // vidi se u izvedenim klasama, ali NE i spolja

    // Samo izvedene klase treba da definišu ovaj metod
    virtual void write(const string& message) = 0;

public:
    void log(const string& msg) {
        write(prefix + msg);
    }

    virtual ~Logger() {}
};

// Logger koji piše u konzolu
class ConsoleLogger : public Logger {
protected:
    void write(const string& message) override {
        cout << message << endl;
    }
};

// Logger koji dodaje poseban naziv modula
class ModuleLogger : public ConsoleLogger {
    string moduleName;
public:
    ModuleLogger(const string& mod) : moduleName(mod) {}

    void logModuleMessage(const string& msg) {
        log("[" + moduleName + "] " + msg); // koristi `log` iz bazne klase
    }
};

int main() {
    ModuleLogger logger("Network");
    logger.logModuleMessage("Connection lost");  // OK
    // logger.write("test"); // ❌ NE MOŽE – write je protected
    // logger.prefix = ">>"; // ❌ NE MOŽE – prefix je protected
    return 0;
}
