#include "Tester_Catch.h"

#include "mock_checkbuttonpressed.h"


TEST_CASE( "check button pressed SPACE", "[checkButtonPressed]" ) {

CheckButtonPressed pressTest;

keybd_event(0x20, 0, 0, 0);
keybd_event(0x20, 0, KEYEVENTF_KEYUP, 0);
pressTest.checkStatusOfButtonPressed();

CHECK(pressTest.getStatusOfIncrementLoop() == true);

keybd_event(0x20, 0, 0, 0);
keybd_event(0x20, 0, KEYEVENTF_KEYUP, 0);
pressTest.checkStatusOfButtonPressed();

CHECK(pressTest.getStatusOfIncrementLoop() == false);
}

TEST_CASE( "check button pressed ESC OFF", "[checkButtonPressed]" ) {

Mock_checkbuttonpressed pressTest;

CHECK(pressTest.exit == false);

}

TEST_CASE( "check button pressed ESC ON", "[checkButtonPressed]" ) {

Mock_checkbuttonpressed pressTest;

keybd_event(0x1b, 0, 0, 0);
keybd_event(0x1b, 0, KEYEVENTF_KEYUP, 0);
pressTest.checkStatusOfButtonPressed();

CHECK(pressTest.exit == true);

}
