#include <iostream>
using namespace std;

int main (){
    int choice;
    char types, areas;
    
    cout << "Choose Guidelines Method: " << endl;
    cout << "1. Personality Assessment" << endl;
    cout << "2. Skill Assessment" << endl;
    cout << "Enter a Number: ";
    cin >> choice;
    
    switch (choice){
        case 1:
            cout << "Choose your personality type: " << endl;
            cout << "A. Artistic" << endl;
            cout << "B. Scientific" << endl;
            cout << "C. Social" << endl;
            cout << "Enter a Letter: " << endl;
            cin >> types;

            // switch (types){
            //     case 'A':
            //     case 'a':
            //         cout << "A. Artistic" << endl;
            //         break;
                    
            //     case 'B':
            //     case 'b':
            //         cout << "B. Scientific" << endl;
            //         break;
                    
            //     case 'C':
            //     case 'c':
            //         cout << "C. Social" << endl;
            //         break;
                    
            //     default:
            //         cout << "INVALID!" << endl;
            // }

            // Code nako yan
            while(types != 'A' && types != 'a' && types != 'B' && types != 'b' && types != 'C' && types != 'c') {
                cout << "INVALID INPUT PLEASE TRY AGAIN!" << '\n';
                cin >> types;
            }

            if(types == 'A' || types == 'a') {
                cout << "A. Artistic" << endl;
            }

            if(types == 'B' || types == 'b') {
                cout << "B. Scientific" << endl;
            }

            if(types == 'C' || types == 'c') {
                cout << "C. Social" << endl;
            }
        
            break;
        case 2:
            cout << "Choose your Proficiency Areas: " << endl;
            cout << "D. Math" << endl;
            cout << "E. Communication" << endl;
            cout << "F. Problem Solving" << endl;
            cout << "Enter a Letter: " << endl;
            cin >> areas; 
            switch (areas){
                case 'D':
                case 'd':
                    cout << "D. Math" << endl;
                    break;
                    
                case 'E':
                case 'e':
                    cout << "E. Communication" << endl;
                    break;
                    
                case 'F':
                case 'f':
                    cout << "F. Problem Solving" << endl;
                    break;
                    
                default:
                    cout << "INVALID!" << endl;
            }
            break;
            
        default:
            cout << "INVALID CHOICE!" << endl;
    }
    
    return 0;
}