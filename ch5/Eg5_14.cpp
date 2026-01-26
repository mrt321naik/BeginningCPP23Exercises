// Eg5_14.cpp - Using array<T,N> to create Body Mass Inded (BMI) table
// (BMI = weight/(height*height)), with weight in kilograms, height in meters
#include<iostream>
#include<print>

  using num = const unsigned;
  using snum = const double;

  int main() 
  {
   num  min_wt {100};    // Minimum weight in table (in pounds)
   num  max_wt {250};    // Maximum weight in table
   num  wt_step {10};
   num  wt_count {1 + (max_wt - min_wt) / wt_step};

   num  min_ht {48};     // Minimum height in table (inches)
   num  max_ht {84};     // Maximum height in table
   num  ht_step {2};
   num  ht_count { 1 + (max_ht - min_ht) / ht_step };
   snum lbs_per_kg {2.2};         // Pounds per kilogram
   snum ins_per_m {39.37};        // Inshes per meters
   std::array<unsigned, wt_count> weight_lbs {};
   std::array<unsigned, ht_count> height_ins {};

    // Create weights from 100lbs in steps of 10lbs
    for (unsigned i{}, w{ min_wt }; i < wt_count ; w += wt_step, ++i)
  {
    weight_lbs[i] = w;
  }

    // Create heights from 48 inches in steps of 2 inches
    for (unsigned i{}, h{ min_ht }; h <= max_ht; h += ht_step)
  {
    height_ins.at(i++) = h;
  }
  // Output table headings
  std::print("{:>8}", '|');
  for (auto w : weight_lbs)
    std::print("{:^6}|", w);
  std::println("");

  // Output line below headings
  for (unsigned i{1}; i < wt_count; ++i)
    std::print("-------");
  std::println("");

  num inches_per_foot {12u};
  for (auto h: height_ins)
  {
    num feet = h / inches_per_foot;
    snum inches = h % inches_per_foot;
       std::print("{:2}'{:2}\" |", feet, inches);
       snum h_m = h / ins_per_m;
       for (auto w : weight_lbs)
          { snum w_kg = w / lbs_per_kg; // Weight in kilogram
         snum bmi = w_kg / (h_m * h_m);
         std::print(" {:2.1f} |", bmi);

    }
      std::println("");

     }
      // Output line below table
      for (size_t i {1}; i < wt_count; ++i)
        { std::print("--------");
          std::println("\nBMI from 18.5 to 24.9 is normal");
              }
  }

