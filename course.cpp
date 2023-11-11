#include <iostream>

int main() {

    char choice;
    char questionChoice;
    int artistic = 0;
    int scientific = 0;
    int social = 0;

    std::cout << "" << std::endl;

    std::cout << "PLEASE CHOOSE GUIDANCE METHOD" << std::endl;
    std::cout << "" << std::endl;

    std::cout << "1 - PERSONALITY ASSESSMENT" << std::endl;
    std::cout << "2 - SKILL ASSESSMENT" << std::endl;
    std::cout << "" << std::endl;
    std::cin >> choice;

    while(choice != '1' && choice != '2') {
        std::cout << "INVALID INPUT PLEASE TRY AGAIN! ";
        std::cin >> choice;
    }

    if(choice == '1') {
        std::cout << "" << std::endl;
        std::cout << "YOU CHOOSE PERSONALITY ASSESSMENT" << std::endl;
        std::cout << "PLEASE ANSWER THIS 9 QUESTIONS" << std::endl;
        std::cout << "" << std::endl;

        std::cout << "Do you enjoy creative activities like painting, drawing, or creative writing?" << std::endl;
        std::cout << "(Y / N) ";
        std::cin >> questionChoice;
        

        while(questionChoice != 'Y' && questionChoice != 'N') {
            std::cout << "INVALID INPUT PLEASE TRY AGAIN! ";
            std::cin >> questionChoice;
        }

        if(questionChoice == 'Y') {
            artistic++;
        }

        std::cout << "" << std::endl;
        std::cout << "Are you passionate about creating and designing visual art, such as paintings, drawings, or sculptures?" << std::endl;
        std::cout << "(Y / N) ";
        std::cin >> questionChoice;

        while(questionChoice != 'Y' && questionChoice != 'N') {
            std::cout << "INVALID INPUT PLEASE TRY AGAIN! ";
            std::cin >> questionChoice;
        }

        if(questionChoice == 'Y') {
            artistic++;
        }

        std::cout << "" << std::endl;
        std::cout << "Do you enjoy expressing yourself through creative arts, such as painting, drawing, writing, or music?" << std::endl;
        std::cout << "(Y / N)";
        std::cin >> questionChoice;

        while(questionChoice != 'Y' && questionChoice != 'N') {
            std::cout << "INVALID INPUT PLEASE TRY AGAIN! ";
            std::cin >> questionChoice;
        }

        if(questionChoice == 'Y') {
            artistic++;
        }

        std::cout << "" << std::endl;
        std::cout << "Are you more interested in understanding the natural world, conducting experiments or exploring scientific concepts?" << std::endl;
        std::cout << "(Y / N)";
        std::cin >> questionChoice;

        while(questionChoice != 'Y' && questionChoice != 'N') {
            std::cout << "INVALID INPUT PLEASE TRY AGAIN! ";
            std::cin >> questionChoice;
        }

        if(questionChoice == 'Y') {
            scientific++;
        }
        
        std::cout << "" << std::endl;
        std::cout << "Are you drawn to logical thinking, analysing data, and understanding natural phenomena?" << std::endl;
        std::cout << "(Y / N)";
        std::cin >> questionChoice;

        while(questionChoice != 'Y' && questionChoice != 'N') {
            std::cout << "INVALID INPUT PLEASE TRY AGAIN! ";
            std::cin >> questionChoice;
        }

        if(questionChoice == 'Y') {
            scientific++;
        }

        std::cout << "" << std::endl;
        std::cout << "Do you enjoy experimenting, exploring scientific concepts, or analysing data and facts?" << std::endl;
        std::cout << "(Y / N)";
        std::cin >> questionChoice;        

        while(questionChoice != 'Y' && questionChoice != 'N') {
            std::cout << "INVALID INPUT PLEASE TRY AGAIN! ";
            std::cin >> questionChoice;
        }

        if(questionChoice == 'Y') {
            scientific++;
        }

        std::cout << "" << std::endl;
        std::cout << "Do you prefer interacting with people, helping others, and collaborating on projects?" << std::endl;
        std::cout << "(Y / N)";
        std::cin >> questionChoice;

        while(questionChoice != 'Y' && questionChoice != 'N') {
            std::cout << "INVALID INPUT PLEASE TRY AGAIN! ";
            std::cin >> questionChoice;
        }

        if(questionChoice == 'Y') {
            social++;
        }

        std::cout << "" << std::endl;
        std::cout << "Are you naturally inclined to interact with people, understand their emotions, and enjoy working in teams?" << std::endl;
        std::cout << "(Y / N)";
        std::cin >> questionChoice;

        while(questionChoice != 'Y' && questionChoice != 'N') {
            std::cout << "INVALID INPUT PLEASE TRY AGAIN! ";
            std::cin >> questionChoice;
        }

        if(questionChoice == 'Y') {
            social++;
        }

        std::cout << "" << std::endl;
        std::cout << "Do you find satisfication in helping and connecting with others and excel in teamwork and interpersonal communication?" << std::endl;
        std::cout << "(Y / N)";
        std::cin >> questionChoice;

        while(questionChoice != 'Y' && questionChoice != 'N') {
            std::cout << "INVALID INPUT PLEASE TRY AGAIN! ";
            std::cin >> questionChoice;
        }

        if(questionChoice == 'Y') {
            social++;
        }
    } 

    std::cout << "" << std::endl;

    if(artistic > scientific) {
        std::cout << "ARTISTIC Course is fit for you";
    } else if (scientific > social){
        std::cout << "SCIENTIFIC Course is fit for you";
    } else {
        std::cout << "SOCIAL Course is fit for you";
    }

    return 0;
}