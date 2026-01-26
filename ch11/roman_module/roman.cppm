// roman.cppm - Interface file ofr a Roman numerals
export module roman;
import std;

export std::string to_roman(unsigned int i);
export unsigned int from_roman(std::string_view roman);
