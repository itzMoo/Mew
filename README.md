# 🐈 Mew — Dotfiles

Personal environment configuration files, version-controlled and ready to deploy on any machine.

## Overview

This repository contains configuration files for the tools that make up my daily environment — terminal emulators, editors, window managers, and more. Each config is cross-platform where possible, with OS-specific settings clearly marked and commented so they can be toggled without rewriting anything.

## Structure

Each top-level directory corresponds to one tool. Drop the directory into the appropriate config path for that tool and it works.

```
Mew/
├── <tool>/     # one directory per tool
│   └── ...     # config files for that tool
└── README.md
```

## Setup

### Clone

```bash
git clone https://github.com/itzMoo/Mew.git ~/Mew
```

### Deploy (Linux / macOS)

Symlink each tool's directory into your config location:

```bash
ln -s ~/Mew/<tool> ~/.config/<tool>
```

### Deploy (Windows)

```powershell
New-Item -ItemType Junction -Path "$HOME\.config\<tool>" -Target "$HOME\Mew\<tool>"
```

Replace `<tool>` with the actual directory name for each config you want to activate.

## Conventions

- **OS-specific settings** are grouped in clearly labeled comment boxes with all three options (Linux / macOS / Windows) present — uncomment the one you need.
- **Themes** are never hardcoded. Each tool loads a theme from a separate file managed by a shell alias so you can switch themes from the terminal without touching this repo.
- **Sensitive files** (keys, tokens, credentials) are not tracked here.

## Updating

Pull the latest changes and reload the affected tool:

```bash
cd ~/Mew && git pull
```

Most tools support live config reload — check the tool's documentation for the exact method.

## License

Personal use. Adapt freely.

---

**Last updated**: 2026-03-05
