#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double roomArea = 15.0 * 10.0;
    double plankArea = 1.0 * 6.0;
    int planks = ceil(roomArea / plankArea);

    double ceilingArea = 25.0 * 20.0;
    double pintsExact = ceilingArea / 60.0;
    int totalPints = ceil(pintsExact);
    int whitePints = ceil(totalPints * 0.75);
    int blackPints = ceil(totalPints * 0.25);

    double p1Head = 1.7;
    double p2Head = 1.0 + 1.7;
    double p2Feet = 1.0;

    double verticalP1HitsP2 = fabs(p1Head - p2Feet);
    double verticalP2HitsP1 = fabs(p2Head - p1Head);

    double hyp = 3.0;

    double horizontalP1HitsP2 = sqrt(hyp * hyp - verticalP1HitsP2 * verticalP1HitsP2);
    double horizontalP2HitsP1 = sqrt(hyp * hyp - verticalP2HitsP1 * verticalP2HitsP1);

    cout << "1. Planks Needed: " << planks << endl;
    cout << "2. White Pints: " << whitePints << "  Black Pints: " << blackPints << endl;
    cout << "3. P1 Hits P2 Horizontal: " << horizontalP1HitsP2
         << "  P2 Hits P1 Horizontal: " << horizontalP2HitsP1 << endl;

    return 0;
}