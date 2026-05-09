#include <iostream>
#include <string>
#include <vector>
#include <random>   // For modern random number generation
#include <ctime>    // For seeding with system time
#include <algorithm> // For std::transform and std::all_of

/**
 * Function: replacePlaceholder
 * ----------------------------
 * Searches for a target substring and replaces it with another string.
 * We pass 'text' by reference (&) so the changes happen to the actual string.
 */
void replacePlaceholder(std::string& text, const std::string& target, const std::string& replacement) {
    size_t pos = text.find(target);
    if (pos != std::string::npos) {
        // .replace(starting_index, length_of_target, new_text)
        text.replace(pos, target.length(), replacement);
    }
}

/**
 * Function: isBlank
 * -----------------
 * Checks if a string is empty or contains only whitespace.
 */
bool isBlank(const std::string& s) {
    return s.empty() || std::all_of(s.begin(), s.end(), [](unsigned char c) {
        return std::isspace(c);
    });
}

int main() {
    // 1. INITIALIZE RANDOM ENGINE
    // We seed the Mersenne Twister (mt19937) with the current time so 
    // the results are different every time the EXE is launched.
    std::mt19937 gen(static_cast<unsigned int>(std::time(0)));

    std::string userInput;

    // 2. INPUT VALIDATION LOOP
    while (true) {
        std::cout << "Enter your name for a roast (or type 'excuse' for a late assignment reason): ";
        std::getline(std::cin, userInput);

        if (!isBlank(userInput)) {
            break;
        }
        std::cout << "Error: Input cannot be empty. Try again!\n" << std::endl;
    }

    // 3. CHECK FOR SPECIAL COMMAND
    // Create a lowercase version of the input to handle 'Excuse', 'EXCUSE', etc.
    std::string commandCheck = userInput;
    std::transform(commandCheck.begin(), commandCheck.end(), commandCheck.begin(), ::tolower);

    if (commandCheck == "excuse") {
        // --- STUDENT EXCUSE GENERATOR ---
        std::vector<std::string> excuses = {
            "My compiler developed sentience and refused to run buggy code.",
            "I accidentally uploaded my homework to a blockchain and now I can't afford the gas fees.",
            "My cat stepped on the keyboard and accidentally initiated a 'rm -rf' command.",
            "I spent 6 hours debugging a semicolon that ended up being a piece of dust on my screen.",
            "A cosmic ray flipped a bit in my RAM and deleted my Main function.",
            "The Wi-Fi was down, so I tried to send the code via carrier pigeon, but it got distracted.",
            "I thought the deadline was optional, like a 'suggested' speed limit.",
            "My laptop battery died, and I lost the charger in a different dimension."
        };

        std::uniform_int_distribution<> dis(0, excuses.size() - 1);
        std::cout << "\n[STUDENT EXCUSE]: " << excuses[dis(gen)] << std::endl;

    } else {
        // --- ROAST GENERATOR ---
        std::vector<std::string> roasts = {
            "{name}'s code has more 'TODO's than actual logic.",
            "If {name} was an algorithm, they'd be a 'Bogosort'—pure chaos.",
            "The only thing more unstable than {name}'s internet is their latest commit.",
            "Software updates for {name} don't fix bugs; they just reorganize them.",
            "{name} thinks 'Cloud Computing' is just staring at the sky during work.",
            "{name} codes like they're playing Jenga with semicolons.",
            "If {name} were an HTML tag, they'd be <br> because they're always taking a break.",
            "{name} thinks a 'Stack Overflow' is what happens when they order too many pancakes.",
            "Legend says {name} once finished a project on time... but that was a compiler error.",
            "{name}'s typing speed is fast, but their logic is still on dial-up.",
            "I'd ask {name} to fix the bug, but they'd just call it a 'feature' and go to lunch.",
            "{name} doesn't need a gym; they get enough exercise jumping to conclusions in code reviews."
        };

        std::uniform_int_distribution<> dis(0, roasts.size() - 1);
        std::string selectedRoast = roasts[dis(gen)];

        // Swap the placeholder for the actual name provided
        replacePlaceholder(selectedRoast, "{name}", userInput);

        std::cout << "\n[ROAST]: " << selectedRoast << std::endl;
    }

    std::cout << "\nPress Enter to exit..." << std::endl;
    std::cin.get(); // Keeps the console window open

    return 0;
}