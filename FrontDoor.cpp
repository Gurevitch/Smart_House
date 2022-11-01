#include "FrontDoor.h"
#include <thread>

void FrontDoor::GetDoorStatus(bool DoorStatus)
{
    if (!DoorStatus)
        cout << "the door is locked" << endl;
    else
        cout << "the door is open" << endl;
}

void FrontDoor::RestartDoorCode()
{
    int counter = 3;
    int CodeFromUser;
    while (counter > 0)
    {
        cout << "please enter the code for the door:" << endl;
        cin >> CodeFromUser;
        if (CodeForDoor == CodeFromUser)
        {
            cout << "Code was correct, please choose your new code:" << endl;;
            cin >> CodeForDoor;
            cout << "alright, your new code is :" << CodeForDoor << "keep it for yourself or people you trust" << endl;
            break;
        }
        cout << "the code you have entered was not correct, lets try again" <<
            endl << "you got " << counter << "tries and after this it will be locked for 10 min" << endl;
            
    counter--;
        if (counter == 0 && CodeForDoor != CodeFromUser)
        {
            cout << "sorry this was your last guess for now, you will be locked for 5 minutes"<< endl;

            // add time delay of 5 minutes
            std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::minutes(5));
        }
    }

}
