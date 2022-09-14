#include <iostream>

int main()
{
    std::string questions[4] = {"1.What year was C++ created?\n",
                                "2.Who invented C++?\n",
                                "3.What is the predescessor of C++?\n",
                                "4.is the Eart flat?\n"};

    std::string answers[][4] = {{"1940\t", "1985\t", "2001\t", "2003\t"},
                                {"Bjarne Stroustrup\t", "Frank Einstein\t", "Michael Jordan\t", "Mark Zuckerburg\t"},
                                {"C\t", "C#\t", "C++\t", "F++\t"},
                                {"Yes\t", "No\t", "Sometimes\t", "What's Earth?\t"}};

    char answerKey[] = {'B', 'A', 'C', 'A'};
    int corrects = 0;

    int size = sizeof(questions) / sizeof(questions[0]);

    char answer;
    for (int i = 0; i < size; i++)
    {
        std::cout << questions[i];

        for (int j = 0; j < size; j++)
        {
            std::cout << answers[i][j];
        }

        std::cin >> answer;
        answer = toupper(answer);

        if (answerKey[i] == answer)
        {
            corrects++;
        }
    }

    std::cout << "You answered " << corrects << " questions correctly\n";

    return 0;
}