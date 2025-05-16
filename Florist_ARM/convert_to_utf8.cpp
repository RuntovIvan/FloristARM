#include "convert_to_utf8.h"

std::string convert_to_utf8(const std::string& input) {
    // �������� ������ �������������� ������ � ������
    int size = MultiByteToWideChar(CP_ACP, MB_COMPOSITE,
        input.c_str(), input.length(),
        nullptr, 0);

    // ������� ��������� ������ � ������
    std::wstring utf16_str(size, L'\0');

    // ������������ � ������
    MultiByteToWideChar(CP_ACP, MB_COMPOSITE,
        input.c_str(), input.length(),
        &utf16_str[0], size);

    // �������� ������ �������������� UTF-8 ������
    int utf8_size = WideCharToMultiByte(CP_UTF8, 0,
        utf16_str.c_str(), utf16_str.length(),
        nullptr, 0, nullptr, nullptr);

    // ������� �������������� UTF-8 ������
    std::string utf8_str(utf8_size, '\0');

    // ������������ � UTF-8
    WideCharToMultiByte(CP_UTF8, 0,
        utf16_str.c_str(), utf16_str.length(),
        &utf8_str[0], utf8_size, nullptr, nullptr);

    return utf8_str;
}