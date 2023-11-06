#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string outputFilename = filename + ".replace";

    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Error: Unable to open input file " << filename << std::endl;
        return 1;
    }

    std::ofstream outputFile(outputFilename);
    if (!outputFile) {
        std::cerr << "Error: Unable to open output file " << outputFilename << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();

    std::cout << "File " << filename << " copied and modified in " << outputFilename << std::endl;

    return 0;
}
