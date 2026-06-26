// to create quiz application
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<pair<string, string>> quiz = {
        {"What is the capital of France?", "Paris"},
        {"What is 2 + 2?", "4"},
        {"What is the largest ocean on Earth?", "Pacific Ocean"}
    };

    int score = 0;
    string answer;

    cout << "Welcome to the Quiz Application!" << endl;

    for (const auto& question : quiz) {
        cout << question.first << endl;
        cout << "Your answer: ";
        cin >> answer;

        if (answer == question.second) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Incorrect. The correct answer is: " << question.second << endl;
        }
    }

    cout << "Your final score is: " << score << "/" << quiz.size() << endl;

    return 0;
}