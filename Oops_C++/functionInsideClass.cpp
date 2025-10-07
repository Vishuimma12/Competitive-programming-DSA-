#include <iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int runs;
    int matches;
    int outs;

    // 🔹 Function to input details
    void setDetails(string n, int r, int m, int o) {
        name = n;
        runs = r;
        matches = m;
        outs = o;
    }

    // 🔹 Function to calculate batting average
    float calculateAverage() {
        if (outs == 0) {
            return 0.0; // avoid division by zero
        }
        return static_cast<float>(runs) / outs;
    }

    // 🔹 Function to display cricketer details
    void display() {
        cout << "------------------------------\n";
        cout << "Cricketer Details\n";
        cout << "------------------------------\n";
        cout << "Name     : " << name << endl;
        cout << "Runs     : " << runs << endl;
        cout << "Matches  : " << matches << endl;
        cout << "Outs     : " << outs << endl;
        cout << "Average  : " << calculateAverage() << endl;
        cout << "------------------------------\n";
    }
};

int main() {
    Cricketer c1;

    // 🔹 Using function to set details
    c1.setDetails("Rohit Sharma", 25000, 450, 380);

    // 🔹 Display all info (calls calculateAverage internally)
    c1.display();

    // 🔹 You can also call average function directly
    cout << "Batting Average: " << c1.calculateAverage() << endl;

    return 0;
}
