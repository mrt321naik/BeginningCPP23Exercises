// math.cpp - Module implementation file containing function definitions
module math; // Remember: this implicitly imports the primary module interface...

// Option 1: define in nested block (compact syntax)
namespace math::averages
{
  double arithmetic_mean(std::span<const double>& data) { /* body code...*/ }
}

// Option 2: define in nested namespace blocks
namespace math
{
  namespace averages
  {
    double geometric_mean(std::span<const double>& data) { /* body code */}
  }
}

// Option 3: define using fully qualified function name
double math::averages::rms(std::span<const double>& data) { /* body code...*/}

// Option 4: define using qualified name in outer namespace block
namespace math
{
  double averages::median(std::span<const double>& data) { /* body code... */}
}


