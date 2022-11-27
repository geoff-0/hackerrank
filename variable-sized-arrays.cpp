#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>


int main() {
    std::vector<std::vector<int>> a;
    std::string input;
    
    std::getline(std::cin, input);
    
    std::vector<int> arrayQueryLengths = {input[0] - '0', input[2] - '0'};
    
    for (int i = 0 ; i < arrayQueryLengths[0]; i++)
    {
        std::vector<int> t;
        
        std::getline(std::cin, input);
        
        for (int j = 1; j < input.length(); j++)
        {
            if (!std::isspace(input[j]))
            {
                t.push_back(input[j] - '0');
            }
        
        }
        
        a.push_back(t);
    }
    
    for (int i = 0; i < arrayQueryLengths[1]; i++)
    {
        std::getline(std::cin, input);
        
        std::cout << a[input[0] - '0'][input[2] - '0'] <<  '\n';
    }

    return 0;
}
