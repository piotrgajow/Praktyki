#include "Tester_Catch.h"

#include "../GameOfLife/checkbuttonpressed.h"


TEST_CASE( "Check if SPACE changes statusOfIncrementLoop", "[checkButtonPressed]" ) {

CheckButtonPressed pressTest;

keybd_event(0x20, 0, 0, 0);
pressTest.checkStatusOfButtonPressed();
keybd_event(0x20, 0, KEYEVENTF_KEYUP, 0);

CHECK(pressTest.getStatusOfIncrementLoop());

keybd_event(0x20, 0, 0, 0);
pressTest.checkStatusOfButtonPressed();
keybd_event(0x20, 0, KEYEVENTF_KEYUP, 0);

CHECK(!pressTest.getStatusOfIncrementLoop());
}
