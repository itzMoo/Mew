return {
  -- Rainbow delimiters for colorful brackets
  {
    "HiPhish/rainbow-delimiters.nvim",
    config = function()
      -- Rainbow delimiters configuration
      vim.g.rainbow_delimiters = {
        strategy = {
          [""] = require("rainbow-delimiters.strategy.global"),
          lua = require("rainbow-delimiters.strategy.local"),
        },
        query = {
          [""] = "rainbow-delimiters",
          lua = "rainbow-blocks",
        },
      }

      -- Custom colors (VS Code-like)
      vim.api.nvim_set_hl(0, "RainbowDelimiterRed",    { fg = "#E06C75" })
      vim.api.nvim_set_hl(0, "RainbowDelimiterYellow",  { fg = "#E5C07B" })
      vim.api.nvim_set_hl(0, "RainbowDelimiterBlue",    { fg = "#61AFEF" })
      vim.api.nvim_set_hl(0, "RainbowDelimiterOrange",  { fg = "#D19A66" })
      vim.api.nvim_set_hl(0, "RainbowDelimiterGreen",   { fg = "#98C379" })
      vim.api.nvim_set_hl(0, "RainbowDelimiterViolet",  { fg = "#C678DD" })
      vim.api.nvim_set_hl(0, "RainbowDelimiterCyan",    { fg = "#56B6C2" })
    end,
  },
}
