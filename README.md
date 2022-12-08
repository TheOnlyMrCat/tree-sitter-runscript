# tree-sitter-runscript

Runscript grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Installation

### Neovim

Install [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter).

#### Add the parser

Source: <https://github.com/nvim-treesitter/nvim-treesitter#adding-parsers>

Add the following lua code to your startup file:

```lua
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.runscript = {
  install_info = {
    url = "https://git.sr.ht/~theonlymrcat/tree-sitter-runscript",
    files = {"src/parser.c"},
    generate_requires_npm = false,
    requires_generate_from_grammar = false,
  },
  filetype = "runscript",
}
```

After doing this, start `nvim` and run `:TSInstall runscript` and `:TSInstall bash`. You only need to do this once.

#### Add queries

Source: <https://github.com/nvim-treesitter/nvim-treesitter#highlight>

Copy the contents of [`queries/nvim/`](https://git.sr.ht/~theonlymrcat/tree-sitter-runscript/tree/master/item/queries/nvim) into
`.config/nvim/queries/runscript`.

#### Add the filetype

Add the following lua code to your startup file:

```lua
vim.filetype.add({
  extension = {
    run = "runscript",
  },
  filename = {
    ['run'] = "runscript",
  },
})
```

Or the equivalent vimscript code.

#### Enable tree-sitter syntax highlighting

Source: <https://github.com/nvim-treesitter/nvim-treesitter#highlight>

Add the following lua code to your startup file:

```lua
require'nvim-treesitter.configs'.setup {
  highlight = {
    -- Replace this with `enable = true` to enable tree-sitter highlighting for all buffers
    enable = { "runscript" },
    -- See source link for details on this option
    additional_vim_regex_highlighting = false,
  },
}
```

### Helix

Add the following to your `languages.toml` file (usually in `~/.config/helix`):

```toml
[[language]]
name = "runscript"
scope = "source.runscript"
injection-regex = "^runscript$"
file-types = ["run"]
roots = []
comment-token = "#"

[[grammar]]
name = "runscript"
source = { git = "https://git.sr.ht/~theonlymrcat/tree-sitter-runscript", rev = "49137648f2932637288804d6f83f5b90e177cbca" }
```

Then copy the contents of [`queries/helix/`](https://git.sr.ht/~theonlymrcat/tree-sitter-runscript/tree/master/item/queries/helix)
into `runtime/queries/runscript/` (where `runtime` is the helix runtime directory; `/var/lib/helix/runtime` on Linux)

To find your runtime directory, check the first few lines of output of `hx --health`
