# C++ Project: Travelling salesman problem

A simple C++ travelling salesman problem developed in VS Code on Linux.

## 🚀 Features
* C++17 Standard support.
* Configured for VS Code IntelliSense.
* Clean project structure with build artifacts ignored.

## 🛠️ Environment Setup (WSL & VS Code)

To get this environment running on a Windows machine:

1.  **Install WSL**: Open PowerShell as Admin and run `wsl --install`. Restart your PC.
2.  **Install Build Tools**: Open your Ubuntu terminal and run:
    ```bash
    sudo apt update && sudo apt install build-essential gdb
    ```
3.  **VS Code Extensions**: 
    * Install the **WSL** extension in VS Code.
    * Use the green button (bottom-left) to **Connect to WSL**.
    * Install the **C/C++ Extension** *inside* the WSL window.

## 📥 Getting Started (Cloning the Repo)
To copy this project to your local machine, open your terminal and run:

```bash
# Clone the repository
git clone https://github.com/SebastianGoldmann/travelling_salesman_problem.git

# Navigate into the project folder
cd Travelling_salesman
```

## 🏗️ How to Build
To compile the program manually from the terminal, navigate to the root directory and run:

```bash
# Create the binary directory if it doesn't exist
mkdir -p cpp_app/bin

# Compile the source code
g++ cpp_app/main.cpp -o cpp_app/bin/my_program
```

## 🏃 How to Run
```bash
# run the script
./cpp_app/bin/my_program
```

## 📂 project structure

`cpp_app/` - TSP problem programmed in cpp

`python_app/` - duplicated code in Python


## Final Check on your `.gitignore`
To make sure your `git status` stays clean with this new structure, your `.gitignore` file should look like this:

```gitignore
# Ignore the build folder
cpp_app/bin/

# Ignore VS Code settings
.vscode/