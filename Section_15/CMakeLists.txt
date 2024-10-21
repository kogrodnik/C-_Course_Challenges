cmake_minimum_required(VERSION 3.14)
project(Inheritance)

add_executable(${PROJECT_NAME} main.cpp Account.cpp AccountUtil.cpp SavingsAccount.cpp CheckingAccount.cpp TrustAccount.cpp)