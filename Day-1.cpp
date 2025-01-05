/*
 Task:
 You need to implement a function that can efficiently detect if specific glitch patterns exist within a larger stream of video data.
 This will help prevent corrupted frames from reaching the user device.

 Input Formate:
     VideoStream: A stream representing a segment of the video data stream(length: 1 to 10^5)
       Contains only '0' and '1' characters.

     GlitchPattern: A stream representing the non-problematic pattern (length: 1 to 100)
       Contains only '0' and '1' characters.

 Output Format:
    Return true if the glitch pattern is found in the video stream.
    return false otherwise.
*/

#include <iostream>
#include <string>

using namespace std;

bool containsGlitchPattern(const string &videoStream, const string &glitchPattern)
{
    return videoStream.find(glitchPattern) != string::npos;
}
// Note: The below function using sliding window technique to solve the problem.
// bool containsGlitchPattern(const string &videoStream, const string &glitchPattern)
// {
//     int n = videoStream.size();
//     int m = glitchPattern.size();
//     if (m > n)
//         return false;
//     for (int i = 0; i <= n - m; ++i)
//     {
//         if (videoStream.substr(i, m) == glitchPattern)
//         {
//             return true;
//         }
//     }
//     return false;
// }

int main()
{
    string videoStream, glitchPattern;
    cin >> videoStream;
    cin >> glitchPattern;

    if (containsGlitchPattern(videoStream, glitchPattern))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}