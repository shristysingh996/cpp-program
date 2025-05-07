#include <iostream>
#include <cstdio>  // For rename and remove functions

int main() {
    const char* oldFilename = "old_file.txt";  // The original file name
    const char* newFilename = "new_file.txt";  // The new file name

    // Create a sample file (for demonstration)
    FILE* file = fopen(oldFilename, "w");
    if (file == nullptr) {
        std::cerr << "Error: Could not create the file!" << std::endl;
        return 1;
    }
    fputs("This is a test file for renaming and deleting.\n", file);
    fclose(file);

    std::cout << "File created: " << oldFilename << std::endl;

    // Rename the file using rename()
    if (rename(oldFilename, newFilename) != 0) {
        std::perror("Error renaming the file");
        return 1;
    }
    std::cout << "File renamed from " << oldFilename << " to " << newFilename << std::endl;

    // Now, let's delete the file using remove()
    if (remove(newFilename) != 0) {
        std::perror("Error deleting the file");
        return 1;
    }
    std::cout << "File " << newFilename << " has been deleted successfully." << std::endl;

    return 0;
}
