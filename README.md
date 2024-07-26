# Notion Browser

This project is a simple Qt-based browser application that opens the Notion website using `QWebEngineView` for rendering web content. It includes a persistent storage profile to handle cookies and other web data.

## Features

- Opens the Notion website in a maximized window.
- Uses a custom `QWebEngineProfile` to store cookies and other data persistently.
- Configures the storage path for the profile.

## Requirements

- Qt 5.15 or later (includes `QtWebEngine` module)
- A C++ compiler compatible with Qt

## Building the Project

To build the project, you need to run the provided `compile.sh` script. The script sets up the necessary environment and compiles the code. Follow these steps:

1. **Ensure Qt is Installed:**
   Make sure you have Qt installed on your system. You can download it from [the official Qt website](https://www.qt.io/download).

2. **Compile the Project:**
   Open a terminal and navigate to the project directory. Run the `compile.sh` script with the following command:

   ```bash
   ./compile.sh
   ```

The script will handle the compilation process. Make sure it has execute permissions; you can set this with:

```bash
chmod +x compile.sh
```

3. Run the Application:
Once compiled, run the application with:
```bash
./notion
```

## Creating a Desktop Entry
To create a convenient desktop shortcut for launching the Notion Browser, you can create a .desktop entry file. Follow these steps:

Create the Desktop Entry File:
### 1. Create the Desktop Entry File
Create a file named notion-browser.desktop in ~/.local/share/applications/ (for a user-specific entry) or /usr/share/applications/ (for a system-wide entry). Use the following content, replacing /path/to/NotionBrowser with the actual path to the compiled binary:

```ini
[Desktop Entry]
Name=Notion Browser
Comment=Open Notion in a custom Qt browser
Exec=/path/to/notion/folder/notion
Icon=/path/to/notion/folder/images/notion.svg
Terminal=false
Type=Application
Categories=Utility;WebBrowser;
StartupWMClass=notion
```

### 2. Make the Desktop Entry Executable:
After creating the .desktop file, make it executable with:
```bash
chmod +x ~/.local/share/applications/notion-browser.desktop
```

### Launch the Application:
You should now be able to find "Notion Browser" in your application menu or search for it using your desktop environment's application launcher.