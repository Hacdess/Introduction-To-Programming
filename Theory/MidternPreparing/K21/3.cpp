#include <iostream> 
#include <string>

using namespace std;

struct Time {
    int h;
    int m;
};

struct Ticket {
    string movie;
    string cinema;
    Time time;
    int foodPrice;
    float coef;
};

void InputTickets(Ticket tickets[], int n) {
    for (int i = 0; i <= n; ++i) {
        cout << "Input movie's name: ";
        getline(cin, tickets[i].movie);

        cout << "Input cinema's name: ";
        getline(cin, tickets[i].cinema);

        cout << "Input time: ";
        cin >> tickets[i].time.h >> tickets[i].time.m;

        cout << "Input food's price: ";
        cin >> tickets[i].foodPrice;

        cout << "Input coef: ";
        cin >> tickets[i].coef;
    }
}

double computeRevenue(Ticket tickets[], int n, Time time) {
    double revenue = 0;

    for (int i = 0; i < n; ++i) {
        if (time.h == tickets[i].time.h && time.m == tickets[i].time.m) {
            revenue += (tickets[i].coef * 80000 + tickets[i].foodPrice);
            if (tickets[i].coef == 1.5)
                revenue *= 0.9;
        }
    }

    return revenue;
}

int main() {


    return 0;
}