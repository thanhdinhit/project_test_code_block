#include <iostream>
#include <cstdint>
#include "lib.h"

using namespace std;

int main()
{
    cout << "\n-------test hello word------" << endl;
	funSay();
	cout << "\n-------test toggle_bitmask------" << endl;
	toggle_bitmask();
	cout << "\n-------test Flipping_a_bit------" << endl;
    Flipping_a_bit();
    cout << "\n------- test resetting_a_bit ------" << endl;
    resetting_a_bit();
    cout << "\n-------setting_a_bit------" << endl;
    setting_a_bit();

	return 0;
}
