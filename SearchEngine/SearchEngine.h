/*
 * SearchEngine.h File
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

#ifndef SEARCHENGINE_SEARCHENGINE_H
#define SEARCHENGINE_SEARCHENGINE_H


class SearchEngine {


public:
    /*
     * Declaring variables and Attributes
     */
    std::map<std::string, int> words;
    std::string line;
    std::string word;
    std::string cleaned_word ;

    std::string user_input;
    vector <string> FilePath;
    string Tem = "/Users/soumilshah/CLionProjects/Assingment3/";
    map <int, map<string, int>> P;

public:
    /*
     * Constructor and Destructor
     */
    SearchEngine();

    ~SearchEngine();

public:
    void startCrawler(std::string path);
    string clean_word(std::string word);
    void search(std::string user_input);
};




#endif //SEARCHENGINE_SEARCHENGINE_H
