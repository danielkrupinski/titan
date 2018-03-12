#ifndef CONFIG_H
#define CONFIG_H

#include <unistd.h>
#include <string>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <vector>
#include <algorithm>
#include "Utils/xorstring.h"
#include "interfaces.h"

bool DoesFileExist(const char*);
bool DoesDirectoryExist(const char*);

struct Config {
    std::string name;
    std::string path;

    Config(const char*, const char*);
};

std::vector<Config> GetConfigs(const char*);
std::vector<std::string> GetConfigs();

std::string GetConfigDirectory();
std::string GetGhConfigDirectory();

#endif // CONFIG_H
