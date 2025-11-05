# 🧩 Blueprint Subsystems Plugin for Unreal Engine 5.6

**BlueprintSubsystems** is a lightweight Unreal Engine 5.6 plugin that allows you to create **Blueprint-only Subsystems** — no C++ required.  
It’s perfect for designing global game logic systems (such as Game State Managers, Save Systems, Sound Controllers, or Achievements) that are accessible from anywhere in your project.

---

## 🚀 Features

✅ Create fully Blueprint-based Subsystems (e.g., GameInstanceSubsystem)  
✅ Access them globally from any Blueprint or C++ class  
✅ 100% compatible with Unreal Engine 5.6
✅ Requires no engine modifications  
✅ Works as a standalone Runtime plugin  
✅ Clean, minimal C++ foundation for Blueprint scripting  

---

## 🛠️ Installation

### 1️⃣ Copy the plugin

Clone or download the `BlueprintSubsystems1.0.zip` and unzip into your project:<br>
`YourProject/Plugins/`<br><br>
Or install it globally for all projects:<br>
`<UnrealEngineRoot>/Engine/Plugins/`<br>

---

## ⚙️ Enabling the Plugin

1. Open your project in Unreal Engine.  
2. Go to **Edit → Plugins → Installed → Blueprint Subsystems**.  
3. Enable the plugin and restart the editor.

---

## 📘 Creating a Blueprint Subsystem

1. In the **Content Browser**, click:  
   **Add → Blueprint Class → All Classes → BlueprintGameInstanceSubsystem**  
2. Name your new Blueprint, for example: `BP_MyGameSubsystem`.  
3. Open it and add logic inside the Blueprint Graph using:  
   - **Event OnInitialize** – runs when the subsystem is initialized (e.g., game start).  
   - **Event OnDeinitialize** – runs when the subsystem is destroyed (e.g., game shutdown).  

---

## 🧭 Using the Subsystem in Blueprints

You can access your subsystem anywhere in the project by calling subsytem like any other.

## Limitations

For now plugin allows only for creating subsystem as `GameInstanceSubsystem`.<br>
In future I'll add more subsystems compabilities like <br>
`WorldSubsystem`<br>
`LocalPlayerSubsystem`<br>
`EngineSubsystem`<br>
`EditorSubsystem`<br>
