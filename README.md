# tree-sitter-runscript

Runscript grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Installation

### Neovim

Install [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter), and add the following to your `init.lua`:

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

After doing this, start `nvim` and run `:TSInstall runscript`

Copy the contents of [`queries/`](https://git.sr.ht/~theonlymrcat/tree-sitter-runscript/tree/master/item/queries) onto your runtime path, as described in
[`nvim-treesitter#adding-queries`](https://github.com/nvim-treesitter/nvim-treesitter#adding-queries)

If you haven't already, you will also have to set up a `runscript` filetype with [`vim.filetype.add()`](https://neovim.io/doc/user/lua.html#vim.filetype.add())

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

Then copy the contents of [`queries/`](https://git.sr.ht/~theonlymrcat/tree-sitter-runscript/tree/master/item/queries) into `runtime/queries/runscript/` (where `runtime` is the helix runtime
directory; `/var/lib/helix/runtime` on Linux)
