clc;
clear all;
dirname = 'path/to/your/directory';
listings = dir(dirname);
for i = 3:size(listings)
	filename = listings(i).name;
end
