/*
 * SearchEngine.CPP File
 * SearchEngine
 * Author : Soumil Nitin SHah
 * Version 0.0.1
 * Email soushah@my.bridgeport.edu
 * Student id : 1031686
 * Github:
 * Last Modified : 6 october 2019
 *
 * Operating System: MAC os
 * Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.14.sdk/usr/include/c++/4.2.
 * Apple LLVM version 10.0.1 (clang-1001.0.46.3)
 * Target: x86_64-apple-darwin18.7.0
 * InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
 */

#include "SearchEngine.h"
#include <iostream>
#include <map>
#include <set>
#include <iterator>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;




ofstream fout("output.txt.txt");

SearchEngine::SearchEngine()
{

}

SearchEngine::~SearchEngine()
{

}

string SearchEngine::clean_word(std::string word)
{
    string result {};
    for(char c : word)
    {
        if (isalpha(c))
        {
            result += c;
        }
        else
        {
            continue;
        }
    }
    return result;
}

void SearchEngine::startCrawler(std::string path)
{
    std::ifstream in_file (path);
    while (std::getline(in_file, line))
    {
        std::stringstream ss(line);     // Each URL
        FilePath.push_back(Tem+line);   // Get all Path
        //cout << Tem+line << endl;
    }
    auto it = FilePath.begin();
    int Row = 0;


    while (it != FilePath.end())
    {
        Row = Row + 1;
        cout << Row<<" : Crawling on : " << *it << endl;cout << "\n";
        fout << Row<<" : Crawling on : " << *it << endl;cout << "\n";

        ifstream in_file (*it);                     // Create a file Object
        while (std::getline(in_file, line))         // Iterate Over First File
        {
            // cout << line << endl;                   // Each Sentences
            std::stringstream ss(line);
            while  (ss >> word)                     // Each Word
            {
                cleaned_word = clean_word(word);    // clean Word
                P[Row][cleaned_word]++;
            }
        }cout <<"\n";
        it++;
    }cout<<"\n";fout<<"\n";
    cout << "Crawling Finish" << endl;cout<<"\n";
    fout << "Crawling Finish" << endl;cout<<"\n";
}

void SearchEngine::search(std::string user_input)
{
    for (int i =1; i<=FilePath.size(); i++)
    {


        if(P[i][user_input])
        {
            // cout << "Found" << i << endl;
            cout << "Word is Present " << FilePath.at(i-1) << endl;
            fout << "Word is Present " << FilePath.at(i-1) << endl;
        }
    }
}