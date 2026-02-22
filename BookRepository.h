#pragma once
#include <string>
class BookRepository
{
public:
    BookRepository() = default;

    void SaveBook(std::string title, std::string author, std::string year, std::string path);

    void SaveBookPath(std::string path, std::string title);
};