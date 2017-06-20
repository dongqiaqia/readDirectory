#!/usr/bin/env
# coding: utf-8
import os
import sys

reload(sys)
sys.setdefaultencoding('utf-8')

class fileTools:
	def __init__(self):
        self.global_fileList = []
        self.global_filePath = 'path/to/your/directory'
        self.global_tsv = 'NewsList.tsv'# this file contains all data
        self.global_txt = 'NewsList.txt'# this file contains all tweet content
        # self.global_filePath = 'E:\NewsVerification_146\NewsVerification_146\T'

    def read_allFile(self, filepath):
        for filename in os.listdir(filepath):
            fp = os.path.join(filepath, filename)
            if os.path.isfile(fp):
                self.global_fileList.append(fp)
            elif os.path.isdir(fp):
                self.read_allFile(fp)