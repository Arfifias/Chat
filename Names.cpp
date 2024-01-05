#include <iostream>

namespace name{
    std::string myName = "Aristeidis";
}
namespace you{
    std::string yourName = "Jimmy";
}
namespace myGame{
    std::string my_Game = "Dark Souls Remastered";
}
namespace yourGame{
    std::string your_Game = "Uncharted";
}


int main(){

using namespace name;
using namespace you;
using namespace myGame;
using namespace yourGame;

for(int i = 0;i<=10;i++){
    std::cout << "Hello...I am " << myName << "\n";
    break;
}

std::cout << "Oh.....ok" << "\n";

std::cout << "And you who are you?" << "\n";

std::cout << "My name is " << yourName << "\n";

std::cout << "Nice to meet you " << yourName << "\n";

std::cout << "Thanks...what's your favorite game?" << "\n";

std::cout << "My favorite game????" << "\n";

std::cout << "Yes?" << "\n";

std::cout << "Well I used to play games but now I crave board games!!!" << "\n";

std::cout << "Oh I see Jimmy" << "\n";

std::cout << "Mine favorite game was and always be " << my_Game << "\n";

std::cout << "Great pal mine in the past was " << your_Game << "\n";

std::cout << "Nice I would like to try it out what is it about??" << "\n";
    
std::cout << your_Game << " is about a descendant of Sir Francis Drake who in the fourth installment seems to be a fake thief" << "\n";

std::cout << "Oh I see excellent choice actually thank you!!!" << "\n";

std::cout << "You are welcome friend";

return 0;

//A short console chat
//Please enjoy

}