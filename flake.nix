{
  description = "Flake utils demo";

  inputs.nixpkgs.url = "github:nixos/nixpkgs";
  inputs.flake-utils.url = "github:numtide/flake-utils";
  inputs.generic_c.url = "github:Maix0/generic_c";
  inputs.c_formatter_42.url = "github:Maix0/c_formatter_42-flake";

  outputs = {
    self,
    nixpkgs,
    flake-utils,
    generic_c,
    c_formatter_42,
  }:
    flake-utils.lib.eachDefaultSystem (
      system: let
        pkgs = nixpkgs.legacyPackages.${system};
      in {
        devShell = pkgs.mkShell {
          packages = with pkgs;
            [
              (clang-analyzer.override {
                clang = pkgs.llvmPackages_18.clang;
                llvmPackages = pkgs.llvmPackages_18;
              })
              clang
              gnumake
              llvmPackages_18.bintools
              tokei
              norminette
              coreutils
              generic_c.packages.${system}.default
              c_formatter_42.packages.${system}.default
              python312
              tree
            ]
            ++ (
              if system == "x86_64-linux" || system == "aarch64-linux"
              then [valgrind valgrind.dev]
              else []
            );
          #ASAN_OPTIONS = "strict_string_checks=1:detect_stack_use_after_return=1:check_initialization_order=1:strict_init_order=1";
        };
      }
    );
}
