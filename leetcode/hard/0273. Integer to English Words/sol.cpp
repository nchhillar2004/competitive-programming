#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    map<int, string> mp = {
        {1, "One"},        {2, "Two"},       {3, "Three"},     {4, "Four"},
        {5, "Five"},       {6, "Six"},       {7, "Seven"},     {8, "Eight"},
        {9, "Nine"},       {10, "Ten"},      {11, "Eleven"},   {12, "Twelve"},
        {13, "Thirteen"},  {14, "Fourteen"}, {15, "Fifteen"},  {16, "Sixteen"},
        {17, "Seventeen"}, {18, "Eighteen"}, {19, "Nineteen"}, {20, "Twenty"},
        {30, "Thirty"},    {40, "Forty"},    {50, "Fifty"},    {60, "Sixty"},
        {70, "Seventy"},   {80, "Eighty"},   {90, "Ninety"}};
    string toHundred(int num) {
        string hundred;
        map<int, string>::iterator it;

        if (num >= 100) {
            int x = num / 100;
            it = mp.find(x);
            hundred += it->second;
            hundred += " Hundred";
            num = num - (x * 100);
            hundred += (num > 0) ? " " : "";
        }

        if (num > 0 && num <= 99) {
            it = mp.find(num);
            if (it != mp.end()) {
                hundred += it->second;
            } else {
                int x = (num / 10) * 10;
                it = mp.find(x);
                hundred += it->second;
                num -= x;
                hundred += (num > 0) ? " " : "";
                if (num > 0 && num <= 9) {
                    it = mp.find(num);
                    hundred += it->second;
                }
            }
        }

        return hundred;
    }
    string numberToWords(int num) {
        if (num == 0) {
            return "Zero";
        }

        string words;
        int bil = 1000000000, mil = 1000000, th = 1000;

        if (num >= bil) {
            int x = num / bil;
            words += mp.find(x)->second;
            words += " Billion";
            num -= x * bil;
            words += (num > 0) ? " " : "";
        }
        if (num >= mil && num < bil) {
            int x = num / mil;
            words += toHundred(x);
            words += " Million";
            num -= x * mil;
            words += (num > 0) ? " " : "";
        }
        if (num >= th && num < mil) {
            int x = num / th;
            words += toHundred(x);
            words += " Thousand";
            num -= x * th;
            words += (num > 0) ? " " : "";
        }
        if (num > 0 && num < th) {
            words += toHundred(num);
            num *= 0;
        }

        return words;
    }
};
