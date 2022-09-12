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
    int numberCorrect = 0;
    for (int i = 0; i < consolein; i++)
    {
        std::cout << "\n\nPlease enter corresponding number\n\nNote that all answer are in order of::\n0\n1\n2\n3\n\n";
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
                    int randomindex = rand() % answertemp.size();
                    if (randomnum == i)
                    {
                        std::cout << "Mario\n\n";
                        answertemp.erase(answertemp.begin());
                        getI = i;
                    }
                    else
                    {
                        if (answertemp.at(randomindex) == "Mario\n\n")
                        {
                            randomindex = rand() % answertemp.size();
                        }
                        std::cout << answertemp.at(randomindex);
                        if (i == 0)
                            answertemp.erase(answertemp.begin() + (randomindex));
                        else
                        {
                            if (randomindex == 0)
                                randomindex = 1;
                            answertemp.erase(answertemp.begin() + (randomindex - 1));
                        }
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct\n\n";
                    numberCorrect++;
                }
                else
                {
                    std::cout << "Incorrect\n\n";
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
                        std::cout << "Luigi\n\n";
                        answertemp.erase(answertemp.begin() + 1);
                        getI = i;
                    }
                    else
                    {
                        if (answertemp.at(randomindex) == "Luigi\n\n")
                        {
                            randomindex = rand() % answertemp.size();
                        }
                        std::cout << answertemp.at(randomindex);
                        if (i == 0)
                            answertemp.erase(answertemp.begin() + (randomindex));
                        else
                        {
                            if (randomindex == 0)
                                randomindex = 1;
                            answertemp.erase(answertemp.begin() + (randomindex - 1));
                        }
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct\n\n";
                    numberCorrect++;
                }
                else
                {
                    std::cout << "Incorrect\n\n";
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
                    int randomindex = rand() % answertemp.size();
                    if (randomnum == i)
                    {
                        std::cout << "Kirby\n\n";
                        answertemp.erase(answertemp.begin() + 2);
                        getI = i;
                    }
                    else
                    {
                        if (answertemp.at(randomindex) == "Kirby\n\n")
                        {
                            randomindex = rand() % answertemp.size();
                        }
                        std::cout << answertemp.at(randomindex);
                        if (i == 0)
                            answertemp.erase(answertemp.begin() + (randomindex));
                        else
                        {
                            if (randomindex == 0)
                                randomindex = 1;
                            answertemp.erase(answertemp.begin() + (randomindex - 1));
                        }
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct\n\n";
                    numberCorrect++;
                }
                else
                {
                    std::cout << "Incorrect\n\n";
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
                    int randomindex = rand() % answertemp.size();
                    if (randomnum == i)
                    {
                        std::cout << "Metaknight\n\n";
                        answertemp.erase(answertemp.begin() + 3);
                        getI = i;
                    }
                    else
                    {
                        if (answertemp.at(randomindex) == "Metaknight\n\n")
                        {
                            randomindex = rand() % answertemp.size();
                        }
                        std::cout << answertemp.at(randomindex);
                        if (i == 0)
                            answertemp.erase(answertemp.begin() + (randomindex));
                        else
                        {
                            if (randomindex == 0)
                                randomindex = 1;
                            answertemp.erase(answertemp.begin() + (randomindex - 1));
                        }
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct\n\n";
                    numberCorrect++;
                }
                else
                {
                    std::cout << "Incorrect\n\n";
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
                    int randomindex = rand() % answertemp.size();
                    if (randomnum == i)
                    {
                        std::cout << "Inkling\n\n";
                        answertemp.erase(answertemp.begin() + 4 - i);
                        getI = i;
                    }
                    else
                    {
                        if (answertemp.at(randomindex) == "Inkling\n\n")
                        {
                            randomindex = rand() % answertemp.size();
                        }
                        std::cout << answertemp.at(randomindex);
                        if (i == 0)
                            answertemp.erase(answertemp.begin() + (randomindex));
                        else
                        {
                            if (randomindex == 0)
                                randomindex = 1;
                            answertemp.erase(answertemp.begin() + (randomindex - 1));
                        }
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct\n\n";
                    numberCorrect++;
                }
                else
                {
                    std::cout << "Incorrect\n\n";
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
                    int randomindex = rand() % answertemp.size();
                    if (randomnum == i)
                    {
                        std::cout << "Octoling\n\n";
                        answertemp.erase(answertemp.begin() + 5 - i);
                        getI = i;
                    }
                    else
                    {
                        if (answertemp.at(randomindex) == "Octoling\n\n")
                        {
                            randomindex = rand() % answertemp.size();
                        }
                        std::cout << answertemp.at(randomindex);
                        if (i == 0)
                            answertemp.erase(answertemp.begin() + (randomindex));
                        else
                        {
                            if (randomindex == 0)
                                randomindex = 1;
                            answertemp.erase(answertemp.begin() + (randomindex - 1));
                        }
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct\n\n";
                    numberCorrect++;
                }
                else
                {
                    std::cout << "Incorrect\n\n";
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
                    int randomindex = rand() % answertemp.size();
                    if (randomnum == i)
                    {
                        std::cout << "Mother Brain\n\n";
                        answertemp.erase(answertemp.begin() + 6 - i);
                        getI = i;
                    }
                    else
                    {
                        if (answertemp.at(randomindex) == "Mother Brain\n\n")
                        {
                            randomindex = rand() % answertemp.size();
                        }
                        std::cout << answertemp.at(randomindex);
                        if (i == 0)
                            answertemp.erase(answertemp.begin() + (randomindex));
                        else
                        {
                            if (randomindex == 0)
                                randomindex = 1;
                            answertemp.erase(answertemp.begin() + (randomindex - 1));
                        }
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct\n\n";
                    numberCorrect++;
                }
                else
                {
                    std::cout << "Incorrect\n\n";
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
                    int randomindex = rand() % answertemp.size();
                    if (randomnum == i)
                    {
                        std::cout << "Samus Aaron\n\n";
                        answertemp.erase(answertemp.begin() + 7 - i);
                        getI = i;
                    }
                    else
                    {
                        if (answertemp.at(randomindex) == "Samus Aaron\n\n")
                        {
                            randomindex = rand() % answertemp.size();
                        }
                        std::cout << answertemp.at(randomindex);
                        if (i == 0)
                            answertemp.erase(answertemp.begin() + (randomindex));
                        else
                        {
                            if (randomindex == 0)
                                randomindex = 1;
                            answertemp.erase(answertemp.begin() + (randomindex - 1));
                        }
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct\n\n";
                    numberCorrect++;
                }
                else
                {
                    std::cout << "Incorrect\n\n";
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
                    int randomindex = rand() % answertemp.size();
                    if (randomnum == i)
                    {
                        std::cout << "Sans\n\n";
                        answertemp.erase(answertemp.begin() + 8 - i);
                        getI = i;
                    }
                    else
                    {
                        if (answertemp.at(randomindex) == "Sans\n\n")
                        {
                            randomindex = rand() % answertemp.size();
                        }
                        std::cout << answertemp.at(randomindex);
                        if (i == 0)
                            answertemp.erase(answertemp.begin() + (randomindex));
                        else
                        {
                            if (randomindex == 0)
                                randomindex = 1;
                            answertemp.erase(answertemp.begin() + (randomindex - 1));
                        }
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct\n\n";
                    numberCorrect++;
                }
                else
                {
                    std::cout << "Incorrect\n\n";
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
                    int randomindex = rand() % answertemp.size();
                    if (randomnum == i)
                    {
                        std::cout << "Doom guy\n\n";
                        answertemp.erase(answertemp.end() - i);
                        getI = i;
                    }
                    else
                    {
                        if (answertemp.at(randomindex) == "Doom guy\n\n")
                        {
                            randomindex = rand() % answertemp.size();
                        }
                        std::cout << answertemp.at(randomindex);
                        if (i == 0)
                            answertemp.erase(answertemp.begin() + (randomindex));
                        else
                        {
                            if (randomindex == 0)
                                randomindex = 1;
                            answertemp.erase(answertemp.begin() + (randomindex - 1));
                        }
                    }
                }
                std::string AnswerToQuestion;
                std::cin >> AnswerToQuestion;
                if (AnswerToQuestion == std::to_string(getI))
                {
                    std::cout << "Correct\n\n";
                    numberCorrect++;
                }
                else
                {
                    std::cout << "Incorrect\n\n";
                }
                NoQuestion[9] = false;
            }
            else
                i--;
            break;
        }
        if (i == consolein - 1)
        {
            std::cout << " You got::\n\n ";
            std::cout << numberCorrect;
            std::cout << "\n---\n ";
            std::cout << consolein;
            std::cout << "\n\n Correct";
        }
    }
    
}


