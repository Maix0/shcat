{
  description = "Flake utils demo";
 
  inputs.nixpkgs.url = "github:nixos/nixpkgs";
  inputs.flake-utils.url = "github:numtide/flake-utils";
  inputs.generic_c.url = "github:Maix0/generic_c";
  inputs.c_formatter_42.url = "github:Maix0/c_formatter_42-flake";
  inputs.rust-overlay.url = "github:oxalica/rust-overlay";

  outputs = {
    self,
    nixpkgs,
    flake-utils,
    generic_c,
    c_formatter_42,
    rust-overlay,
  }:
    flake-utils.lib.eachDefaultSystem (
      system: let
        pkgs = import nixpkgs {
          inherit system;
          overlays = [
            (import rust-overlay)
            (final: prev: {
              clang-analyzer = prev.clang-analyzer.override {
                clang = final.llvmPackages_18.clang;
                llvmPackages = final.llvmPackages_18;
              };
            })
          ];
        };
      in {
        devShell = pkgs.mkShell {
          packages = with pkgs; [
            clang-analyzer
            clang
            gnumake
            generic_c.packages.${system}.default
            c_formatter_42.packages.${system}.default
            llvmPackages.bintools
            norminette
            tokei
            coreutils
          ] ++ (if system == "x86_64-linux" then [valgrind valgrind.dev] else []);
          ASAN_OPTIONS = "strict_string_checks=1:detect_stack_use_after_return=1:check_initialization_order=1:strict_init_order=1";
        };
      }
    );
}
