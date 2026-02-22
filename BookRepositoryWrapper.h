#pragma once
#include "BookRepository.h"
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace msclr::interop;

public ref class BookRepositoryWrapper
{
private:
    BookRepository* repo;

public:
    BookRepositoryWrapper()
    {
        repo = new BookRepository();
    }

    void SaveBook(String^ title, String^ author, String^ year, String^ path)
    {
        std::string nativeTitle = marshal_as<std::string>(title);
        std::string nativeAuthor = marshal_as<std::string>(author);
        std::string nativeYear = marshal_as<std::string>(year);
        std::string nativePath = marshal_as<std::string>(path);
        repo->SaveBook(nativeTitle, nativeAuthor, nativeYear, nativePath);
    }

    void SaveBookPath(String^ path, String^ title)
    {
        std::string nativePath = marshal_as<std::string>(path);
        std::string nativeTitle = marshal_as<std::string>(title);
        repo->SaveBookPath(nativePath, nativeTitle);
    }
};