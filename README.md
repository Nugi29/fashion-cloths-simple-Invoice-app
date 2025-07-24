# Smart Fashion - Simple Invoice Application 👔

A simple yet elegant C-based command-line invoice generator for fashion clothing stores. This application creates beautifully formatted ASCII art invoices for various clothing items including T-shirts, Trousers, Shirts, and Shorts.

## ✨ Features

- **Interactive Invoice Creation**: User-friendly command-line interface
- **Multiple Clothing Categories**: Supports T-shirts, Trousers, Shirts, and Shorts
- **Discount Calculations**: Automatic discount percentage calculations
- **Beautiful ASCII Art**: Eye-catching ASCII art headers for each clothing category
- **Professional Invoice Layout**: Clean, tabular invoice format
- **Customer Information**: Capture customer name and date
- **Total Calculation**: Automatic total amount calculation across all items


## 🚀 Getting Started

### Prerequisites

- **C Compiler**: GCC, Clang, or Microsoft Visual C++
- **CMake** (optional, for building with CMake)
- **Windows PowerShell** or **Command Prompt** (for Windows users)

### Installation & Building

#### Option 1: Using CMake
```powershell
mkdir build
cd build
cmake ..
cmake --build .
```

#### Option 2: Direct Compilation
```powershell
gcc -o fashon.exe main.c
```

### Running the Application

```powershell
.\fashon.exe      # On Windows
```

```bash
./fashon          # On Linux/Mac
```

## 📝 How to Use

1. **Run the application**
2. **Enter the date** when prompted
3. **Enter customer name**
4. **For each clothing category (T-shirts, Trousers, Shirts, Shorts):**
   - Enter quantity
   - Enter unit price
   - Enter discount rate (as percentage)
5. **View the generated invoice** with all items and total amount

## 🛠️ Technical Details

- **Language**: C (C11 standard)
- **Build System**: CMake
- **Dependencies**: Standard C library only
- **Platform**: Cross-platform (Windows, Linux, macOS)

## 📁 Project Structure

```
Fashion/
├── main.c              # Main application source code
├── CMakeLists.txt      # CMake build configuration
├── README.md           # Project documentation
└── cmake-build-debug/  # Build output directory
    └── Fashon.exe      # Compiled executable
```

## 🎯 Supported Clothing Items

| Category | Description |
|----------|-------------|
| T-Shirts | Casual wear t-shirts |
| Trousers | Formal and casual trousers |
| Shirts   | Dress shirts and casual shirts |
| Shorts   | Summer shorts and casual wear |

## 🔧 Features in Detail

### Discount Calculation
The application automatically calculates discounts based on:
- Quantity × Unit Price × (Discount Rate ÷ 100)
- Final amount = Total - Discount Amount

### Invoice Format
- Professional tabular layout
- Clear item descriptions with ASCII art headers
- Quantity, unit price, discount, and amount columns
- Grand total calculation
- Customer and date information header


## 📝 License

This project is open source and available for educational purposes. Feel free to use, modify, and distribute as needed.


## Author

⭐️ From [Nugi29](https://github.com/Nugi29)



