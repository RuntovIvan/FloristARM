#include "convert_to_utf8.h"

std::string convert_to_utf8(const std::string& input) {
    // Получаем размер результирующей строки в юникод
    int size = MultiByteToWideChar(CP_ACP, MB_COMPOSITE,
        input.c_str(), input.length(),
        nullptr, 0);

    // Создаем временную строку в юникод
    std::wstring utf16_str(size, L'\0');

    // Конвертируем в юникод
    MultiByteToWideChar(CP_ACP, MB_COMPOSITE,
        input.c_str(), input.length(),
        &utf16_str[0], size);

    // Получаем размер результирующей UTF-8 строки
    int utf8_size = WideCharToMultiByte(CP_UTF8, 0,
        utf16_str.c_str(), utf16_str.length(),
        nullptr, 0, nullptr, nullptr);

    // Создаем результирующую UTF-8 строку
    std::string utf8_str(utf8_size, '\0');

    // Конвертируем в UTF-8
    WideCharToMultiByte(CP_UTF8, 0,
        utf16_str.c_str(), utf16_str.length(),
        &utf8_str[0], utf8_size, nullptr, nullptr);

    return utf8_str;
}