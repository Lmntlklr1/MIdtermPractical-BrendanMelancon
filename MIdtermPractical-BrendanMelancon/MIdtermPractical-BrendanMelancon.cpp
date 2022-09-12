#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> questions;
    std::vector<std::string> answers;
    bool NoQuestion[] = { true, true, true, true, true, true, true, true, true ,true };
    questions.push_back("\n\nWhat Character first got his rise to fame as the alias 'JumpMan'?\n\n"); questions.push_back("\n\nWhat Character has had a Triology of his own games featuring real estate management?\n\n"); questions.push_back("\n\nThis Character's nickname was changed from 'The Pink Puffball' to 'The Pink Demon' between Super Smash Bros 4 and Ultimate\n\n"); questions.push_back("What Character is usually depicted as the protagonist but with a sword and bat wings?\n\n"); questions.push_back("\n\nThis Character is part of a trilogy that requires you and three friends to compete against another Team of 4 to see who can paint the landscape the most.\n\n"); questions.push_back("\n\nThis Character was released as dlc for the second game in its series.\n\n"); questions.push_back("\n\nThis Character is Iconic as an early final boss of the 'Early Nintendo Era'.\n\n"); questions.push_back("\n\nThe protagonist of game series that eventually coined the genre 'MetriodVania'\n\n"); questions.push_back("\n\nThis Character was released as a dlc costume for SSBU(Super Smash Brothers Ultimate)\n\n"); questions.push_back("\n\nThis Character's story is followed through a terrifying landscape as you defeat foes to avenge a fallen friend.\n\n");
    answers.push_back("Mario\n\n"); answers.push_back("Luigi\n\n"); answers.push_back("Kirby\n\n"); answers.push_back("Metaknight\n\n"); answers.push_back("Inkling\n\n"); answers.push_back("Octoling\n\n"); answers.push_back("Mother Brain\n\n"); answers.push_back("Samus Aaron\n\n"); answers.push_back("Sans\n\n"); answers.push_back("Doom Guy\n\n");
    std::cout << "How many questions would you like to answer? (Max:10)\n\n";
    int consolein;
    std::cin >> consolein;

    for (int i = 0; i < consolein; i++)
    {
        std::cout << "\n\nPlease enter corresponding number\n\nNote that all answer are in order of::\n1\n2\n3\n4\n\n";
        int index = rand() % questions.size() + 1;
        switch (index)
        {
        case 1:
            if (NoQuestion[0])
            {
                std::vector<std::string> answertemp = answers;
                std::cout << questions.at(0);
                int randomnum = rand() % 4;
                int getI;
                for (int i = 0; i < 4; i++)
                {
                    int randomindex = rand() % 10;
                    if (randomnum == i)
                    {
                        std::cout << answertemp.at(0);
                        answertemp.erase(answertemp.begin());
                        getI = i;
                    }
                    else
                    {
                        std::cout << answertemp.at(randomindex);
                        answertemp.erase(answertemp.begin() + (randomindex));
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct";
                }
                else
                {
                    std::cout << "Incorrect";
                }
                NoQuestion[0] = false;
            }
            else
            {
                i--;
            }
            break;
        case 2:
            if (NoQuestion[1])
            {
                std::vector<std::string> answertemp = answers;
                std::cout << questions.at(1);
                int randomnum = rand() % 4;
                int getI;
                for (int i = 0; i < 4; i++)
                {
                    int randomindex = rand() % answertemp.size();
                    if (randomnum == i)
                    {
                        std::cout << answertemp.at(1);
                        answertemp.erase(answertemp.begin() + 1);
                        getI = i;
                    }
                    else
                    {
                        std::cout << answertemp.at(randomindex);
                        answertemp.erase(answertemp.begin() + (randomindex));
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct";
                }
                else
                {
                    std::cout << "Incorrect";
                }
                NoQuestion[1] = false;
            }
            else
                i--;
            break;
        case 3:
            if (NoQuestion[2])
            {
                std::vector<std::string> answertemp = answers;
                std::cout << questions.at(2);
                int randomnum = rand() % 4;
                int getI;
                for (int i = 0; i < 4; i++)
                {
                    int randomindex = rand() % 10;
                    if (randomnum == i)
                    {
                        std::cout << answertemp.at(2);
                        answertemp.erase(answertemp.begin() + 2);
                        getI = i;
                    }
                    else
                    {
                        std::cout << answertemp.at(randomindex);
                        answertemp.erase(answertemp.begin() + (randomindex));
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct";
                }
                else
                {
                    std::cout << "Incorrect";
                }
                NoQuestion[2] = false;
            }
            else
                i--;
            break;
        case 4:
            if (NoQuestion[3])
            {
                std::vector<std::string> answertemp = answers;
                std::cout << questions.at(3);
                int randomnum = rand() % 4;
                int getI;
                for (int i = 0; i < 4; i++)
                {
                    int randomindex = rand() % 10;
                    if (randomnum == i)
                    {
                        std::cout << answertemp.at(3);
                        answertemp.erase(answertemp.begin() + 3);
                        getI = i;
                    }
                    else
                    {
                        std::cout << answertemp.at(randomindex);
                        answertemp.erase(answertemp.begin() + (randomindex - i));
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct";
                }
                else
                {
                    std::cout << "Incorrect";
                }
                NoQuestion[3] = false;
            }
            else
                i--;
            break;
        case 5:
            if (NoQuestion[4])
            {
                std::vector<std::string> answertemp = answers;
                std::cout << questions.at(4);
                int randomnum = rand() % 4;
                int getI;
                for (int i = 0; i < 4; i++)
                {
                    int randomindex = rand() % 10;
                    if (randomnum == i)
                    {
                        std::cout << answertemp.at(4 - i);
                        answertemp.erase(answertemp.begin() + 4 - i);
                        getI = i;
                    }
                    else
                    {
                        std::cout << answertemp.at(randomindex - i);
                        answertemp.erase(answertemp.begin() + (randomindex - i));
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct";
                }
                else
                {
                    std::cout << "Incorrect";
                }
                NoQuestion[4] = false;
            }
            else
                i--;
            break;
        case 6:
            if (NoQuestion[5])
            {
                std::vector<std::string> answertemp = answers;
                std::cout << questions.at(5);
                int randomnum = rand() % 4;
                int getI;
                for (int i = 0; i < 4; i++)
                {
                    int randomindex = rand() % 10;
                    if (randomnum == i)
                    {
                        std::cout << answertemp.at(5 - i);
                        answertemp.erase(answertemp.begin() + 5 - i);
                        getI = i;
                    }
                    else
                    {
                        std::cout << answertemp.at(randomindex - i);
                        answertemp.erase(answertemp.begin() + (randomindex - i));
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct";
                }
                else
                {
                    std::cout << "Incorrect";
                }
                NoQuestion[5] = false;
            }
            else
                i--;
            break;
        case 7:
            if (NoQuestion[6])
            {
                std::vector<std::string> answertemp = answers;
                std::cout << questions.at(6);
                int randomnum = rand() % 4;
                int getI;
                for (int i = 0; i < 4; i++)
                {
                    int randomindex = rand() % 10;
                    if (randomnum == i)
                    {
                        std::cout << answertemp.at(6 - i);
                        answertemp.erase(answertemp.begin() + 6 - i);
                        getI = i;
                    }
                    else
                    {
                        std::cout << answertemp.at(randomindex - i);
                        answertemp.erase(answertemp.begin() + (randomindex - i));
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct";
                }
                else
                {
                    std::cout << "Incorrect";
                }
                NoQuestion[6] = false;
            }
            else
                i--;
            break;
        case 8:
            if (NoQuestion[7])
            {
                std::vector<std::string> answertemp = answers;
                std::cout << questions.at(7);
                int randomnum = rand() % 4;
                int getI;
                for (int i = 0; i < 4; i++)
                {
                    int randomindex = rand() % 10;
                    if (randomnum == i)
                    {
                        std::cout << answertemp.at(7 - i);
                        answertemp.erase(answertemp.begin() + 7 - i);
                        getI = i;
                    }
                    else
                    {
                        std::cout << answertemp.at(randomindex - i);
                        answertemp.erase(answertemp.begin() + (randomindex - i));
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct";
                }
                else
                {
                    std::cout << "Incorrect";
                }
                NoQuestion[7] = false;
            }
            else
                i--;
            break;
        case 9:
            if (NoQuestion[8])
            {
                std::vector<std::string> answertemp = answers;
                std::cout << questions.at(8);
                int randomnum = rand() % 4;
                int getI;
                for (int i = 0; i < 4; i++)
                {
                    int randomindex = rand() % 10;
                    if (randomnum == i)
                    {
                        std::cout << answertemp.at(8 - i);
                        answertemp.erase(answertemp.begin() + 8 - i);
                        getI = i;
                    }
                    else
                    {
                        std::cout << answertemp.at(randomindex - i);
                        answertemp.erase(answertemp.begin() + (randomindex - i));
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct";
                }
                else
                {
                    std::cout << "Incorrect";
                }
                NoQuestion[8] = false;
            }
            else
                i--;
            break;
        case 10:
            if (NoQuestion[9])
            {
                std::vector<std::string> answertemp = answers;
                std::cout << questions.at(9);
                int randomnum = rand() % 4;
                int getI;
                for (int i = 0; i < 4; i++)
                {
                    int randomindex = rand() % 10;
                    if (randomnum == i)
                    {
                        std::cout << answertemp.at(9 - i);
                        answertemp.erase(answertemp.begin() + 9 - i);
                        getI = i;
                    }
                    else
                    {
                        std::cout << answertemp.at(randomindex - i);
                        answertemp.erase(answertemp.begin() + (randomindex - i));
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct";
                }
                else
                {
                    std::cout << "Incorrect";
                }
                NoQuestion[9] = false;
            }
            else
                i--;
            break;
        }

    }
}


