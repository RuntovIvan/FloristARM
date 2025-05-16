#pragma once
#include "Information.h"
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <nlohmann/json.hpp>
#include "convert_to_utf8.h"

void check_file(std::string filename);
void make_order(std::string filename, std::string position, int count);
void make_sell(std::string filename, std::string position, int count);
void make_dispose(std::string filename, std::string position, int count);
void add_to_report(std::string filename, std::map<std::string, Info>& rep_map);

std::vector<std::string> get_tov();