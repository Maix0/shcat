{
  description = "Flake utils demo";

  inputs = {
    flake-utils.url = "github:numtide/flake-utils";
    generic_c.url = "github:maix0/generic_c";
    c_formatter_42.url = "github:maix0/c_formatter_42-flake";
  };
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
          packages = [
            generic_c.packages.${system}.default
            c_formatter_42.packages.${system}.default
            pkgs.clang
            pkgs.clang-tools
            pkgs.fastmod
            pkgs.libbsd
            pkgs.norminette
            pkgs.valgrind
            pkgs.tree
          ];
        };
      }
    );
}
