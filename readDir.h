#ifndef _READDIR_H_
#define _READDIR_H_

#include <dirent.h>
#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

#ifndef PATH_MAX
#define PATH_MAX 100
#endif

vector<string> load_dir_files(const char *dir);
void printUsage();
void showAllFiles(const std::vector<std::string> &files);



#endif