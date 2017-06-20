#include "readDir.h"

vector<string> load_dir_files(const char *dir)
{
    DIR *dp;
    struct dirent *ep;
    char filename[PATH_MAX];
    dp = opendir(dir);
    if(dp == NULL) cout<< dir << " not exists";
	vector<string> files;
    while((ep = readdir(dp)))
    {
        if(ep->d_name[0] == '.')
            continue;
        sprintf(filename, "%s/%s", dir, ep->d_name);
        files.push_back(string(filename));
    }
    closedir(dp);
	sort(files.begin(), files.end());
    return files;
}
void printUsage()
{
	std::cout<<"Usage:./main dirname\n";
}
void showAllFiles(const std::vector<std::string> &files)
{
	for(std::vector<std::string>::const_iterator iter=files.begin();iter!=files.end();iter++)
		std::cout<<*iter<<std::endl;
}

