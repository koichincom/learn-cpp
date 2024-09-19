#include <iostream>
#include <string>

// Calculate an average of three scores
int calculateAverage(int score1, int score2, int score3){
    return (score1 + score2 + score3) / 3;
}

// Pass or not
bool isPass(int average){
    return average >= 60;
}

// Indicate the results
void printResult(std::string nameStudent, int average, bool pass){
    std::string passNot = pass ? "Pass" : "Fail";
    std::cout << nameStudent << "'s average is " << average << ", " << passNot << '\n';
}

int main(){
    std::cout << "How many students are there: ";
    int numStudents{};
    std::cin >> numStudents;

    // Definition for average and others
    int average{};
    int score1{};
    int score2{};
    int score3{};

    for (int i{}; i < numStudents; i++){

        std::cout << "Student's name: ";
        std::string nameStudent{};
        std::cin >> nameStudent;
        
        std::cout << "Score of first exam: ";
        std::cin >> score1;
        std::cout << "Score of second exam: ";
        std::cin >> score2;
        std::cout << "Score of thrid exam: ";
        std::cin >> score3;

        average = calculateAverage(score1, score2, score3);
        bool pass = isPass(average);

        printResult(nameStudent, average, pass);
    }

    return 0;
}