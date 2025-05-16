#include "json_work.h"
#include <vector>
#include <string>
#include <iostream>

// вектор для хранения наименований товаров
std::vector<std::string> tov = {
	"Альстромерия",
	"Гвоздика",
	"Лилия",
	"Роза кустовая"
};

// размер вектора
const int tov_size = tov.size();

// получения вектора товаров для форм
std::vector<std::string> get_tov()
{
	return tov;
}

// проверка, существует ли json файл
void check_file(std::string filename)
{
	std::ifstream in_json_file(filename);
	if (in_json_file.is_open())
	{
		in_json_file.close();
		return;
	}
	in_json_file.close();


	nlohmann::json json_new;
	for (int i = 0; i < tov_size; i++)
	{
		json_new[convert_to_utf8(tov[i])] = nlohmann::json::object();
		json_new[convert_to_utf8(tov[i])][u8"Заказано"] = 0;
		json_new[convert_to_utf8(tov[i])][u8"Продано"] = 0;
		json_new[convert_to_utf8(tov[i])][u8"Утилизировано"] = 0;
		json_new[u8"Исправлено"] = 0;
	}

	std::ofstream out_json_file(filename);
	out_json_file << json_new;
	out_json_file.close();
}

// запись заказа в json файл
void make_order(std::string filename, std::string position, int count)
{
	std::ifstream in_json_file(filename);
	nlohmann::json data = nlohmann::json::parse(in_json_file);
	in_json_file.close();

	data[position][u8"Заказано"] = count;

	std::ofstream out_json_file(filename);
	out_json_file << std::setw(4) << data;
	out_json_file.close();
}

// запись продажи в json файл
void make_sell(std::string filename, std::string position, int count)
{
	std::ifstream in_json_file(filename);
	nlohmann::json data = nlohmann::json::parse(in_json_file);
	in_json_file.close();

	data[position][u8"Продано"] = count;

	std::ofstream out_json_file(filename);
	out_json_file << data;
	out_json_file.close();
}

// запись утиля в json файл
void make_dispose(std::string filename, std::string position, int count)
{
	std::ifstream in_json_file(filename);
	nlohmann::json data = nlohmann::json::parse(in_json_file);
	in_json_file.close();

	data[position][u8"Утилизировано"] = count;

	std::ofstream out_json_file(filename);
	out_json_file << data;
	out_json_file.close();
}

// запись данных по товарам из json фалов в словарь
void add_to_report(std::string filename, std::map<std::string, Info>& rep_map)
{
	std::ifstream in_json_file(filename);
	if (!in_json_file)
		return;

	nlohmann::json data = nlohmann::json::parse(in_json_file);
	in_json_file.close();

	for (int i = 0; i < tov_size; i++)
	{
		rep_map[convert_to_utf8(tov[i])].ordered_count += data[convert_to_utf8(tov[i])][u8"Заказано"];
		rep_map[convert_to_utf8(tov[i])].sold_count += data[convert_to_utf8(tov[i])][u8"Продано"];
		rep_map[convert_to_utf8(tov[i])].disposed_count += data[convert_to_utf8(tov[i])][u8"Утилизировано"];
	}
}

