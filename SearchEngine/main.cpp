/*
 * main.CPP File
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
#include "SearchEngine.h"

using namespace std;
int main()
{
    SearchEngine G00gle;
    string start = "/Users/soumilshah/CLionProjects/Assingment3/urls.txt";
    G00gle.startCrawler(start);

    string sterm = "";

    while (sterm!= "q" || sterm !="Q")
    {

        cout << "Enter the Search Word" << endl;
        cin >> sterm;
        if (sterm == "Q")
        {
            break;
        }else if(sterm == "q")
        {
            break;
        }
        G00gle.search(sterm);
    }

    return 0;
}