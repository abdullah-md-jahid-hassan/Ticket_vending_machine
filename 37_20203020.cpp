#include <bits/stdc++.h>
using namespace std;

int main() {
    int state = 0, tp; // state will track total money received
    cout << "Ready to receive money.\nEnter The Ticket price = ";
    cin >> tp;
    cout << "Please enter 10 to 1000 tk banknotes.\n";
    
    while (state < tp) {
        int tk = 0;
        cin >> tk; // Entered tk
        
        // Check if the entered banknote is valid
        if (tk == 10 || tk == 20 || tk == 50 || tk == 100 || tk == 500 || tk == 1000) {
            state += tk;
            if (state < tp) {
                cout << "\n" << tk << " tk received. Total " << state << " tk received. Need more money. Please enter 10 to 1000 tk banknotes.\n";
            }
        } else {
            cout << "\nThe Banknote isn't valid. Please enter 10 to 1000 tk banknotes.\n";
        }
    }
    
    // After taking enough money
    cout << "\nTotal " << state << " tk received. Your ticket is ready. " << (state - tp) << " tk have been returned.\nHave a safe journey.\n";
    
    return 0;
}