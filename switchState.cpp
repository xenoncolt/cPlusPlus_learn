#include <iostream>

int main() {
    int food;
    std::cout << "Choose any of this food... \n1.Mango, \n2.Apple, \n3.Chocolate, \n4.Banana, \n5.Kiss \nWrite only number of food." << std::endl;
    std::cin >> food;

    switch (food) {
    case 1:
        std::cout << "Mango is a good food. I like it." << std::endl;
        break;
    case 2:
        std::cout << "Apple is a good food. But I dont like it." << std::endl;
        break;
    case 3:
        std::cout << "Hell yeah! I love chocolate. UwU :3" << std::endl;
        break;
    case 4:
        std::cout <<  "Ummm.. Depend... But not like it too much." << std::endl;
        break;
    case 5:
        std::cout << "Dude... This is not a food. But :3 " << std::endl;
        break;
    default:
        std::cout << "I dont know what is that. Sorry. Please choose 1-5 foods.." << std::endl;
        break;
    }

    //std::cout << "Please hit enter to close the window...";

    //Same as cin.get and cin.ignore
    system("pause");
    //std::cin.get();  
    //std::cin.ignore();

};