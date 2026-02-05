// eg21_02.cpp - Asserting that a type models a concept
import std;

template <typename Iter>
concept BidirectionalIterator = true; // Feel free to work out all requirements...

// Include here these (sometimes partial) concept definitions from before:
// NoExceptDestructible<>, Stirng<>, Character<>, and RandomAccessIterator<>.

static_assert(NoExceptDestructible<std::string>);
static_assert(NoExceptDestructible<int>);
static_assert(String<std::string>);
static_assert(!String<std::vector<char>>);
static_assert(Character<char>);
static_assert(Character<const char>);
static_assert(RandomAccessIterator<std::vector<int>::iterator>);
static_assert(!RandomAccessIterator<std::list<int>::iterator>);
static_assert(RandomAccessIterator<int*>);
