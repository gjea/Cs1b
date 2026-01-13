#include <iostream>

void getDimensions(float &width, float &length, float &depth);
bool areValid(float &width, float &length, float &depth);
float calcVolume(float &width, float &length, float &depth);
void displayVolume(float &width, float &length, float &depth, float volume);

int main() {
    float width;
    float length;
    float depth;

    getDimensions(width, length, depth);
    if (areValid(width, length, depth)) {
        displayVolume(width, length, depth, calcVolume(width, length, depth));
    } else {
        std::cout << "Invalid input, try again." << '\n';
    }

    return 0;
}

void getDimensions(float &width, float &length, float &depth) {
    std::cout << "Enter width: " << '\n';
    std::cin >> width;
    std::cout << "Enter length: " << '\n';
    std::cin >> length;
    std::cout << "Enter depth: " << '\n';
    std::cin >> depth;
}

bool areValid(float &width, float &length, float &depth) {
    bool widthvalid = false;
    bool lengthvalid = false;
    bool depthvalid = false;
    if (width > 5 && width < 20) {
        widthvalid = true;
    }
    if (length > 5 && length < 100) {
        lengthvalid = true;
    }
    if (depth > 1 && depth < 12) {
        depthvalid = true;
    }
    if (widthvalid && lengthvalid && depthvalid) {
        return true;
    } else {
        return false;
    }
}

float calcVolume(float &width, float &length, float &depth) {
    return width * length * depth;
}

void displayVolume(float &width, float &length, float &depth, float volume) {
    std::cout << "The volume is " << volume << '\n';
    std::cout << "DIMENSIONS: " << '\n';
    std::cout << "width: " << width << '\n';
    std::cout << "length: " << length << '\n';
    std::cout << "depth: " << depth << '\n';
}
