#include <iostream>
using namespace std;

int main() {
    int current_hour;
    int current_minute;
    int ring_hour;
    int ring_minute;
    int output_minute;
    while(cin >> current_hour >> current_minute >> ring_hour >> ring_minute){
        if (current_hour == 0 && current_minute == 0 && ring_hour == 0 && ring_minute == 0){
            break;
        }
        else{
            if (current_hour > ring_hour){
                ring_hour = ring_hour + 24;
                if (current_minute > ring_minute){
                    ring_minute = ring_minute + 60;
                    ring_hour = ring_hour - 1;
                }
            }
            else if (current_hour == ring_hour){
                if (current_minute > ring_minute){
                    ring_hour = ring_hour + 24;
                    ring_minute = ring_minute + 60;
                    ring_hour = ring_hour - 1;
                }
            }
            output_minute = 60 * (ring_hour - current_hour) + (ring_minute - current_minute);
            cout << output_minute << endl;
        }
    }
    return 0;
}
