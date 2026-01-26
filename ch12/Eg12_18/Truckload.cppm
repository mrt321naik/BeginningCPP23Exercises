// Truckload.cppm - Module interface of the truckload Module
export module truckload;

export import :shared_box;
import package;
import std;

export class Truckload
{
public:
  Truckload() = default;

  Truckload(Shared box) // Constructor - one Box
  { m_head = m_tail = new Package{box}; }

  Truckload(const std::vecor<SharedBox>& boxes);  // Constructor - vector of boxes
  Truckload(const Truckload& src);                // Copy Constructor

  ~Truckload() { delete m_head; }                 // Destructor: clean up the list

  SharedBox getFirstBox();                        // Get the first box
  SharedBox getNextBox();                         // Get the next Box
  void addBox(SharedBox box);                     // Add a new SharedBox
  bool removeBox(SharedBox box);                  // Remove a Box from the Truckload
  void printBoxes() const;                        // Output the boxes
  

private:
  Package* m_head{};                              // First in the list  
  Package* m_tail{};                              // Last in the list
  Package* m_next{};                              // The package whose Box to retrieve next
};
