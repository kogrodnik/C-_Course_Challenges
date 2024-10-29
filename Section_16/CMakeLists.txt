cmake_minimum_required(VERSION 3.14)
project(Polymorphism)

add_executable(${PROJECT_NAME} main.cpp Account.cpp AccountUtil.cpp CheckingAccount.cpp SavingsAccount.cpp TrustAccount.cpp Printable.cpp)