return {
  {
    "stevearc/conform.nvim",
    dependencies = { "mason.nvim" },
    opts = function(_, opts)
      opts.formatters_by_ft = opts.formatters_by_ft or {}
      -- Add separate formatters for each language here
      -- You can easily add more by following the pattern: lang = { "formatter" }
      
      -- C/C++
      opts.formatters_by_ft.c = { "clang-format" }
      opts.formatters_by_ft.cpp = { "clang-format" }
      
      -- Python (using black as standard, but you can change to "ruff_format" etc)
      opts.formatters_by_ft.python = { "black" }
      
      -- Java
      -- using google-java-format. 
      -- If you prefer jdtls (LSP) formatting, you can remove this line 
      -- and rely on lsp_fallback = true
      opts.formatters_by_ft.java = { "google-java-format" }
      
      -- Enable format on save if desired
      opts.format_on_save = { timeout_ms = 500, lsp_fallback = true }
    end,
  },
  
  -- Ensure the formatters are installed via Mason
  {
    "mason-org/mason.nvim",
    opts = function(_, opts)
      opts.ensure_installed = opts.ensure_installed or {}
      vim.list_extend(opts.ensure_installed, {
        "clang-format",       -- C/C++
        "google-java-format", -- Java
        "black",              -- Python
      })
    end,
  },
}