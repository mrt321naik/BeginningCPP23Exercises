// Eg8_13.cpp - Returning a pointer
#include<iostream>
#include<vector>
#include<memory>
#include<print>

void print_data(const double data[], std::size_t count = 1,
                const std::string& title = "Data Values",
                unsigned width = 10, unsigned perLine = 5);
const double* largest(const double data[], std::size_t count);
const double* smallest(const double data[], std::size_t count);
double* shift_range(double data[], std::size_t count, double delta);
double* scale_range(double data[], std::size_t count, double divisor);
double* normalize_range(double data[], std::size_t count);

int main()
{
  double samples[] {
                      11.0, 23.0, 13.0, 4.0,
                      57.0, 36.0, 317.0, 88.0,
                      9.0, 100.0, 121.0, 12.0
                    };
    const auto count{std::size(samples)};         // Number of samples
    print_data(samples, count, "Original Values"); // Output original Values
    normalize_range(samples, count);              // Normalize the Values
    print_data(samples, count, "Normalized Values", 12);  // Output normalized Values
}

// Prints an array of double Values
void print_data(const double data[], std::size_t count, 
                const std::string& title, unsigned width, unsigned perLine)
{
  std::println("{}", title);      // Display the title

  // Print the data values
  for (std::size_t i {}; i < count; ++i)
  {
    // Use dynamic field width and precision 
       std::print("{:{}.{}g}", data[i], width, width / 2);
       if ((i + 1) % perLine == 0)    // Newline after perLine values
        std::println("");
  }
  std::println("");
}
