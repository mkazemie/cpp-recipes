#include <iostream>
#include <cstdint>

enum class Status { Unknown, Connected, Disconnected };
enum class UserPermission { Unknown, User, Admin };

// POD struct to hold combined information
struct UserInfo
{
    Status status;
    UserPermission permission;
    std::int32_t id;
};


int main()
{
    Status currentStatus = Status::Connected;
    UserPermission permission = UserPermission::Unknown;
    std::uint16_t id = 1001u;

    // UserInfo user1 = { currentStatus, permission, id };
    //Or
    UserInfo user1 = { .status = currentStatus, .permission = permission, .id = id }; // C++20 Feature

    int combined = (int)user1.status * 10 + (int)user1.permission;
    // Example:
    // Connected (1) * 10 + Unknown (0) = 10

    switch (combined)
    {
        case 00:
            std::cout << "Unknown / Unknown\n";
            break;
        case 10:
        {
            std::cout << "Connected / Unknown\n";
            std::int32_t value = int(Status::Unknown);
            std::cout << value << '\n';
            break;
        }
        case 11:
        {
            std::cout << "Connected / User\n";
            break;
        }
        case 12:
            std::cout << "Connected / Admin\n";
            break;
        default:
            std::cout << "Other combination\n";
    }
    return 0;
}