#pragma once
#include <iostream>
#include <string>
#include <unordered_set>
#include <sstream>

class jaccard
{
public:
    double calculateJaccardSimilarity(const std::string& str1, const std::string& str2) {

        auto splitIntoWords = [](const std::string& s) {
            std::unordered_set<std::string> words;
            std::istringstream iss(s);
            std::string word;
            while (iss >> word) {
                words.insert(word);
            }
            return words;
            };


        std::unordered_set<std::string> set1 = splitIntoWords(str1);
        std::unordered_set<std::string> set2 = splitIntoWords(str2);


        size_t intersection = 0;
        for (const auto& word : set1) {
            if (set2.count(word) > 0) {
                intersection++;
            }
        }

        size_t unionSize = set1.size() + set2.size() - intersection;

        if (unionSize == 0) {
            return 0.0;
        }

        double similarity = static_cast<double>(intersection) / static_cast<double>(unionSize) * 100.0;

        return similarity;
    }

};

