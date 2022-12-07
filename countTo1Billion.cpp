#include <iostream>
#include <chrono> // https://cplusplus.com/reference/chrono/

using namespace std::chrono;

int main() {
    int i = 1000000000000000000;
    // Get starting timepoint
    auto start = high_resolution_clock::now();
    while (i--) {
        // std::cout << i << "\n";
        // if (i == 999999999) {
        //     std::cout << "prima cifra." << i << std::endl;
        // }
        // if (i == 1) {
        //     std::cout << "ultima cifra." << i << std::endl;
        // }
    }
    
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto durationM = duration_cast<microseconds>(stop - start);
    auto durations = duration_cast<seconds>(stop - start);
    std::cout << "Time taken by function: "
         << durationM.count() << " microseconds" << std::endl;
    std::cout << "Time taken by function: "
        << durations.count() << " seconds" << std::endl;
    return 0;
}

// time with cout each number:
// ime taken by function: 773555077 microseconds
// Time taken by function: 773 seconds

// time without display:
// Time taken by function: 1642565 microseconds
// Time taken by function: 1 seconds

// time with first and last
// prima cifra.999999999
// ultima cifra.1
// Time taken by function: 1983930 microseconds
// Time taken by function: 1 seconds

/*
Time taken by function: 2 microseconds
Time taken by function: 0 seconds
PS C:\GitRepos\CPP> cd "c:\GitRepos\CPP"
PS C:\GitRepos\CPP> & .\"countTo1Billion.exe"
Time taken by function: 1639 microseconds
Time taken by function: 0 seconds
PS C:\GitRepos\CPP> cd "c:\GitRepos\CPP"
PS C:\GitRepos\CPP> & .\"countTo1Billion.exe"
Time taken by function: 1478543 microseconds
Time taken by function: 1 seconds
PS C:\GitRepos\CPP> cd "c:\GitRepos\CPP"
PS C:\GitRepos\CPP> & .\"countTo1Billion.exe"
Time taken by function: 5264448 microseconds
Time taken by function: 5 seconds
PS C:\GitRepos\CPP> cd "c:\GitRepos\CPP"
PS C:\GitRepos\CPP> & .\"countTo1Billion.exe"
Time taken by function: 4044691 microseconds
Time taken by function: 4 seconds
PS C:\GitRepos\CPP> cd "c:\GitRepos\CPP"
PS C:\GitRepos\CPP> & .\"countTo1Billion.exe"
Time taken by function: 4234396 microseconds
Time taken by function: 4 seconds
*/