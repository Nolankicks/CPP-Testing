#include <iostream>
#include <limits>

class Ubre
{
public:
    const int GameJamWins = 4;
    std::string webSite = "https://smallfi.sh/team/ubre";
    std::string twitter = "https://twitter.com/yuberee";

    void MakeSpaghetti()
    {
        std::cout << "Spaghetti is ready!" << std::endl;
    }

    void MakeGames()
    {
        std::cout << "Game is ready!" << std::endl;
    }

    void Garden()
    {
        std::cout << "These weeds are out of control!" << std::endl;
    }
};

int main()
{
    Ubre ubre;

    while (true)
    {
        std::cout << "1. Make Spaghetti\n"
                  << "2. Make Games\n"
                  << "3. Check out ubre's website\n"
                  << "4. Check out ubre's twitter\n"
                  << "5 Garden\n"
                  << "6. Exit\n"
                  << std::endl;

        int choice;
        std::cin >> choice;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice)
        {
        case 1:
            ubre.MakeSpaghetti();
            break;
        case 2:
            ubre.MakeGames();
            break;
        case 3:
            std::cout << "Website: " << ubre.webSite << std::endl;
            break;
        case 4:
            std::cout << "Twitter: " << ubre.twitter << std::endl;
            break;
        case 5:
            ubre.Garden();
            break;
        case 6:
            return 0;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
        };

        std::cout << "Press Enter to continue..." << std::endl;
        std::cin.get();
    }
    return 0;
}