//
//  ReadFile.hpp
//  
//
//  Created by Esmaeil Delfaraz on 01/07/2024.
//
#include <stdio.h>
#include <map>
#include <list>
#include <iostream>
#include <fstream>
#include <memory>
#include <set>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>


#include "Graph.hpp"
#include "Subset.hpp"
#include "Subroutine.hpp"
#include "PD.hpp"
#ifndef ReadFile_hpp
#define ReadFile_hpp

#include <stdio.h>

int graphFromFile(std::string fileName, std::vector<std::pair<double, double>>& coordination, std::vector<double>& verticesSizes, std::vector<double>& verticesPrizes, std::vector<double>& verticesServicesTime, int& numVehicles, double& budget, double& capacity);
//std::pair<int, int> graphFromFile(const std::string &fileName, double& meanEdgeWeight, int& numNodes, std::vector<std::vector<double>>& edgesWeights, std::vector<double>& verticesPrizes, std::vector<double>& verticesCapacities);


#endif /* ReadFile_hpp */
