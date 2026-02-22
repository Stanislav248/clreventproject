#include "BookRepository.h"
#include <fstream>
#include <filesystem>

void BookRepository::SaveBook(std::string title, std::string author, std::string year, std::string path)
{
    std::filesystem::create_directories(path);
    std::ofstream file(path + title + ".txt", std::ios::app);
    if (file.is_open()) {
        file << author + ", " + year + "\n";
        file.close();
    }
}

void BookRepository::SaveBookPath(std::string path, std::string title)
{
    std::ofstream file("filePaths.txt", std::ios::app);
    if (file.is_open()) {
        file << path + title + "\n";
        file.close();
    }
}